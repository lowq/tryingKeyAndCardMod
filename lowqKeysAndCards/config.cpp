class CfgPatches
{
	class lowq_customKeysAndCards
	{
		units[]=
		{
			"evg_keycards_01",
			"evg_keycards_02",
			"evg_keycards_03",
			"lowq_key_01",
			"lowq_key_02",
			"lowq_key_03",
			"lowq_key_04",
			"lowq_key_05",
			"lowq_key_06",
			"lowq_key_07",
			"lowq_key_08",
			"lowq_key_09",
			"lowq_key_10",
			"lowq_key_11",
			"lowq_key_12",
			"lowq_key_13",
			"lowq_key_14",
			"lowq_key_15",
			"lowq_key_16",
			"lowq_key_17",
			"lowq_key_18",
			"lowq_key_19",
			"lowq_key_20",
			"lowq_key_21",
			"evg_keycard_holder_leather",
			"evg_keycard_holder_camo"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts", 
			"CRDTN_Core",
			"CRDTN_LockedDoors"
		};
		defines[] = {"CRDTN_LockedDoors_ItemBase"};
	};
};
class CfgMods
{
	class lowq_customKeysAndCards
	{
		dir="lowqKeysAndCards";
		name="Lowq Keys and Cards";
		credits="Lowq";
		author="Lowq";
		authorID="0";
		version="1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class imageSets
			{
				files[]=
				{
					"lowqKeysAndCards/Data/ImageSets/keycardsImageSet.imageset"
				};
			};
		};
	};
};
class CfgVehicles {
	class Inventory_Base;
	class lowq_key_base: CRDTN_LockedDoors_ItemBase
	{
		scope=0;
		model="lowqKeysAndCards\Data\Key\simple_key.p3d";
		rotationFlags=17;
        quantityBar = 1;
        canBeSplit=0;
		itemSize[]={1,1};
		hiddenSelections[]=
		{
			"key"
		};
		soundImpactType="metal";
	};

	class lowq_keycards_base: CRDTN_LockedDoors_ItemBase
	{
		scope=1;
		model="evg_customKeycards_V3\Data\Keycards\keyCard.p3d";
		hiddenSelections[]=
		{
			"keycard"
		};
		rotationFlags=16;
		soundImpactType="plastic";
	};

	class evg_keycards_01: lowq_keycards_base
	{
		scope=2;
		displayName="Karta Tisy";
		descriptionShort="Dvere Tisy";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Keycards\Textures\keyCard-TISY.paa"
		};
		inventorySlot[]=
		{
			"KeycardHolder1",
			"KeycardHolder2",
			"KeycardHolder3",
			"KeycardHolder4",
			"KeycardHolder5",
			"KeycardHolder6"
		};
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
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_ruin.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class evg_keycards_02: lowq_keycards_base
	{
		scope=2;
		displayName="Karta Skála";
		descriptionShort="Dvere Skála";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Keycards\Textures\keyCard-Krasno.paa"
		};
		inventorySlot[]=
		{
			"KeycardHolder1",
			"KeycardHolder2",
			"KeycardHolder3",
			"KeycardHolder4",
			"KeycardHolder5",
			"KeycardHolder6"
		};
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
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_ruin.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class evg_keycards_03: lowq_keycards_base
	{
		scope=2;
		displayName="Karta NWAF";
		descriptionShort="Dvere NWAF";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Keycards\Textures\keyCard-NWAF.paa"
		};
		inventorySlot[]=
		{
			"KeycardHolder1",
			"KeycardHolder2",
			"KeycardHolder3",
			"KeycardHolder4",
			"KeycardHolder5",
			"KeycardHolder6"
		};
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
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Keycards\Textures\keyCard_ruin.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class lowq_key_01: lowq_key_base
	{
		scope=2;
		displayName="Berezino";
		descriptionShort="Klúč Berezino police";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_02: lowq_key_base
	{
		scope=2;
		displayName="Berezino";
		descriptionShort="Klúč Berezino garage";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};class lowq_key_03: lowq_key_base
	{
		scope=2;
		displayName="Elektro";
		descriptionShort="Klúč Elektro";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_04: lowq_key_base
	{
		scope=2;
		displayName="Kozlovka";
		descriptionShort="Klúč Kozlovka";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_05: lowq_key_base
	{
		scope=2;
		displayName="Mogilevka";
		descriptionShort="Klúč Mogilevka";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	class lowq_key_06: lowq_key_base
	{
		scope=2;
		displayName="Prison island";
		descriptionShort="Klúč Prison island";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_07: lowq_key_base
	{
		scope=2;
		displayName="Zelenogorsk";
		descriptionShort="Klúč Zelenogorsk Military";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_olive_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_08: lowq_key_base
	{
		scope=2;
		displayName="Green Mt.";
		descriptionShort="Klúč Green Mt.";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_blue_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_09: lowq_key_base
	{
		scope=2;
		displayName="Cherno Kancl";
		descriptionShort="Klúč Cherno Kancl";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_blue_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_10: lowq_key_base
	{
		scope=2;
		displayName="Prison Island 2";
		descriptionShort="Klúč Prison Island 2";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_blue_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_11: lowq_key_base
	{
		scope=2;
		displayName="Stary Sobor 1";
		descriptionShort="Klúč Stary Sobor 1";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_blue_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_12: lowq_key_base
	{
		scope=2;
		displayName="Stary Sobor 2";
		descriptionShort="Klúč Stary Sobor 2";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_blue_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_13: lowq_key_base
	{
		scope=2;
		displayName="Gorka House";
		descriptionShort="Klúč Gorka House";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_blue_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_14: lowq_key_base
	{
		scope=2;
		displayName="NWAF";
		descriptionShort="Klúč NWAF";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_15: lowq_key_base
	{
		scope=2;
		displayName="Prison Island 3";
		descriptionShort="Klúč Prison Island 3";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_16: lowq_key_base
	{
		scope=2;
		displayName="Pustoshka House";
		descriptionShort="Klúč Pustoshka House";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_17: lowq_key_base
	{
		scope=2;
		displayName="Vybor Nemocnica";
		descriptionShort="Klúč Vybor Nemocnica";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_18: lowq_key_base
	{
		scope=2;
		displayName="Pavlovo Mil";
		descriptionShort="Klúč Pavlovo Mil";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_19: lowq_key_base
	{
		scope=2;
		displayName="Zelenogorsk Mil";
		descriptionShort="Klúč Zelenogorsk Mil";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_20: lowq_key_base
	{
		scope=2;
		displayName="VMC";
		descriptionShort="Klúč VMC";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class lowq_key_21: lowq_key_base
	{
		scope=2;
		displayName="Dazhbog";
		descriptionShort="Klúč Dazhbog";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Key\Textures\key_red_co.paa"
		};
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
								"lowqKeysAndCards\Data\Key\Textures\simple_key.rvmat"
							}
						},
						{
							0.5,

							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key_damage.rvmat"
							}
						},
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Key\Textures\simple_key1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};




	class evg_keycards_holder_base: Inventory_Base
	{
		scope=0;
		displayName="Keycard Holder Base";
		descriptionShort="Keycard Holder Base";
		model="lowqKeysAndCards\Data\Keycard Holders\keycard_holder.p3d";
		hiddenSelections[]=
		{
			"keycard_holder"
		};
		hiddenSelectionsMaterials[]=
		{
			"lowqKeysAndCards\Data\Keycard Holders\Textures\keycard_holder.rvmat"
		};
		rotationFlags=16;
		soundImpactType="textile";
	};
	class evg_keycard_holder_leather: evg_keycards_holder_base
	{
		scope=2;
		displayName="Keycard holder";
		descriptionShort="Keycard holder";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder.rvmat"
		};
		attachments[]=
		{
			"KeycardHolder1",
			"KeycardHolder2",
			"KeycardHolder3",
			"KeycardHolder4",
			"KeycardHolder5",
			"KeycardHolder6"
		};
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
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Leather\keycard_holder_ruin.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class evg_keycard_holder_camo: evg_keycards_holder_base
	{
		scope=2;
		displayName="Keycard holder";
		descriptionShort="Keycard holder";
		hiddenSelectionsTextures[]=
		{
			"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder.rvmat"
		};
		attachments[]=
		{
			"KeycardHolder1",
			"KeycardHolder2",
			"KeycardHolder3",
			"KeycardHolder4",
			"KeycardHolder5",
			"KeycardHolder6"
		};
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
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"lowqKeysAndCards\Data\Keycard Holders\Textures\Camo\keycard_holder_ruin.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_KeycardHolder1
	{
		name="KeycardHolder1";
		displayName="Keycard holder slot";
		ghostIcon="set:KeycardIcons image:Keycard";
	};
	class Slot_KeycardHolder2
	{
		name="KeycardHolder2";
		displayName="Keycard holder slot";
		ghostIcon="set:KeycardIcons image:Keycard";
	};
	class Slot_KeycardHolder3
	{
		name="KeycardHolder3";
		displayName="Keycard holder slot";
		ghostIcon="set:KeycardIcons image:Keycard";
	};
	class Slot_KeycardHolder4
	{
		name="KeycardHolder4";
		displayName="Keycard holder slot";
		ghostIcon="set:KeycardIcons image:Keycard";
	};
	class Slot_KeycardHolder5
	{
		name="KeycardHolder5";
		displayName="Keycard holder slot";
		ghostIcon="set:KeycardIcons image:Keycard";
	};
	class Slot_KeycardHolder6
	{
		name="KeycardHolder6";
		displayName="Keycard holder slot";
		ghostIcon="set:KeycardIcons image:Keycard";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyKey_Slot1: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"KeycardHolder1"
		};
		model="lowqKeysAndCards\Data\Keycard Holders\Proxy\Key_Slot1.p3d";
	};
	class ProxyKey_Slot2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"KeycardHolder2"
		};
		model="lowqKeysAndCards\Data\Keycard Holders\Proxy\Key_Slot2.p3d";
	};
	class ProxyKey_Slot3: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"KeycardHolder3"
		};
		model="lowqKeysAndCards\Data\Keycard Holders\Proxy\Key_Slot3.p3d";
	};
	class ProxyKey_Slot4: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"KeycardHolder4"
		};
		model="lowqKeysAndCards\Data\Keycard Holders\Proxy\Key_Slot4.p3d";
	};
	class ProxyKey_Slot5: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"KeycardHolder5"
		};
		model="lowqKeysAndCards\Data\Keycard Holders\Proxy\Key_Slot5.p3d";
	};
	class ProxyKey_Slot6: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"KeycardHolder6"
		};
		model="lowqKeysAndCards\Data\Keycard Holders\Proxy\Key_Slot6.p3d";
	};
};
