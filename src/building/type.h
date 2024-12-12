#ifndef BUILDING_TYPE_H
#define BUILDING_TYPE_H

/**
 * @file
 * Type definitions for buildings
 */

/**
 * Building types
 */
typedef enum {
    BUILDING_NONE = 0,
    BUILDING_MENU_FARMS = 2,
    BUILDING_MENU_RAW_MATERIALS = 3,
    BUILDING_MENU_WORKSHOPS = 4,
    BUILDING_ROAD = 5,
    BUILDING_WALL = 6,
    BUILDING_DRAGGABLE_RESERVOIR = 7,
    BUILDING_AQUEDUCT = 8,
    BUILDING_CLEAR_LAND = 9,
    BUILDING_HOUSE_VACANT_LOT = 10,
    BUILDING_HOUSE_SMALL_TENT = 10,
    BUILDING_HOUSE_LARGE_TENT = 11,
    BUILDING_HOUSE_SMALL_SHACK = 12,
    BUILDING_HOUSE_LARGE_SHACK = 13,
    BUILDING_HOUSE_SMALL_HOVEL = 14,
    BUILDING_HOUSE_LARGE_HOVEL = 15,
    BUILDING_HOUSE_SMALL_CASA = 16,
    BUILDING_HOUSE_LARGE_CASA = 17,
    BUILDING_HOUSE_SMALL_INSULA = 18,
    BUILDING_HOUSE_MEDIUM_INSULA = 19,
    BUILDING_HOUSE_LARGE_INSULA = 20,
    BUILDING_HOUSE_GRAND_INSULA = 21,
    BUILDING_HOUSE_SMALL_VILLA = 22,
    BUILDING_HOUSE_MEDIUM_VILLA = 23,
    BUILDING_HOUSE_LARGE_VILLA = 24,
    BUILDING_HOUSE_GRAND_VILLA = 25,
    BUILDING_HOUSE_SMALL_PALACE = 26,
    BUILDING_HOUSE_MEDIUM_PALACE = 27,
    BUILDING_HOUSE_LARGE_PALACE = 28,
    BUILDING_HOUSE_LUXURY_PALACE = 29,
    BUILDING_AMPHITHEATER = 30,
    BUILDING_THEATER = 31,
    BUILDING_HIPPODROME = 32,
    BUILDING_COLOSSEUM = 33,
    BUILDING_GLADIATOR_SCHOOL = 34,
    BUILDING_LION_HOUSE = 35,
    BUILDING_ACTOR_COLONY = 36,
    BUILDING_CHARIOT_MAKER = 37,
    BUILDING_PLAZA = 38,
    BUILDING_GARDENS = 39,
    BUILDING_FORT_LEGIONARIES = 40,
    BUILDING_SMALL_STATUE = 41,
    BUILDING_MEDIUM_STATUE = 42,
    BUILDING_LARGE_STATUE = 43,
    BUILDING_FORT_JAVELIN = 44,
    BUILDING_FORT_MOUNTED = 45,
    BUILDING_DOCTOR = 46,
    BUILDING_HOSPITAL = 47,
    BUILDING_BATHHOUSE = 48,
    BUILDING_BARBER = 49,
    BUILDING_DISTRIBUTION_CENTER_UNUSED = 50,
    BUILDING_SCHOOL = 51,
    BUILDING_ACADEMY = 52,
    BUILDING_LIBRARY = 53,
    BUILDING_FORT_GROUND = 54,
    BUILDING_PREFECTURE = 55,
    BUILDING_TRIUMPHAL_ARCH = 56,
    BUILDING_FORT = 57,
    BUILDING_GATEHOUSE = 58,
    BUILDING_TOWER = 59,
    BUILDING_SMALL_TEMPLE_CERES = 60,
    BUILDING_SMALL_TEMPLE_NEPTUNE = 61,
    BUILDING_SMALL_TEMPLE_MERCURY = 62,
    BUILDING_SMALL_TEMPLE_MARS = 63,
    BUILDING_SMALL_TEMPLE_VENUS = 64,
    BUILDING_LARGE_TEMPLE_CERES = 65,
    BUILDING_LARGE_TEMPLE_NEPTUNE = 66,
    BUILDING_LARGE_TEMPLE_MERCURY = 67,
    BUILDING_LARGE_TEMPLE_MARS = 68,
    BUILDING_LARGE_TEMPLE_VENUS = 69,
    BUILDING_MARKET = 70,
    BUILDING_GRANARY = 71,
    BUILDING_WAREHOUSE = 72,
    BUILDING_WAREHOUSE_SPACE = 73,
    BUILDING_SHIPYARD = 74,
    BUILDING_DOCK = 75,
    BUILDING_WHARF = 76,
    BUILDING_GOVERNORS_HOUSE = 77,
    BUILDING_GOVERNORS_VILLA = 78,
    BUILDING_GOVERNORS_PALACE = 79,
    BUILDING_MISSION_POST = 80,
    BUILDING_ENGINEERS_POST = 81,
    BUILDING_LOW_BRIDGE = 82,
    BUILDING_SHIP_BRIDGE = 83,
    BUILDING_SENATE_1_UNUSED = 84, // listed as "Senate 1" in the model.txt
    BUILDING_SENATE = 85,
    BUILDING_FORUM = 86,
    BUILDING_FORUM_2_UNUSED = 87, // listed as "Forum 2" in the model.txt
    BUILDING_NATIVE_HUT = 88,
    BUILDING_NATIVE_MEETING = 89,
    BUILDING_RESERVOIR = 90,
    BUILDING_FOUNTAIN = 91,
    BUILDING_WELL = 92,
    BUILDING_NATIVE_CROPS = 93,
    BUILDING_MILITARY_ACADEMY = 94,
    BUILDING_BARRACKS = 95,
    BUILDING_MENU_SMALL_TEMPLES = 96,
    BUILDING_MENU_LARGE_TEMPLES = 97,
    BUILDING_ORACLE = 98,
    BUILDING_BURNING_RUIN = 99,
    BUILDING_WHEAT_FARM = 100,
    BUILDING_VEGETABLE_FARM = 101,
    BUILDING_FRUIT_FARM = 102,
    BUILDING_OLIVE_FARM = 103,
    BUILDING_VINES_FARM = 104,
    BUILDING_PIG_FARM = 105,
    BUILDING_MARBLE_QUARRY = 106,
    BUILDING_IRON_MINE = 107,
    BUILDING_TIMBER_YARD = 108,
    BUILDING_CLAY_PIT = 109,
    BUILDING_WINE_WORKSHOP = 110,
    BUILDING_OIL_WORKSHOP = 111,
    BUILDING_WEAPONS_WORKSHOP = 112,
    BUILDING_FURNITURE_WORKSHOP = 113,
    BUILDING_POTTERY_WORKSHOP = 114,
    BUILDING_ROADBLOCK = 115,
    // helper constants
    BUILDING_TYPE_MAX = 116
} building_type;

/**
 * House levels
 */
typedef enum {
    HOUSE_SMALL_TENT = 0,
    HOUSE_LARGE_TENT = 1,
    HOUSE_SMALL_SHACK = 2,
    HOUSE_LARGE_SHACK = 3,
    HOUSE_SMALL_HOVEL = 4,
    HOUSE_LARGE_HOVEL = 5,
    HOUSE_SMALL_CASA = 6,
    HOUSE_LARGE_CASA = 7,
    HOUSE_SMALL_INSULA = 8,
    HOUSE_MEDIUM_INSULA = 9,
    HOUSE_LARGE_INSULA = 10,
    HOUSE_GRAND_INSULA = 11,
    HOUSE_SMALL_VILLA = 12,
    HOUSE_MEDIUM_VILLA = 13,
    HOUSE_LARGE_VILLA = 14,
    HOUSE_GRAND_VILLA = 15,
    HOUSE_SMALL_PALACE = 16,
    HOUSE_MEDIUM_PALACE = 17,
    HOUSE_LARGE_PALACE = 18,
    HOUSE_LUXURY_PALACE = 19,
} house_level;

enum {
    BUILDING_STATE_UNUSED = 0,
    BUILDING_STATE_IN_USE = 1,
    BUILDING_STATE_UNDO = 2,
    BUILDING_STATE_CREATED = 3,
    BUILDING_STATE_RUBBLE = 4,
    BUILDING_STATE_DELETED_BY_GAME = 5, // used for earthquakes, fires, house mergers
    BUILDING_STATE_DELETED_BY_PLAYER = 6
};

#endif // BUILDING_TYPE_H
