class CfgPatches
{
	class CookZ
	{
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Medical"
		};
	};
};
class CfgMods
{
	class CookZ
	{
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"CookZ/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CookZ/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"CookZ/Scripts/5_Mission"
				};
			};
			class imageSets
			{
				files[]=
				{
					"CookZ\GUI\ImageSets\empty_box_icon.imageset",
					"CookZ\GUI\ImageSets\empty_can_icon.imageset",
					"CookZ\GUI\ImageSets\bread_form_icon.imageset"
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_CookZ_EmptyCans
	{
		name="CookZ_EmptyCans";
		displayName="Порожня консервна банка";
		ghostIcon="set:empty_can_icon image:empty_can_icon";
	};
	class Slot_CookZ_EmptyBoxes
	{
		name="CookZ_EmptyBoxes";
		displayName="Порожня картонна коробка";
		ghostIcon="set:empty_box_icon image:empty_box_icon";
	};
	class Slot_CookZ_BreadForm
	{
		name="CookZ_BreadForm";
		displayName="Форма для випікання хліба";
		ghostIcon="set:bread_form_icon image:bread_form_icon";
	};	
};
class CfgVehicles
{
	class Edible_Base;
	class Inventory_Base;
	class Snack_ColorBase;
	class SodaCan_ColorBase;
	class Bottle_Base;
	class SeedBase;
	class SmallStone: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmallStone0";
		descriptionShort="$STR_CfgVehicles_SmallStone1";
		model="\dz\gear\consumables\SmallStone.p3d";
		animClass="NoFireClass";
		weight=500;
		itemSize[]={1,1};
		canBeSplit=1;
		varQuantityDestroyOnMin=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=5;
		varStackMax=5;
		rotationFlags=17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\consumables\data\stone.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\consumables\data\stone.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\consumables\data\stone_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\consumables\data\stone_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\consumables\data\stone_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CookZ_EmptyCan: Inventory_Base
	{
		scope=2;
		displayName="Порожня консервна банка";
		descriptionShort="Порожня консервна банка. Можна використовувати для закривання готової їжі.";
		itemSize[]={1,2};
		model="\dz\gear\food\food_can.p3d";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
		weight=36.279999;
		soundImpactType="metal";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		inventorySlot[]=
		{
			"CookZ_EmptyCans"
		};
	};
	class CookZ_EmptyBox: Inventory_Base
	{
		scope=2;
		displayName="Порожня картонна коробка";
		descriptionShort="Порожня картонна коробка. Може бути використана для зберігання їжі.";
		itemSize[]={1,2};
		model="CookZ\data\dishes\boxed\food_box.p3d";
		hiddenSelections[]=
		{
			"box"
		};
		hiddenSelectionsTextures[]=
		{
			"CookZ\data\dishes\boxed\box_co.paa"
		};
		weight=36.279999;
		soundImpactType="metal";
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		inventorySlot[]=
		{
			"CookZ_EmptyBoxes"
		};
	};
	class CookZ_mini_metal_plate: Inventory_Base
	{
		scope=2;
		displayName="Металева заготовка";
		descriptionShort="Невеличкий шматок залізного листа. Може бути використаний для виготовлення консервної банки";
		model="CookZ\data\dishes\canned\mini_metal_plate.p3d";
		rotationFlags=34;
		weight=12;
		itemSize[]={2,3};
		itemBehaviour=0;
		canBeSplit=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=40;
		varQuantityDestroyOnMin=1;
		varStackMax=10;
		repairableWithKits[]={10};
		repairCosts[]={30};
		inventorySlot[]={};
	};
	class Pot: Bottle_Base
	{
	};
	class CookZ_Steamer_Pot: Pot
	{
		scope=2;
		displayName="Пароварка";
		descriptionShort="Звичайна стара пароварка, у теперішній час це дуже рідкісна річ. Використовується для приготування різноманітних консерв.";
		model="CookZ\data\steamer_pot\steamer_pot.p3d";
		weight=1000;
		itemSize[]={4,3};
		itemsCargoSize[]={6,6};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2000;
		varTemperatureMax=200;
		attachments[]=
		{
			"CookZ_EmptyCans",
			"CookZ_EmptyBoxes",
			"CookZ_BreadForm"
		};
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_CookZ_EmptyCans",
				"Slot_CookZ_EmptyBoxes",
				"Slot_CookZ_BreadForm"
			};
		};
	};
    class CookZ_Sunflower_Oil: Inventory_Base
	{
		scope=2;
		displayName="Соняшникова олія";
		descriptionShort="Скляна пляшка із рідиною схожою за запахом та консистенцією на соняшникову олію.";
		model="CookZ\data\sunflower_oil\sunflower_oil.p3d";
		weight=846;
		itemSize[]={1,2};
		varLiquidTypeInit=131072;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varTemperatureMax=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet="GlassBottle_in_B_SoundSet";
					id=202;
				};
				class GlassBottle_in_C
				{
					soundSet="GlassBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class GlassBottle_out_A
				{
					soundSet="GlassBottle_out_A_SoundSet";
					id=205;
				};
				class GlassBottle_out_B
				{
					soundSet="GlassBottle_out_B_SoundSet";
					id=206;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};	
	class Cauldron: Bottle_Base
	{
		attachments[]=
		{
			"CookZ_EmptyBoxes"
		};
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_CookZ_EmptyBoxes"
			};
		};
	};
	class FryingPan: Inventory_Base
	{
	}
	class CookZ_Large_Pan: FryingPan
	{
		scope=2;
		displayName="Потужна сковорода";
		descriptionShort="Це не просто велика сковорода, а справжній «гігант» у світі кухонного інструменту, що може справитися з усім, що в неї вкинеш.";
		model="CookZ\data\large_pan\large_pan.p3d";
		weight=10000;
		itemSize[]={5,5};
		itemsCargoSize[]={5,5};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varTemperatureMax=200;
		attachments[]=
		{
			"CookZ_EmptyBoxes"
		};
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_CookZ_EmptyBoxes"
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20000;
				};
			};
		};
	};
	class CookZ_Cookbook_Item: Inventory_Base
	{
		model="CookZ\data\cookbook\cookbook.p3d";
		rotationFlags=1;
		weight=150;
		itemSize[]={2,2};
		title="Кулінарія для тих, хто вижив.";
		author="Кіт Бард";
		chapters[]=
		{
			"CookZ\data\cookbook\01_introdcution.html",
			"CookZ\data\cookbook\02_boxed.html",
			"CookZ\data\cookbook\03_canned.html",
			"CookZ\data\cookbook\04_sausage.html",
			"CookZ\data\cookbook\05_misc.html"
		};
		chapterIcons[]=
		{
			"CookZ/data/cookbook/icon_read.edds",
			"CookZ/data/cookbook/icon_box.edds",
			"CookZ/data/cookbook/icon_can.edds",
			"CookZ/data/cookbook/icon_sausage.edds",
			"CookZ/data/cookbook/icon_cheese.edds"
		};
		displayName="Кулінарна книга";
		descriptionShort="Кулінарія для тих, хто вижив.";
		scope=2;
	};
	class Rag: Inventory_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class BandageDressing: Inventory_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class DisinfectantAlcohol: Edible_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class Rice: Edible_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class Worm: Edible_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
		cookz_staticQuantity=100;
	};
	class PotatoSeed: SeedBase
	{
		cookz_staticQuantity=250;
	};
	class PowderedMilk: Edible_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class Bone: Inventory_Base
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
		cookz_staticQuantity=40;
	};
	class Crackers: Snack_ColorBase
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class SaltySticks: Snack_ColorBase
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
	class SodaCan_Kvass: SodaCan_ColorBase
	{
		varTemperatureInit=0;
		varTemperatureMin=0;
		varTemperatureMax=100;
	};
};
class cfgLiquidDefinitions
{
	class CookZ_Liquid_Oil
	{
		type=131072;
		displayName="$STR_Oil";
		name="Oil";
		flammability=-10;
		colorWidget = 0x00EBBB00;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-15;
			water=-15;
			nutritionalIndex=75;
			toxicity = 0,001;
			digestibility=2;
		};
	};
};