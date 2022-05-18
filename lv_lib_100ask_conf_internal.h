/**
 * GENERATED FILE, DO NOT EDIT IT!
 * @file lv_lib_100ask_conf_internal.h
 * Make sure all the defines of lv_lib_100ask_conf.h have a default value
**/

#ifndef LV_LIB_100ASK_CONF_INTERNAL_H
#define LV_LIB_100ASK_CONF_INTERNAL_H


/*LV_100ASK_CHINESE_IME*/
#ifndef LV_100ASK_CHINESE_IME
#  ifdef CONFIG_LV_100ASK_CHINESE_IME
#    define LV_100ASK_CHINESE_IME CONFIG_LV_100ASK_CHINESE_IME
#  else
#    define LV_100ASK_CHINESE_IME          0
#  endif
#endif


/*LV_100ASK_PAGE_MANAGER*/
#ifndef LV_100ASK_PAGE_MANAGER
#  ifdef CONFIG_LV_100ASK_PAGE_MANAGER
#    define LV_100ASK_PAGE_MANAGER CONFIG_LV_100ASK_PAGE_MANAGER
#  else
#    define LV_100ASK_PAGE_MANAGER          0
#  endif
#endif

#ifndef LV_100ASK_PAGE_MANAGER_SW_DEL_PAGE
#  ifdef CONFIG_LV_100ASK_PAGE_MANAGER_SW_DEL_PAGE
#    define LV_100ASK_PAGE_MANAGER_SW_DEL_PAGE CONFIG_LV_100ASK_PAGE_MANAGER_SW_DEL_PAGE
#  else
#    define LV_100ASK_PAGE_MANAGER_SW_DEL_PAGE          0
#  endif
#endif

#ifndef PAGE_SWITCHER_SNAPSHOT
#  ifdef CONFIG_PAGE_SWITCHER_SNAPSHOT
#    define PAGE_SWITCHER_SNAPSHOT CONFIG_PAGE_SWITCHER_SNAPSHOT
#  else
#    define PAGE_SWITCHER_SNAPSHOT          0
#  endif
#endif

#ifndef LV_100ASK_PAGE_MANAGER_BACK_BTN_SIZE
#  ifdef CONFIG_LV_100ASK_PAGE_MANAGER_BACK_BTN_SIZE
#    define LV_100ASK_PAGE_MANAGER_BACK_BTN_SIZE CONFIG_LV_100ASK_PAGE_MANAGER_BACK_BTN_SIZE
#  else
#    define LV_100ASK_PAGE_MANAGER_BACK_BTN_SIZE          (LV_DPI_DEF/2)
#  endif
#endif

#ifndef LV_100ASK_PAGE_MANAGER_SIMPLE_TEST
#  ifdef CONFIG_LV_100ASK_PAGE_MANAGER_SIMPLE_TEST
#    define LV_100ASK_PAGE_MANAGER_SIMPLE_TEST CONFIG_LV_100ASK_PAGE_MANAGER_SIMPLE_TEST
#  else
#    define LV_100ASK_PAGE_MANAGER_SIMPLE_TEST          0
#  endif
#endif


/*LV_100ASK_SKETCHPAD*/
#ifndef LV_100ASK_SKETCHPAD
#  ifdef CONFIG_LV_100ASK_SKETCHPAD
#    define LV_100ASK_SKETCHPAD CONFIG_LV_100ASK_SKETCHPAD
#  else
#    define LV_100ASK_SKETCHPAD          0
#  endif
#endif

#ifndef SKETCHPAD_DEFAULT_WIDTH
#  ifdef CONFIG_SKETCHPAD_DEFAULT_WIDTH
#    define SKETCHPAD_DEFAULT_WIDTH CONFIG_SKETCHPAD_DEFAULT_WIDTH
#  else
#    define SKETCHPAD_DEFAULT_WIDTH          0
#  endif
#endif

#ifndef SKETCHPAD_DEFAULT_HEIGHT
#  ifdef CONFIG_SKETCHPAD_DEFAULT_HEIGHT
#    define SKETCHPAD_DEFAULT_HEIGHT CONFIG_SKETCHPAD_DEFAULT_HEIGHT
#  else
#    define SKETCHPAD_DEFAULT_HEIGHT          0
#  endif
#endif

#ifndef LV_100ASK_SKETCHPAD_SIMPLE_TEST
#  ifdef CONFIG_LV_100ASK_SKETCHPAD_SIMPLE_TEST
#    define LV_100ASK_SKETCHPAD_SIMPLE_TEST CONFIG_LV_100ASK_SKETCHPAD_SIMPLE_TEST
#  else
#    define LV_100ASK_SKETCHPAD_SIMPLE_TEST          0
#  endif
#endif


/*LV_100ASK_CALC*/
#ifndef LV_100ASK_CALC
#  ifdef CONFIG_LV_100ASK_CALC
#    define LV_100ASK_CALC CONFIG_LV_100ASK_CALC
#  else
#    define LV_100ASK_CALC          0
#  endif
#endif

#ifndef LV_100ASK_CALC_EXPR_LEN
#  ifdef CONFIG_LV_100ASK_CALC_EXPR_LEN
#    define LV_100ASK_CALC_EXPR_LEN CONFIG_LV_100ASK_CALC_EXPR_LEN
#  else
#    define LV_100ASK_CALC_EXPR_LEN          0
#  endif
#endif

#ifndef LV_100ASK_CALC_MAX_NUM_LEN
#  ifdef CONFIG_LV_100ASK_CALC_MAX_NUM_LEN
#    define LV_100ASK_CALC_MAX_NUM_LEN CONFIG_LV_100ASK_CALC_MAX_NUM_LEN
#  else
#    define LV_100ASK_CALC_MAX_NUM_LEN          0
#  endif
#endif

#ifndef LV_100ASK_CALC_SIMPLE_TEST
#  ifdef CONFIG_LV_100ASK_CALC_SIMPLE_TEST
#    define LV_100ASK_CALC_SIMPLE_TEST CONFIG_LV_100ASK_CALC_SIMPLE_TEST
#  else
#    define LV_100ASK_CALC_SIMPLE_TEST          0
#  endif
#endif


/*LV_100ASK_MEMORY_GAME*/
#ifndef LV_100ASK_MEMORY_GAME
#  ifdef CONFIG_LV_100ASK_MEMORY_GAME
#    define LV_100ASK_MEMORY_GAME CONFIG_LV_100ASK_MEMORY_GAME
#  else
#    define LV_100ASK_MEMORY_GAME          1
#  endif
#endif

#ifndef LV_100ASK_MEMORY_GAME_DEFAULT_ROW
#  ifdef CONFIG_LV_100ASK_MEMORY_GAME_DEFAULT_ROW
#    define LV_100ASK_MEMORY_GAME_DEFAULT_ROW CONFIG_LV_100ASK_MEMORY_GAME_DEFAULT_ROW
#  else
#    define LV_100ASK_MEMORY_GAME_DEFAULT_ROW          0
#  endif
#endif

#ifndef LV_100ASK_MEMORY_GAME_DEFAULT_COL
#  ifdef CONFIG_LV_100ASK_MEMORY_GAME_DEFAULT_COL
#    define LV_100ASK_MEMORY_GAME_DEFAULT_COL CONFIG_LV_100ASK_MEMORY_GAME_DEFAULT_COL
#  else
#    define LV_100ASK_MEMORY_GAME_DEFAULT_COL          0
#  endif
#endif

#ifndef LV_100ASK_MEMORY_GAME_SIMPLE_TEST
#  ifdef CONFIG_LV_100ASK_MEMORY_GAME_SIMPLE_TEST
#    define LV_100ASK_MEMORY_GAME_SIMPLE_TEST CONFIG_LV_100ASK_MEMORY_GAME_SIMPLE_TEST
#  else
#    define LV_100ASK_MEMORY_GAME_SIMPLE_TEST          0
#  endif
#endif

/*LV_100ASK_2048*/
#ifndef LV_100ASK_2048
#  ifdef CONFIG_LV_100ASK_2048
#    define LV_100ASK_2048 CONFIG_LV_100ASK_2048
#  else
#    define LV_100ASK_2048          1
#  endif
#endif

#ifndef LV_100ASK_2048_MATRIX_SIZE
#  ifdef CONFIG_LV_100ASK_2048_MATRIX_SIZE
#    define LV_100ASK_2048_MATRIX_SIZE CONFIG_LV_100ASK_2048_MATRIX_SIZE
#  else
#    define LV_100ASK_2048_MATRIX_SIZE          4
#  endif
#endif


#ifndef LV_100ASK_2048_SIMPLE_TEST
#  ifdef CONFIG_LV_100ASK_2048_SIMPLE_TEST
#    define LV_100ASK_2048_SIMPLE_TEST CONFIG_LV_100ASK_2048_SIMPLE_TEST
#  else
#    define LV_100ASK_2048_SIMPLE_TEST          0
#  endif
#endif


#endif /*LV_LIB_100ASK_CONF_INTERNAL_H*/