class CfgPatches
{
	class ksvk
	{
		units[]=
		{
			"ksvk"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgMods
{
	class ksvk
	{
		dir = "HexKSVK";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ksvk";
		credits = "";
		author = "";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"HexKSVK/scripts/4_World"};
			};
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
    class Mosin_1903_Base;
	class ksvk_Base: Mosin_1903_Base
	{
		scope=0;
		displayName="ksvk";
		descriptionShort="good old sowjet tank killing anti material rifle";
		animName="ksvk";
		weight=4000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		DisplayMagazine=0;
		WeaponLength=1.22271;
		barrelArmor=10;
		initSpeedMultiplier=1.05;
		chamberSize=5;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer",
			"Mag_CLIP762x54_5Rnd"
		};
		magazines[]={
            "ksvk_mag"
        };
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.5,2.5,1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"body"
		};
		hiddenSelectionsMaterials[]=
		{
			"HexKSVK\data\ksvk.rvmat"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\mosin9130\Data\mosin_9130_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Mosin_Shot_SoundSet",
				"Mosin_Tail_SoundSet",
				"Mosin_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin_silencerHomeMade_SoundSet",
					"Mosin_silencerHomeMadeTail_SoundSet",
					"Mosin_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=1;
			recoil="recoil_mosin";
			recoilProne="recoil_mosin_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,0,-0.059999999};
				orientation[]={0,-40,0};
			};
			class Melee
			{
				position[]={0,0,0.039999999};
				orientation[]={0,40,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin9130_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.029999999,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=3;
				overheatingDecayInterval=4;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Mosin_1903\w_mosin1903_states.anm";
	};
	class ksvk: ksvk_Base
	{
		scope=2;
		model="HexKSVK\data\ksvk.p3d";
		itemSize[]={15,3};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsMosin",
			"suppressorImpro",
			"weaponMuzzleMosin",
			"weaponBayonetMosin"
		};
		hiddenSelectionsTextures[]=
		{
			"HexKSVK\data\ksvk_co.paa"
		};
	};
};
class CfgMagazines
{
	class DefaultMagazine;
	class Magazine_Base;
    class ksvk_mag: Magazine_Base
	{
		scope=2;
		displayName="Magazine for the ksvk";
		descriptionShort="ksvk magazine";
		model="HexKSVK\data\ksvk_mag.p3d";
		weight=113;
		weightPerQuantityUnit=12;
		itemSize[]={2,3};
		count=15;
		ammo="Bullet_762x54";
		ammoItems[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
		};
		tracersEvery=1;
		mass=10;
    };
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyksvk_mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="HexKSVK\data\ksvk_mag.p3d";
	};
};