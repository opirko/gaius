#include "translation/common.h"
#include "translation/translation.h"

static translation_string all_strings[] = {
    {TR_NO_PATCH_TITLE, "Uppdatering 1.0.1.0 inte installerad"},
    {TR_NO_PATCH_MESSAGE,
        "Din Caesar 3-installation har inte uppdatering 1.0.1.0 installerad. "
        "Du kan ladda ner installationen från:\n"
        URL_PATCHES "\n"
        "Fortsätt på egen risk."},
    {TR_MISSING_FONTS_TITLE, "Saknade typsnitt"},
    {TR_MISSING_FONTS_MESSAGE,
        "Din Caesar 3-installation behöver extra typsnittsfiler. "
        "Du kan ladda ner dem för ditt språk från:\n"
    URL_PATCHES},
    {TR_NO_EDITOR_TITLE, "Redigeringsverktyg inte installerade"},
    {TR_NO_EDITOR_MESSAGE,
        "Din Caesar 3-installation saknar redigeringsfilerna. "
        "Du kan ladda ner dom från:\n"
    URL_EDITOR},
    {TR_INVALID_LANGUAGE_TITLE, "Ogiltig språkmapp"},
    {TR_INVALID_LANGUAGE_MESSAGE,
        "Den valda mappen innehåller inte ett giltigt språkpaket. "
        "Kolla i loggen efter fel."},
    {TR_BUILD_ALL_TEMPLES, "Alla"},
    {TR_BUTTON_OK, "OK"},
    {TR_BUTTON_CANCEL, "Avbryt"},
    {TR_BUTTON_RESET_DEFAULTS, "Återställ förval"},
    {TR_BUTTON_CONFIGURE_HOTKEYS, "Kortkommando"},
    {TR_CONFIG_TITLE, "Gaius konfigurationer"},
    {TR_CONFIG_LANGUAGE_LABEL, "Språk:"},
    {TR_CONFIG_LANGUAGE_DEFAULT, "(förval)"},
    {TR_CONFIG_DISPLAY_SCALE, "Bildskärmsskala:"},
    {TR_CONFIG_CURSOR_SCALE, "Markörskala:"},
    {TR_CONFIG_HEADER_UI_CHANGES, "Användargränssnittsändringar"},
    {TR_CONFIG_HEADER_GAMEPLAY_CHANGES, "Spelinställningar"},
    {TR_CONFIG_SHOW_INTRO_VIDEO, "Visa inledningsfilmer"},
    {TR_CONFIG_SIDEBAR_INFO, "Extra information i kontrollpanelen"},
    {TR_CONFIG_SMOOTH_SCROLLING, "Mjuk skrollning"},
	{TR_CONFIG_DISABLE_MOUSE_EDGE_SCROLLING, "Stäng av förflyttning av kartan vid fönstrets kanter"},																				 
    {TR_CONFIG_DISABLE_RIGHT_CLICK_MAP_DRAG, "Inaktivera att högerklick drar kartan"},
    {TR_CONFIG_VISUAL_FEEDBACK_ON_DELETE, "Öka visuell återkoppling vid rensning av land"},
    {TR_CONFIG_ALLOW_CYCLING_TEMPLES, "Tillåt att bygga varje tempel i följd"},
    {TR_CONFIG_SHOW_WATER_STRUCTURE_RANGE, "Visa räckvidd vid bygge av reservoarer, fontäner och brunnar"},
    {TR_CONFIG_SHOW_CONSTRUCTION_SIZE, "Visa dragbar byggnadsstorlek"},
    {TR_CONFIG_HIGHLIGHT_LEGIONS, "Framhäv legion när muspekaren är över den"},
    {TR_CONFIG_SHOW_MILITARY_SIDEBAR, "Använd militärsidopanelen"},
    {TR_CONFIG_FIX_IMMIGRATION_BUG, "Fixa invandringsproblem med svårighetsgraden Väldigt Svårt"},
    {TR_CONFIG_FIX_100_YEAR_GHOSTS, "Fixa 100-års spöken"},
    {TR_HOTKEY_TITLE, "Gaius kortkommandon"},
    {TR_HOTKEY_LABEL, "Kortkommando"},
    {TR_HOTKEY_ALTERNATIVE_LABEL, "Alternativ"},
    {TR_HOTKEY_HEADER_ARROWS, "Piltangenter"},
    {TR_HOTKEY_HEADER_GLOBAL, "Globala kortkommandon"},
    {TR_HOTKEY_HEADER_CITY, "Stadskortkommandon"},
    {TR_HOTKEY_HEADER_ADVISORS, "Rådgivare"},
    {TR_HOTKEY_HEADER_OVERLAYS, "Översikt"},
    {TR_HOTKEY_HEADER_BOOKMARKS, "Stadskartebokmärken"},
    {TR_HOTKEY_HEADER_EDITOR, "Redigeringsverktyg"},
    {TR_HOTKEY_HEADER_BUILD, "Byggnadskortkommandon"},
    {TR_HOTKEY_ARROW_UP, "Upp"},
    {TR_HOTKEY_ARROW_DOWN, "Ner"},
    {TR_HOTKEY_ARROW_LEFT, "Vänster"},
    {TR_HOTKEY_ARROW_RIGHT, "Höger"},
    {TR_HOTKEY_TOGGLE_FULLSCREEN, "Fullskärm"},
    {TR_HOTKEY_CENTER_WINDOW, "Centrera fönster"},
    {TR_HOTKEY_RESIZE_TO_640, "Sätt fönster till 640x480"},
    {TR_HOTKEY_RESIZE_TO_800, "Sätt fönster till 800x600"},
    {TR_HOTKEY_RESIZE_TO_1024, "Sätt fönster till 1024x768"},
    {TR_HOTKEY_SAVE_SCREENSHOT, "Spara skärmdump"},
    {TR_HOTKEY_SAVE_CITY_SCREENSHOT, "Spara staden som skärmdump"},
    {TR_HOTKEY_BUILD_CLONE, "Klona byggnad under pekaren"},
    {TR_HOTKEY_LOAD_FILE, "Öppna fil"},
    {TR_HOTKEY_SAVE_FILE, "Spara fil"},
    {TR_HOTKEY_INCREASE_GAME_SPEED, "Öka spelhastighet"},
    {TR_HOTKEY_DECREASE_GAME_SPEED, "Minska spelhastighet"},
    {TR_HOTKEY_TOGGLE_PAUSE, "Pausa"},
    {TR_HOTKEY_CYCLE_LEGION, "Växla mellan legioner"},
    {TR_HOTKEY_ROTATE_MAP_LEFT, "Rotera kartan vänster"},
    {TR_HOTKEY_ROTATE_MAP_RIGHT, "Rotera kartan höger"},
    {TR_HOTKEY_SHOW_ADVISOR_LABOR, "Arbetarrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_MILITARY, "Militärrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_IMPERIAL, "Imperierådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_RATINGS, "Ställningsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_TRADE, "Handelsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_POPULATION, "Befolkningsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_HEALTH, "Hälsorådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_EDUCATION, "Utbildningsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_ENTERTAINMENT, "Nöjesrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_RELIGION, "Religionsrådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_FINANCIAL, "Ekonomirådgivare"},
    {TR_HOTKEY_SHOW_ADVISOR_CHIEF, "Huvudrådgivare"},
    {TR_HOTKEY_TOGGLE_OVERLAY, "Slå på/av nuvarande översikt"},
    {TR_HOTKEY_SHOW_OVERLAY_WATER, "Vattenöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_FIRE, "Eldöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_DAMAGE, "Skadeöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_CRIME, "Brottsöversikt"},
    {TR_HOTKEY_SHOW_OVERLAY_PROBLEMS, "Problemöversikt"},
    {TR_HOTKEY_GO_TO_BOOKMARK_1, "Gå till bokmärke 1"},
    {TR_HOTKEY_GO_TO_BOOKMARK_2, "Gå till bokmärke 2"},
    {TR_HOTKEY_GO_TO_BOOKMARK_3, "Gå till bokmärke 3"},
    {TR_HOTKEY_GO_TO_BOOKMARK_4, "Gå till bokmärke 4"},
    {TR_HOTKEY_SET_BOOKMARK_1, "Sätt bokmärke 1"},
    {TR_HOTKEY_SET_BOOKMARK_2, "Sätt bokmärke 2"},
    {TR_HOTKEY_SET_BOOKMARK_3, "Sätt bokmärke 3"},
    {TR_HOTKEY_SET_BOOKMARK_4, "Sätt bokmärke 4"},
    {TR_HOTKEY_EDITOR_TOGGLE_BATTLE_INFO, "Slå på/av stridsinformation"},
    {TR_HOTKEY_EDIT_TITLE, "Nytt kortkommando"},
    {TR_HOTKEY_DUPLICATE_TITLE, "Kortkommando används redan"},
    {TR_HOTKEY_DUPLICATE_MESSAGE, "Den här knappkombinationen används redan till följande:"},
    {TR_WARNING_SCREENSHOT_SAVED, "Skärmdumpen sparad: "}, // TODO: Google translate
};

void translation_swedish(const translation_string **strings, int *num_strings)
{
    *strings = all_strings;
    *num_strings = sizeof(all_strings) / sizeof(translation_string);
}
