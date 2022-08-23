//#include <common.h>
#include <library.h>
//#include <ark.h>
//#include <armour.h>

#define LIBWEAP    "/lib/armoury/weapon/"
#define SHFODDER   "/lib/ark/npc/shfodder/"
#define ORKFODDER  "/lib/ark/npc/ork/"
#define HOME       "/d/caerwyn/"
#define ARM        "/d/armoury/"
#define WEAPON     ARM "weapon/caerwyn/"
#define ARMOUR     ARM "armour/caerwyn/"
#define CASTLE     HOME "castle/"
#define CLOTHING   "/lib/common/clothing/"

#define INHERIT    HOME "inherits/"

#define CITYROOM   INHERIT "cityroom"
#define FORESTROOM INHERIT "forestroom"
#define BEACHROOM  INHERIT "beachroom"

#define NPC        HOME "npc/"
#define ANIMAL     NPC "animal/"
#define BRIGANDS   NPC "brigands/"
#define GUARDS     NPC "guards/"
#define GYPSIES    NPC "gypsy/"
#define KIDS       NPC "kids/"
#define SHOPKEEPER NPC "shopkeeper/"
#define FIXERS     NPC "fixers/"

#define ITEM       HOME "item/"
#define IFOOD      ITEM "food/"
#define ICONT      ITEM "container/"
#define ITOYS      ITEM "toys/"
#define JOURNAL    ITEM "journal/"
#define TACK       ITEM "tack/"

#define TEXT       HOME "text/"
#define THEME      TEXT "theme/"
#define MAPS       HOME "maps/"

#define CAERWYN_COACH        HOME "coach/"
#define COACH_ROOM          CAERWYN_COACH "room/"

#define CAERWYN_COAST        HOME "coast/"
#define NORTH_BEACH          CAERWYN_COAST "north_beach/"
#define SOUTH_BEACH          CAERWYN_COAST "south_beach/"
#define CAERWYN_BEACH_INHER  CAERWYN_COAST "caerwyn_beach_inher/"
#define CAERWYN_BEACH01      CAERWYN_BEACH_INHER "caerwyn_beach01"
#define CAERWYN_BEACH02      CAERWYN_BEACH_INHER "caerwyn_beach02"
#define CAERWYN_BEACH_ITEMS  CAERWYN_BEACH_INHER "caerwyn_beach_items"

#define FAERMIL      HOME "faermil/"
#define FFIELD       FAERMIL "field/"
#define FHOUSE       FAERMIL "fhouse/"
#define FMANOR       FAERMIL "manor/"
#define FROOM        FAERMIL "froom/"
#define FSTREET      FAERMIL "fstreet/"
#define DIRT_ROAD_ITEMS  FSTREET "dirt_road_items"
#define FNPC         FAERMIL "fnpc/"
#define FITEM        FAERMIL "fitem/"

#define INHERITS     FAERMIL "inherits/"
#define BARLEY_FIELD INHERITS "barley_field"
#define WHEAT_FIELD  INHERITS "wheat_field"
#define FPINHERIT    INHERITS "fpinherit"
#define FPINHERIT2   INHERITS "fpinherit2"
#define STALK        INHERITS "stalk"
#define BUNDLE       INHERITS "bundle"
#define FPPOND       INHERITS "fppond"
#define HOPS_GARDEN  INHERITS "hops_garden"

#define FRIVER       FAERMIL "friver/"
#define FRIVERBED    FRIVER "friverbed/"
#define FRBANK_E     FRIVER "frbank_e/"
#define FRBANK_W     FRIVER "frbank_w/"
#define FRIVER_INHER FRIVER "friver_inher/"
#define FRIVER_SUR01 FRIVER_INHER "friver_sur01"
#define FRIVER_SUR02 FRIVER_INHER "friver_sur02"
#define FRIVER_SUR03 FRIVER_INHER "friver_sur03"
#define FRIVER_SUR04 FRIVER_INHER "friver_sur04"
#define FRIVER_SUR05 FRIVER_INHER "friver_sur05"
#define FRIVER01     FRIVER_INHER "friver01"
#define FRBANK01     FRIVER_INHER "frbank01"
#define FRBANK02     FRIVER_INHER "frbank02"
#define FRIVER_ITEMS FRIVER_INHER "friver_items"
#define FRBANK_ITEMS FRIVER_INHER "frbank_items"
#define FRIVER_SUR_ITEMS FRIVER_INHER "friver_sur_items"
// See /d/caerwyn/faermil/defs.h for additional defs

#define SEWERS     HOME "sewers/"

#define STREETS    HOME  "streets/"
#define ALLEY      STREETS "alley/"
#define BRIGAND    STREETS "brigand/"
#define CAERWYN    STREETS "caerwyn/"
#define CARVERS    STREETS "carvers/"
#define COBBWAY    STREETS "cobbway/"
#define EMBASSY    STREETS "embassy/"
#define EASTGATE   STREETS "eastgate/"
#define GRIFFIN    STREETS "griffin/"
#define HARBOUR    STREETS "harbour/"
#define IRONS      STREETS "irons/"
#define JASPER     STREETS "jasper/"
#define MAIN       STREETS "main/"
#define MAIN_HOUSES  MAIN "main_houses/"
#define MOON       STREETS "moon/"
#define NWGATE     STREETS "nwgate/"
#define PALISADE   STREETS "palisade/"
#define SOLAR      STREETS "solar/"
#define STABLEWALK STREETS "stablewalk/"
#define WESTGATE   STREETS "westgate/"
#define WGATE_HOUSES WESTGATE "houses/"
#define STREET_ITEMS01  STREETS "street_items01"
#define STREET_ITEMS02  STREETS "street_items02"

#define ROOM        HOME "room/"
#define BAKERS      ROOM "bakers/"
#define CGUARD      ROOM "cguard/"
#define BEACH       ROOM "beach/"
#define CABINS      ROOM "cabins/"
#define CABININHER  CABINS "inher/"
#define CABIN       CABININHER "cabin"
#define COURTHOUSE  ROOM "courthouse/"
#define DOCKS       ROOM "docks/"
#define DRUIDS      ROOM "druids/"
#define FOREST      ROOM "forest/"
#define ELVEN       FOREST "elven/"
#define GALLOWS     ROOM "gallows/"
#define GARDENS     ROOM "gardens/"
#define GYPSY       ROOM "gypsy/"
#define GYPSY_ITEMS  GYPSY "gypsy_items"
#define BOUNDARY    GYPSY "boundary/"
#define HOUSES      ROOM "houses/"
#define HOUSING     ROOM "housing/"
#define INN         ROOM "inn/"
#define JAIL        ROOM "jail/"
#define JAIL_INHER  JAIL "jail_inher/"
#define JCELL       JAIL_INHER "cell"
#define JUNKYARD    ROOM "junkyard/"
#define LIGHTHOUS   ROOM "lighthouse/"
#define MARKET      ROOM "market/"

#define PALACE      ROOM "palace/"
#define PAL_DRIVE   PALACE "drive_items"
#define PAL_INHER   PALACE "inher/"
#define PAL_CORR     PAL_INHER "corridor"
#define MBDRM        PAL_INHER "male_bedroom"
#define FBDRM        PAL_INHER "female_bedroom"
#define CBDRM        PAL_INHER "child_bedroom"
#define NBDRM        PAL_INHER "nanny_bedroom"
#define FPBRM        PAL_INHER "fpbrm"
#define MPBRM        PAL_INHER "mpbrm"
#define MBDRM_ITEMS  PAL_INHER "mbdrm_items"
#define FBDRM_ITEMS  PAL_INHER "fbdrm_items"
#define SITTING_M    PAL_INHER "sitting_male"
#define SITTING_F    PAL_INHER "sitting_female"

#define PENINSULA   ROOM "peninsula/"
#define PEN_INHER   PENINSULA "pen_inher/"
#define PEN01       PEN_INHER "pen01"
#define PEN02       PEN_INHER "pen02"
#define PEN_ITEMS   PEN_INHER "pen_items"
#define RESORT      ROOM "resort/"
#define SQUARE      ROOM "square/"
#define STABLES     ROOM "stables/"
#define PUB         ROOM "pub/"
#define WAREHOUSE   ROOM "warehouse/"
#define SHOPS       ROOM "shops/"

#define WALL        ROOM "wall/"
#define NWALL       WALL "n_wall/"
#define SWALL       WALL "s_wall/"
#define EWALL       WALL "e_wall/"
#define WWALL       WALL "w_wall/"
#define SEWALL      WALL "se_wall/"
#define SWWALL      WALL "sw_wall/"
#define NLOWER      WALL "n_lower/"
#define SLOWER      WALL "s_lower/"
#define ELOWER      WALL "e_lower/"
#define WLOWER      WALL "w_lower/"
#define SELOWER     WALL "se_lower/"
#define SWLOWER     WALL "sw_lower/"
#define TOWER_ITEMS WALL "tower_items"

#define CASINO      "/p/casino/"
#define FOYER_ROOM  CASINO "rooms/foyer"

#define GUILD       "/d/destiny/"
#define ARTISAN     GUILD "artisan/room/"
#define DRUID       GUILD "druid/"
#define DROOM       DRUID "room/"
#define ALTAR       DROOM "altar/"
#define KNIGHT      GUILD "knight/"
#define GROUND      KNIGHT "room/ground/"
#define KSTABLES   KNIGHT "room/stables/"
#define MAGE        GUILD "mage/"
#define MERC        GUILD "mercenary/"
#define BARRACKS    MERC+"barracks/"
#define KEEP        MERC "room/keep/"
#define PARADE      MERC "room/parade/"
#define PRIEST      GUILD "priest/"
#define ABBEY       PRIEST "room/abbey/"
#define FOLIR       PRIEST "room/folir/"
#define CHEL        PRIEST "room/chel/"
#define TEMPLE      PRIEST "room/temple/"
#define ROGUE       GUILD "rogue/"

#define ORG           GUILD "orgs/"
#define ALCHEMIST     ORG "alchemist/room/"
#define ARTIFICER     ORG "artificer/room/"
#define BAKERGUILD    ORG "baker/room/"
#define BREWER        ORG "brewer/room/"
#define CANDLEMAKER   ORG "candlemaker/room/"
#define CLOTHWORKER   ORG "clothworker/room/"
#define COBBLER       ORG "cobbler/room/"
#define EXPLORER      ORG "explorer/room/"
#define GEMCUTTER     ORG "gemcutter/room/"
#define GLASSWRIGHT   ORG "glasswright/room/"
#define HUNTER        ORG "hunter/room/"
#define LEATHERWORKER ORG "leatherworker/room/"
#define MERCHANT      ORG "merchant/room/"
#define MINER         ORG "miner/room/"
#define POTTER        ORG "potter/room/"
#define SAILOR        ORG "sailor/room/"
#define SCRIBE        ORG "scribe/room/"
#define SMITH         ORG "smith/room/"
#define SILVERSMITH   ORG "silversmith/room/"
#define WATCH         ORG "caerwyn/room/"
#define WOODWORKER    ORG "woodworker/room/"

#define LIB_CFOREST   HOME "inherits/cforest"
