/*===========================================================================*/
/*   (recette/testsrfi117.scm)                                               */
/*   Bigloo (4.3i)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sat 20 Jun 2020 09:55:01 AM PDT     */
/*===========================================================================*/
/* COMPILATION: (bigloo -c -rm -mkaddlib -fsharing -q -copt  -fPIC -I src/Llib -O6 -L dist -o recette/testsrfi117.o recette/testsrfi117.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* object type definitions */
typedef struct BgL_testzd2runnerzd2_bgl {
   header_t header;
   obj_t widening;
} *BgL_testzd2runnerzd2_bglt;

typedef struct BgL_suitez00_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_descriptionz00;
   obj_t BgL_testsz00;
   obj_t BgL_subsuitesz00;
} *BgL_suitez00_bglt;

typedef struct BgL_terminalzd2testzd2runnerz00_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_suitez00;
} *BgL_terminalzd2testzd2runnerz00_bglt;

typedef struct BgL_simplezd2testzd2_bgl {
   header_t header;
   obj_t widening;
   obj_t BgL_descriptionz00;
   obj_t BgL_expressionz00;
} *BgL_simplezd2testzd2_bglt;


BGL_IMPORT obj_t BGl_listzd2queuezd2firstzd2lastzd2zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_z62zc3z04anonymousza31210ze3ze5zztestsrfi117z00(obj_t);
static obj_t BGl_z62doublez62zztestsrfi117z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_suitez00zzbtestzd2suitezd2;
static obj_t BGl_objectzd2initzd2zztestsrfi117z00();
BGL_IMPORT obj_t BGl_listzd2queuezd2mapz12z12zzsrfi117zf2listzd2queuesz20(obj_t, obj_t);
BGL_IMPORT obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2copyz00zzsrfi117zf2listzd2queuesz20(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2mapz00zzsrfi117zf2listzd2queuesz20(obj_t, obj_t);
BGL_IMPORT obj_t BGl_testzd2runnerzd2executez00zzbtestzd2testzd2runnerz00(BgL_testzd2runnerzd2_bglt, bool_t);
BGL_IMPORT obj_t bstring_to_symbol(obj_t);
BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zztestsrfi117z00();
BGL_IMPORT obj_t BGl_listzd2queuezd2removezd2allz12zc0zzsrfi117zf2listzd2queuesz20(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2frontz00zzsrfi117zf2listzd2queuesz20(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2concatenatez00zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_symbol2003z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2005z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2007z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2009z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_listzd2queuezd2unfoldzd2rightzd2zzsrfi117zf2listzd2queuesz20;
static obj_t BGl_z62zc3z04anonymousza31078ze3ze5zztestsrfi117z00(obj_t);
static obj_t BGl_symbol2011z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2014z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2017z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2020z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2024z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2026z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2028z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
static obj_t BGl_symbol2038z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
static obj_t BGl_symbol2040z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2042z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_z62add1z62zztestsrfi117z00(obj_t, obj_t);
static obj_t BGl_symbol2045z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2047z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_listzd2queuezd2addzd2backz12zc0zzsrfi117zf2listzd2queuesz20(obj_t, obj_t);
static obj_t BGl_symbol2049z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31292ze3ze5zztestsrfi117z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31527ze3ze5zztestsrfi117z00(obj_t);
BGL_IMPORT obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
static obj_t BGl_symbol2056z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_listzd2queuezd2addzd2frontz12zc0zzsrfi117zf2listzd2queuesz20(obj_t, obj_t);
BGL_IMPORT long bgl_list_length(obj_t);
static obj_t BGl_gczd2rootszd2initz00zztestsrfi117z00();
BGL_IMPORT obj_t BGl_listzd2queuezd2setzd2listz12zc0zzsrfi117zf2listzd2queuesz20;
static obj_t BGl_symbol2070z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2072z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2075z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2077z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol2079z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_z62zc3z04anonymousza31651ze3ze5zztestsrfi117z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31279ze3ze5zztestsrfi117z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_simplezd2testzd2zzbtestzd2simplezd2testz00;
static obj_t BGl_symbol2084z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_z62mainz62zztestsrfi117z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2appendz12z12zzsrfi117zf2listzd2queuesz20;
static obj_t BGl_z62zc3z04anonymousza31673ze3ze5zztestsrfi117z00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31658ze3ze5zztestsrfi117z00(obj_t, obj_t);
BGL_IMPORT bool_t BGl_zd3fxzd3zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_IMPORT long BGl_bitzd2andzd2zz__bitz00(long, long);
BGL_IMPORT obj_t BGl_listzd2queuezd2removezd2backz12zc0zzsrfi117zf2listzd2queuesz20(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2forzd2eachzd2zzsrfi117zf2listzd2queuesz20(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2002z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_listzd2queuezd2appendz00zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_list2013z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2016z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2019z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zztestsrfi117z00();
static obj_t BGl_list2022z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2023z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zztestsrfi117z00();
static obj_t BGl_list2031z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2032z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2033z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2037z00zztestsrfi117z00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bigloo_main(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2removezd2frontz12zc0zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_list2044z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_symbol1983z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2051z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2052z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2053z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2054z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2055z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2059z00zztestsrfi117z00 = BUNSPEC;
static BgL_suitez00_bglt BGl_srfi117zd2testszd2zztestsrfi117z00;
static obj_t BGl_list2062z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2066z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2069z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2074z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_testzd2addz12zc0zzbtestzd2btestzd2(BgL_suitez00_bglt, obj_t);
static obj_t BGl_list2081z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_list2082z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2083z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2086z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2087z00zztestsrfi117z00 = BUNSPEC;
static obj_t BGl_list2089z00zztestsrfi117z00 = BUNSPEC;
BGL_IMPORT obj_t BGl_modulezd2initzd2errorz00zz__errorz00(char *, char *);
BGL_IMPORT obj_t BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_z62donezf3z91zztestsrfi117z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztestsrfi117z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zzbtestzd2btestzd2(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zzbtestzd2simplezd2testz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zzbtestzd2suitezd2(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zzbtestzd2testzd2runnerz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zzbtestzd2terminalzd2testzd2runnerzd2(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zzsrfi117zf2listzd2queuesz20(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_IMPORT obj_t BGl_z62errorz62zz__objectz00;
static obj_t BGl_z62zc3z04anonymousza31283ze3ze5zztestsrfi117z00(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2unfoldz00zzsrfi117zf2listzd2queuesz20;
BGL_IMPORT obj_t BGl_listzd2queuezd2emptyzf3zf3zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_z62zc3z04anonymousza31195ze3ze5zztestsrfi117z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31641ze3ze5zztestsrfi117z00(obj_t);
static obj_t BGl_cnstzd2initzd2zztestsrfi117z00();
BGL_IMPORT obj_t BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20;
static obj_t BGl_libraryzd2moduleszd2initz00zztestsrfi117z00();
static obj_t BGl_zc3z04exitza31238ze3ze70z60zztestsrfi117z00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31198ze3ze5zztestsrfi117z00(obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(obj_t);
static obj_t BGl_zc3z04exitza31184ze3ze70z60zztestsrfi117z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_listzd2queuezd2backz00zzsrfi117zf2listzd2queuesz20(obj_t);
BGL_EXPORTED_DECL obj_t BGl_mainz00zztestsrfi117z00(obj_t);
BGL_IMPORT obj_t BGl_terminalzd2testzd2runnerz00zzbtestzd2terminalzd2testzd2runnerzd2;
static obj_t BGl_z62zc3z04anonymousza31664ze3ze5zztestsrfi117z00(obj_t, obj_t);
BGL_IMPORT obj_t BGl_zc3listzd2queueze3zf2zzsrfi117zf2listzd2queuesz20;
BGL_IMPORT obj_t BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(obj_t);
static obj_t BGl_z62zc3z04anonymousza31755ze3ze5zztestsrfi117z00(obj_t);
static obj_t *__cnst;


DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2058z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2101za7, BGl_z62zc3z04anonymousza31664ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2061z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2102za7, BGl_z62zc3z04anonymousza31651ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1986z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2103za7, BGl_z62zc3z04anonymousza31078ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1988z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2104za7, BGl_z62zc3z04anonymousza31527ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1990z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2105za7, BGl_z62zc3z04anonymousza31641ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1992z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2106za7, BGl_z62zc3z04anonymousza31673ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1994z00zztestsrfi117z00, BgL_bgl_za762za7c3za704anonymo2107za7, BGl_z62zc3z04anonymousza31755ze3ze5zztestsrfi117z00, 0L, BUNSPEC, 0 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1995z00zztestsrfi117z00, BgL_bgl_za762doubleza762za7za7te2108z00, BGl_z62doublez62zztestsrfi117z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1996z00zztestsrfi117z00, BgL_bgl_za762doneza7f3za791za7za7t2109za7, BGl_z62donezf3z91zztestsrfi117z00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc1997z00zztestsrfi117z00, BgL_bgl_za762add1za762za7za7test2110z00, BGl_z62add1z62zztestsrfi117z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2000z00zztestsrfi117z00, BgL_bgl_string2000za700za7za7t2111za7, "procedure", 9 );
DEFINE_STRING( BGl_string2001z00zztestsrfi117z00, BgL_bgl_string2001za700za7za7t2112za7, "<@anonymous:1755>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2004z00zztestsrfi117z00, BgL_bgl_string2004za700za7za7t2113za7, "funcall", 7 );
DEFINE_STRING( BGl_string2006z00zztestsrfi117z00, BgL_bgl_string2006za700za7za7t2114za7, "list-queue-unfold", 17 );
DEFINE_STRING( BGl_string2008z00zztestsrfi117z00, BgL_bgl_string2008za700za7za7t2115za7, "done?", 5 );
DEFINE_STRING( BGl_string2010z00zztestsrfi117z00, BgL_bgl_string2010za700za7za7t2116za7, "double", 6 );
DEFINE_STRING( BGl_string2012z00zztestsrfi117z00, BgL_bgl_string2012za700za7za7t2117za7, "add1", 4 );
DEFINE_STRING( BGl_string2015z00zztestsrfi117z00, BgL_bgl_string2015za700za7za7t2118za7, "list-queue-unfold-right", 23 );
DEFINE_STRING( BGl_string2018z00zztestsrfi117z00, BgL_bgl_string2018za700za7za7t2119za7, "x0", 2 );
DEFINE_STRING( BGl_string2021z00zztestsrfi117z00, BgL_bgl_string2021za700za7za7t2120za7, "y0", 2 );
DEFINE_STRING( BGl_string2025z00zztestsrfi117z00, BgL_bgl_string2025za700za7za7t2121za7, "pred", 4 );
DEFINE_STRING( BGl_string2027z00zztestsrfi117z00, BgL_bgl_string2027za700za7za7t2122za7, "r", 1 );
DEFINE_STRING( BGl_string2029z00zztestsrfi117z00, BgL_bgl_string2029za700za7za7t2123za7, "v", 1 );
DEFINE_STRING( BGl_string2030z00zztestsrfi117z00, BgL_bgl_string2030za700za7za7t2124za7, "provided: [~a] expected: [~a]", 29 );
DEFINE_STRING( BGl_string2034z00zztestsrfi117z00, BgL_bgl_string2034za700za7za7t2125za7, "<@anonymous:1673>", 17 );
DEFINE_STRING( BGl_string2035z00zztestsrfi117z00, BgL_bgl_string2035za700za7za7t2126za7, "pair", 4 );
DEFINE_STRING( BGl_string2036z00zztestsrfi117z00, BgL_bgl_string2036za700za7za7t2127za7, "<@anonymous:1673>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2039z00zztestsrfi117z00, BgL_bgl_string2039za700za7za7t2128za7, "make-list-queue", 15 );
DEFINE_STRING( BGl_string2041z00zztestsrfi117z00, BgL_bgl_string2041za700za7za7t2129za7, "d", 1 );
DEFINE_STRING( BGl_string2043z00zztestsrfi117z00, BgL_bgl_string2043za700za7za7t2130za7, "e", 1 );
DEFINE_STRING( BGl_string2046z00zztestsrfi117z00, BgL_bgl_string2046za700za7za7t2131za7, "list-queue-set-list!", 20 );
DEFINE_STRING( BGl_string2048z00zztestsrfi117z00, BgL_bgl_string2048za700za7za7t2132za7, "n", 1 );
DEFINE_STRING( BGl_string2050z00zztestsrfi117z00, BgL_bgl_string2050za700za7za7t2133za7, "arg1674", 7 );
DEFINE_STRING( BGl_string2057z00zztestsrfi117z00, BgL_bgl_string2057za700za7za7t2134za7, "h", 1 );
DEFINE_STRING( BGl_string2060z00zztestsrfi117z00, BgL_bgl_string2060za700za7za7t2135za7, "<@anonymous:1641>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2063z00zztestsrfi117z00, BgL_bgl_string2063za700za7za7t2136za7, "<@anonymous:1527>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2064z00zztestsrfi117z00, BgL_bgl_string2064za700za7za7t2137za7, "<@anonymous:1527>", 17 );
DEFINE_STRING( BGl_string2065z00zztestsrfi117z00, BgL_bgl_string2065za700za7za7t2138za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2067z00zztestsrfi117z00, BgL_bgl_string2067za700za7za7t2139za7, "<@anonymous:1078>", 17 );
DEFINE_STRING( BGl_string2068z00zztestsrfi117z00, BgL_bgl_string2068za700za7za7t2140za7, "<@anonymous:1078>:Wrong number of arguments", 43 );
DEFINE_STRING( BGl_string2071z00zztestsrfi117z00, BgL_bgl_string2071za700za7za7t2141za7, "x1", 2 );
DEFINE_STRING( BGl_string2073z00zztestsrfi117z00, BgL_bgl_string2073za700za7za7t2142za7, "arg1499", 7 );
DEFINE_STRING( BGl_string2076z00zztestsrfi117z00, BgL_bgl_string2076za700za7za7t2143za7, "list-queue-append!", 18 );
DEFINE_STRING( BGl_string2078z00zztestsrfi117z00, BgL_bgl_string2078za700za7za7t2144za7, "arg1390", 7 );
DEFINE_STRING( BGl_string2080z00zztestsrfi117z00, BgL_bgl_string2080za700za7za7t2145za7, "arg1472", 7 );
DEFINE_STRING( BGl_string2085z00zztestsrfi117z00, BgL_bgl_string2085za700za7za7t2146za7, "quote", 5 );
DEFINE_STRING( BGl_string2088z00zztestsrfi117z00, BgL_bgl_string2088za700za7za7t2147za7, "threw unexpected exception: [~a]~%", 34 );
DEFINE_STRING( BGl_string2090z00zztestsrfi117z00, BgL_bgl_string2090za700za7za7t2148za7, "failed to throw expected exception: [~a]", 40 );
DEFINE_STRING( BGl_string2091z00zztestsrfi117z00, BgL_bgl_string2091za700za7za7t2149za7, "&main", 5 );
BGL_IMPORT obj_t BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mainzd2envzd2zztestsrfi117z00, BgL_bgl_za762mainza762za7za7test2150z00, BGl_z62mainz62zztestsrfi117z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1984z00zztestsrfi117z00, BgL_bgl_string1984za700za7za7t2151za7, "srfi117-tests", 13 );
DEFINE_STRING( BGl_string1985z00zztestsrfi117z00, BgL_bgl_string1985za700za7za7t2152za7, "list-queues/simple", 18 );
DEFINE_STRING( BGl_string1987z00zztestsrfi117z00, BgL_bgl_string1987za700za7za7t2153za7, "list-queues/whole", 17 );
DEFINE_STRING( BGl_string1989z00zztestsrfi117z00, BgL_bgl_string1989za700za7za7t2154za7, "list-queues/map", 15 );
DEFINE_STRING( BGl_string1991z00zztestsrfi117z00, BgL_bgl_string1991za700za7za7t2155za7, "list-queues/conversion", 22 );
DEFINE_STRING( BGl_string1993z00zztestsrfi117z00, BgL_bgl_string1993za700za7za7t2156za7, "list-queues/unfold", 18 );
DEFINE_STRING( BGl_string1998z00zztestsrfi117z00, BgL_bgl_string1998za700za7za7t2157za7, "/home/jwd/srcs/srfi117/recette/testsrfi117.scm", 46 );
DEFINE_STRING( BGl_string1999z00zztestsrfi117z00, BgL_bgl_string1999za700za7za7t2158za7, "<@anonymous:1755>", 17 );
BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol2003z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2005z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2007z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2009z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2011z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2014z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2017z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2020z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2024z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2026z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2028z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2038z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2040z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2042z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2045z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2047z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2049z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2056z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2070z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2072z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2075z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2077z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2079z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol2084z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2002z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2013z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2016z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2019z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2022z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2023z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2031z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2032z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2033z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2037z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2044z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_symbol1983z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2051z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2052z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2053z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2054z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2055z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2059z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_srfi117zd2testszd2zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2062z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2066z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2069z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2074z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2081z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2082z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2083z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2086z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2087z00zztestsrfi117z00) );
ADD_ROOT( (void *)(&BGl_list2089z00zztestsrfi117z00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}


/* Libraries setup */
static int bigloo_libinit( int argc, char *argv[], char *env[] ) {
return 0; }


long bigloo_abort(long n) { return n; }

int BIGLOO_MAIN(int argc, char *argv[], char *env[]) { 
return _bigloo_main(argc, argv, env, &bigloo_main, &bigloo_libinit, 0);}


/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztestsrfi117z00(long BgL_checksumz00_1104, char * BgL_fromz00_1105)
{
{ 
if(
BGl_zd3fxzd3zz__r4_numbers_6_5_fixnumz00(
(long)CINT(
BINT(
BGl_bitzd2andzd2zz__bitz00(BgL_checksumz00_1104, ((long)421000530)))), BgL_checksumz00_1104))
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zztestsrfi117z00))
{ 
BGl_requirezd2initializa7ationz75zztestsrfi117z00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zztestsrfi117z00(); 
BGl_libraryzd2moduleszd2initz00zztestsrfi117z00(); 
BGl_cnstzd2initzd2zztestsrfi117z00(); 
return 
BGl_toplevelzd2initzd2zztestsrfi117z00();}  else 
{ 
return BUNSPEC;} }  else 
{ 
char * BgL_sz00_1108;
BgL_sz00_1108 = 
"testsrfi117"; 
return 
BGl_modulezd2initzd2errorz00zz__errorz00(BgL_sz00_1108, BgL_fromz00_1105);} } 

}



/* bigloo_main */
BGL_EXPORTED_DEF obj_t bigloo_main(obj_t BgL_argvz00_1110)
{
{ 
BGl_modulezd2initializa7ationz75zztestsrfi117z00(((long)0), "testsrfi117"); 
BGl_bigloozd2initializa7edz12z67zz__paramz00(); 
{ 
obj_t BgL_tmpz00_1128;
BgL_tmpz00_1128 = 
BGl_mainz00zztestsrfi117z00(BgL_argvz00_1110); 
return 
BIGLOO_EXIT(BgL_tmpz00_1128);} } 

}



/* library-modules-init */
obj_t BGl_libraryzd2moduleszd2initz00zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
BGl_modulezd2initializa7ationz75zzsrfi117zf2listzd2queuesz20(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zzbtestzd2suitezd2(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zzbtestzd2testzd2runnerz00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zzbtestzd2simplezd2testz00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zzbtestzd2btestzd2(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zzbtestzd2terminalzd2testzd2runnerzd2(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)0), "testsrfi117"); 
BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)0), "testsrfi117"); 
return BUNSPEC;} 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
BGl_symbol1983z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string1984z00zztestsrfi117z00); 
BGl_symbol2003z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2004z00zztestsrfi117z00); 
BGl_symbol2005z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2006z00zztestsrfi117z00); 
BGl_symbol2007z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2008z00zztestsrfi117z00); 
BGl_symbol2009z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2010z00zztestsrfi117z00); 
BGl_symbol2011z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2012z00zztestsrfi117z00); 
BGl_list2002z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2007z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2011z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(
BINT(((long)0)), BNIL))))))); 
BGl_symbol2014z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2015z00zztestsrfi117z00); 
BGl_list2013z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2014z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2014z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2007z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2011z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(
BINT(((long)0)), BNIL))))))); 
BGl_symbol2017z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2018z00zztestsrfi117z00); 
BGl_list2016z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2005z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2007z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2011z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(BGl_symbol2017z00zztestsrfi117z00, BNIL)))))))); 
BGl_symbol2020z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2021z00zztestsrfi117z00); 
BGl_list2019z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2014z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2014z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2007z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2009z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2011z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(BGl_symbol2020z00zztestsrfi117z00, BNIL)))))))); 
BGl_list2022z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), 
MAKE_YOUNG_PAIR(
BINT(((long)6)), BNIL)))); 
BGl_symbol2024z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2025z00zztestsrfi117z00); 
BGl_symbol2026z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2027z00zztestsrfi117z00); 
BGl_symbol2028z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2029z00zztestsrfi117z00); 
BGl_list2023z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2024z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2024z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2026z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2028z00zztestsrfi117z00, BNIL))))); 
BGl_list2031z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)6)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)0)), BNIL)))); 
BGl_list2032z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), 
MAKE_YOUNG_PAIR(
BINT(((long)6)), 
MAKE_YOUNG_PAIR(
BINT(((long)8)), BNIL))))); 
BGl_list2033z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)8)), 
MAKE_YOUNG_PAIR(
BINT(((long)6)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)0)), BNIL))))); 
BGl_symbol2038z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2039z00zztestsrfi117z00); 
BGl_symbol2040z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2041z00zztestsrfi117z00); 
BGl_symbol2042z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2043z00zztestsrfi117z00); 
BGl_list2037z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2040z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2042z00zztestsrfi117z00, BNIL))))); 
BGl_symbol2045z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2046z00zztestsrfi117z00); 
BGl_symbol2047z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2048z00zztestsrfi117z00); 
BGl_symbol2049z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2050z00zztestsrfi117z00); 
BGl_list2044z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2045z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2045z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2047z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2049z00zztestsrfi117z00, BNIL))))); 
BGl_list2051z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BNIL)); 
BGl_list2052z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL))); 
BGl_list2053z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BNIL))))); 
BGl_list2054z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BNIL)))); 
BGl_symbol2056z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2057z00zztestsrfi117z00); 
BGl_list2055z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2045z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2045z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2056z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2040z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2042z00zztestsrfi117z00, BNIL)))))); 
BGl_list2059z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)10)), 
MAKE_YOUNG_PAIR(
BINT(((long)20)), 
MAKE_YOUNG_PAIR(
BINT(((long)30)), BNIL))); 
BGl_list2062z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BNIL))); 
BGl_list2066z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL))))))); 
BGl_symbol2070z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2071z00zztestsrfi117z00); 
BGl_symbol2072z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2073z00zztestsrfi117z00); 
BGl_list2069z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2070z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2072z00zztestsrfi117z00, BNIL))))); 
BGl_symbol2075z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2076z00zztestsrfi117z00); 
BGl_symbol2077z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2078z00zztestsrfi117z00); 
BGl_symbol2079z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2080z00zztestsrfi117z00); 
BGl_list2074z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2075z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2075z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2077z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2079z00zztestsrfi117z00, BNIL))))); 
BGl_list2081z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BNIL))); 
BGl_symbol2084z00zztestsrfi117z00 = 
bstring_to_symbol(BGl_string2085z00zztestsrfi117z00); 
BGl_list2083z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2084z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_list2081z00zztestsrfi117z00, BNIL)); 
BGl_list2082z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(BGl_symbol2003z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_symbol2038z00zztestsrfi117z00, 
MAKE_YOUNG_PAIR(BGl_list2083z00zztestsrfi117z00, BNIL)))); 
BGl_list2086z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), 
MAKE_YOUNG_PAIR(
BINT(((long)4)), 
MAKE_YOUNG_PAIR(
BINT(((long)5)), BNIL))))); 
BGl_list2087z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)5)), BNIL); 
return ( 
BGl_list2089z00zztestsrfi117z00 = 
MAKE_YOUNG_PAIR(
BINT(((long)0)), 
MAKE_YOUNG_PAIR(
BINT(((long)1)), 
MAKE_YOUNG_PAIR(
BINT(((long)2)), 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL)))), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
{ /* recette/testsrfi117.scm 36 */
BgL_suitez00_bglt BgL_za2currentzd2testzd2suiteza2z00_4;
{ /* recette/testsrfi117.scm 36 */
BgL_suitez00_bglt BgL_new1074z00_499;
{ /* recette/testsrfi117.scm 36 */
BgL_suitez00_bglt BgL_new1073z00_500;
BgL_new1073z00_500 = 
((BgL_suitez00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_suitez00_bgl) ))); 
{ /* recette/testsrfi117.scm 36 */
long BgL_arg1784z00_501;
{ /* recette/testsrfi117.scm 36 */
long BgL_res1790z00_516;
BgL_res1790z00_516 = 
BGL_CLASS_INDEX(BGl_suitez00zzbtestzd2suitezd2); 
BgL_arg1784z00_501 = BgL_res1790z00_516; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1073z00_500), BgL_arg1784z00_501); } 
BgL_new1074z00_499 = BgL_new1073z00_500; } 
((((BgL_suitez00_bglt)COBJECT(BgL_new1074z00_499))->BgL_descriptionz00)=((obj_t)BGl_symbol1983z00zztestsrfi117z00),BUNSPEC); 
((((BgL_suitez00_bglt)COBJECT(BgL_new1074z00_499))->BgL_testsz00)=((obj_t)BNIL),BUNSPEC); 
((((BgL_suitez00_bglt)COBJECT(BgL_new1074z00_499))->BgL_subsuitesz00)=((obj_t)BNIL),BUNSPEC); 
BgL_za2currentzd2testzd2suiteza2z00_4 = BgL_new1074z00_499; } 
{ /* recette/testsrfi117.scm 7 */
BgL_simplezd2testzd2_bglt BgL_arg1077z00_5;
{ /* recette/testsrfi117.scm 7 */
BgL_simplezd2testzd2_bglt BgL_new1040z00_8;
{ /* recette/testsrfi117.scm 7 */
BgL_simplezd2testzd2_bglt BgL_new1039z00_254;
BgL_new1039z00_254 = 
((BgL_simplezd2testzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_simplezd2testzd2_bgl) ))); 
{ /* recette/testsrfi117.scm 7 */
long BgL_arg1525z00_255;
{ /* recette/testsrfi117.scm 7 */
long BgL_res1791z00_520;
BgL_res1791z00_520 = 
BGL_CLASS_INDEX(BGl_simplezd2testzd2zzbtestzd2simplezd2testz00); 
BgL_arg1525z00_255 = BgL_res1791z00_520; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1039z00_254), BgL_arg1525z00_255); } 
BgL_new1040z00_8 = BgL_new1039z00_254; } 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1040z00_8))->BgL_descriptionz00)=((obj_t)BGl_string1985z00zztestsrfi117z00),BUNSPEC); 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1040z00_8))->BgL_expressionz00)=((obj_t)BGl_proc1986z00zztestsrfi117z00),BUNSPEC); 
BgL_arg1077z00_5 = BgL_new1040z00_8; } 
BGl_testzd2addz12zc0zzbtestzd2btestzd2(BgL_za2currentzd2testzd2suiteza2z00_4, 
((obj_t)BgL_arg1077z00_5)); } 
{ /* recette/testsrfi117.scm 38 */
BgL_simplezd2testzd2_bglt BgL_arg1526z00_256;
{ /* recette/testsrfi117.scm 38 */
BgL_simplezd2testzd2_bglt BgL_new1066z00_259;
{ /* recette/testsrfi117.scm 38 */
BgL_simplezd2testzd2_bglt BgL_new1065z00_303;
BgL_new1065z00_303 = 
((BgL_simplezd2testzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_simplezd2testzd2_bgl) ))); 
{ /* recette/testsrfi117.scm 38 */
long BgL_arg1639z00_304;
{ /* recette/testsrfi117.scm 38 */
long BgL_res1793z00_555;
BgL_res1793z00_555 = 
BGL_CLASS_INDEX(BGl_simplezd2testzd2zzbtestzd2simplezd2testz00); 
BgL_arg1639z00_304 = BgL_res1793z00_555; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1065z00_303), BgL_arg1639z00_304); } 
BgL_new1066z00_259 = BgL_new1065z00_303; } 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1066z00_259))->BgL_descriptionz00)=((obj_t)BGl_string1987z00zztestsrfi117z00),BUNSPEC); 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1066z00_259))->BgL_expressionz00)=((obj_t)BGl_proc1988z00zztestsrfi117z00),BUNSPEC); 
BgL_arg1526z00_256 = BgL_new1066z00_259; } 
BGl_testzd2addz12zc0zzbtestzd2btestzd2(BgL_za2currentzd2testzd2suiteza2z00_4, 
((obj_t)BgL_arg1526z00_256)); } 
{ /* recette/testsrfi117.scm 48 */
BgL_simplezd2testzd2_bglt BgL_arg1640z00_305;
{ /* recette/testsrfi117.scm 48 */
BgL_simplezd2testzd2_bglt BgL_new1068z00_308;
{ /* recette/testsrfi117.scm 48 */
BgL_simplezd2testzd2_bglt BgL_new1067z00_354;
BgL_new1067z00_354 = 
((BgL_simplezd2testzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_simplezd2testzd2_bgl) ))); 
{ /* recette/testsrfi117.scm 48 */
long BgL_arg1671z00_355;
{ /* recette/testsrfi117.scm 48 */
long BgL_res1795z00_560;
BgL_res1795z00_560 = 
BGL_CLASS_INDEX(BGl_simplezd2testzd2zzbtestzd2simplezd2testz00); 
BgL_arg1671z00_355 = BgL_res1795z00_560; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1067z00_354), BgL_arg1671z00_355); } 
BgL_new1068z00_308 = BgL_new1067z00_354; } 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1068z00_308))->BgL_descriptionz00)=((obj_t)BGl_string1989z00zztestsrfi117z00),BUNSPEC); 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1068z00_308))->BgL_expressionz00)=((obj_t)BGl_proc1990z00zztestsrfi117z00),BUNSPEC); 
BgL_arg1640z00_305 = BgL_new1068z00_308; } 
BGl_testzd2addz12zc0zzbtestzd2btestzd2(BgL_za2currentzd2testzd2suiteza2z00_4, 
((obj_t)BgL_arg1640z00_305)); } 
{ /* recette/testsrfi117.scm 58 */
BgL_simplezd2testzd2_bglt BgL_arg1672z00_356;
{ /* recette/testsrfi117.scm 58 */
BgL_simplezd2testzd2_bglt BgL_new1070z00_359;
{ /* recette/testsrfi117.scm 58 */
BgL_simplezd2testzd2_bglt BgL_new1069z00_435;
BgL_new1069z00_435 = 
((BgL_simplezd2testzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_simplezd2testzd2_bgl) ))); 
{ /* recette/testsrfi117.scm 58 */
long BgL_arg1753z00_436;
{ /* recette/testsrfi117.scm 58 */
long BgL_res1798z00_568;
BgL_res1798z00_568 = 
BGL_CLASS_INDEX(BGl_simplezd2testzd2zzbtestzd2simplezd2testz00); 
BgL_arg1753z00_436 = BgL_res1798z00_568; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1069z00_435), BgL_arg1753z00_436); } 
BgL_new1070z00_359 = BgL_new1069z00_435; } 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1070z00_359))->BgL_descriptionz00)=((obj_t)BGl_string1991z00zztestsrfi117z00),BUNSPEC); 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1070z00_359))->BgL_expressionz00)=((obj_t)BGl_proc1992z00zztestsrfi117z00),BUNSPEC); 
BgL_arg1672z00_356 = BgL_new1070z00_359; } 
BGl_testzd2addz12zc0zzbtestzd2btestzd2(BgL_za2currentzd2testzd2suiteza2z00_4, 
((obj_t)BgL_arg1672z00_356)); } 
{ /* recette/testsrfi117.scm 78 */
BgL_simplezd2testzd2_bglt BgL_arg1754z00_437;
{ /* recette/testsrfi117.scm 78 */
BgL_simplezd2testzd2_bglt BgL_new1072z00_440;
{ /* recette/testsrfi117.scm 78 */
BgL_simplezd2testzd2_bglt BgL_new1071z00_497;
BgL_new1071z00_497 = 
((BgL_simplezd2testzd2_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_simplezd2testzd2_bgl) ))); 
{ /* recette/testsrfi117.scm 78 */
long BgL_arg1783z00_498;
{ /* recette/testsrfi117.scm 78 */
long BgL_res1801z00_578;
BgL_res1801z00_578 = 
BGL_CLASS_INDEX(BGl_simplezd2testzd2zzbtestzd2simplezd2testz00); 
BgL_arg1783z00_498 = BgL_res1801z00_578; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1071z00_497), BgL_arg1783z00_498); } 
BgL_new1072z00_440 = BgL_new1071z00_497; } 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1072z00_440))->BgL_descriptionz00)=((obj_t)BGl_string1993z00zztestsrfi117z00),BUNSPEC); 
((((BgL_simplezd2testzd2_bglt)COBJECT(BgL_new1072z00_440))->BgL_expressionz00)=((obj_t)BGl_proc1994z00zztestsrfi117z00),BUNSPEC); 
BgL_arg1754z00_437 = BgL_new1072z00_440; } 
BGl_testzd2addz12zc0zzbtestzd2btestzd2(BgL_za2currentzd2testzd2suiteza2z00_4, 
((obj_t)BgL_arg1754z00_437)); } 
return ( 
BGl_srfi117zd2testszd2zztestsrfi117z00 = BgL_za2currentzd2testzd2suiteza2z00_4, BUNSPEC) ;} } 

}



/* &<@anonymous:1755> */
obj_t BGl_z62zc3z04anonymousza31755ze3ze5zztestsrfi117z00(obj_t BgL_envz00_621)
{
{ /* recette/testsrfi117.scm 78 */
{ /* recette/testsrfi117.scm 78 */
obj_t BgL_xz00_835;
BgL_xz00_835 = BUNSPEC; 
{ /* recette/testsrfi117.scm 82 */
obj_t BgL_funz00_839;
{ /* recette/testsrfi117.scm 82 */
obj_t BgL_aux1863z00_840;
BgL_aux1863z00_840 = BGl_listzd2queuezd2unfoldz00zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1863z00_840))
{ /* recette/testsrfi117.scm 82 */
BgL_funz00_839 = BgL_aux1863z00_840; }  else 
{ 
obj_t BgL_auxz00_1409;
BgL_auxz00_1409 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)3285)), BGl_string1999z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1863z00_840); 
FAILURE(BgL_auxz00_1409,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_839, ((long)4)))
{ /* recette/testsrfi117.scm 82 */
BgL_xz00_835 = 
PROCEDURE_ENTRY(BgL_funz00_839)(BGl_listzd2queuezd2unfoldz00zzsrfi117zf2listzd2queuesz20, BGl_proc1996z00zztestsrfi117z00, BGl_proc1995z00zztestsrfi117z00, BGl_proc1997z00zztestsrfi117z00, 
BINT(((long)0)), BEOA); }  else 
{ /* recette/testsrfi117.scm 82 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2002z00zztestsrfi117z00,BgL_funz00_839);} } 
{ /* recette/testsrfi117.scm 78 */
obj_t BgL_yz00_841;
{ /* recette/testsrfi117.scm 84 */
obj_t BgL_funz00_842;
{ /* recette/testsrfi117.scm 84 */
obj_t BgL_aux1867z00_843;
BgL_aux1867z00_843 = BGl_listzd2queuezd2unfoldzd2rightzd2zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1867z00_843))
{ /* recette/testsrfi117.scm 84 */
BgL_funz00_842 = BgL_aux1867z00_843; }  else 
{ 
obj_t BgL_auxz00_1426;
BgL_auxz00_1426 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)3395)), BGl_string1999z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1867z00_843); 
FAILURE(BgL_auxz00_1426,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_842, ((long)4)))
{ /* recette/testsrfi117.scm 84 */
BgL_yz00_841 = 
PROCEDURE_ENTRY(BgL_funz00_842)(BGl_listzd2queuezd2unfoldzd2rightzd2zzsrfi117zf2listzd2queuesz20, BGl_proc1996z00zztestsrfi117z00, BGl_proc1995z00zztestsrfi117z00, BGl_proc1997z00zztestsrfi117z00, 
BINT(((long)0)), BEOA); }  else 
{ /* recette/testsrfi117.scm 84 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2013z00zztestsrfi117z00,BgL_funz00_842);} } 
{ /* recette/testsrfi117.scm 78 */
obj_t BgL_x0z00_844;
{ /* recette/testsrfi117.scm 86 */
obj_t BgL_list1776z00_845;
BgL_list1776z00_845 = 
MAKE_YOUNG_PAIR(
BINT(((long)8)), BNIL); 
BgL_x0z00_844 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1776z00_845); } 
{ /* recette/testsrfi117.scm 78 */
obj_t BgL_x1z00_846;
{ /* recette/testsrfi117.scm 87 */
obj_t BgL_funz00_847;
{ /* recette/testsrfi117.scm 87 */
obj_t BgL_aux1871z00_848;
BgL_aux1871z00_848 = BGl_listzd2queuezd2unfoldz00zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1871z00_848))
{ /* recette/testsrfi117.scm 87 */
BgL_funz00_847 = BgL_aux1871z00_848; }  else 
{ 
obj_t BgL_auxz00_1446;
BgL_auxz00_1446 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)3545)), BGl_string1999z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1871z00_848); 
FAILURE(BgL_auxz00_1446,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_847, ((long)5)))
{ /* recette/testsrfi117.scm 87 */
BgL_x1z00_846 = 
PROCEDURE_ENTRY(BgL_funz00_847)(BGl_listzd2queuezd2unfoldz00zzsrfi117zf2listzd2queuesz20, BGl_proc1996z00zztestsrfi117z00, BGl_proc1995z00zztestsrfi117z00, BGl_proc1997z00zztestsrfi117z00, 
BINT(((long)0)), BgL_x0z00_844, BEOA); }  else 
{ /* recette/testsrfi117.scm 87 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2016z00zztestsrfi117z00,BgL_funz00_847);} } 
{ /* recette/testsrfi117.scm 78 */
obj_t BgL_y0z00_849;
{ /* recette/testsrfi117.scm 89 */
obj_t BgL_list1775z00_850;
BgL_list1775z00_850 = 
MAKE_YOUNG_PAIR(
BINT(((long)8)), BNIL); 
BgL_y0z00_849 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1775z00_850); } 
{ /* recette/testsrfi117.scm 78 */
obj_t BgL_y1z00_851;
{ /* recette/testsrfi117.scm 90 */
obj_t BgL_funz00_852;
{ /* recette/testsrfi117.scm 90 */
obj_t BgL_aux1875z00_853;
BgL_aux1875z00_853 = BGl_listzd2queuezd2unfoldzd2rightzd2zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1875z00_853))
{ /* recette/testsrfi117.scm 90 */
BgL_funz00_852 = BgL_aux1875z00_853; }  else 
{ 
obj_t BgL_auxz00_1467;
BgL_auxz00_1467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)3695)), BGl_string1999z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1875z00_853); 
FAILURE(BgL_auxz00_1467,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_852, ((long)5)))
{ /* recette/testsrfi117.scm 90 */
BgL_y1z00_851 = 
PROCEDURE_ENTRY(BgL_funz00_852)(BGl_listzd2queuezd2unfoldzd2rightzd2zzsrfi117zf2listzd2queuesz20, BGl_proc1996z00zztestsrfi117z00, BGl_proc1995z00zztestsrfi117z00, BGl_proc1997z00zztestsrfi117z00, 
BINT(((long)0)), BgL_y0z00_849, BEOA); }  else 
{ /* recette/testsrfi117.scm 90 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2019z00zztestsrfi117z00,BgL_funz00_852);} } 
{ /* recette/testsrfi117.scm 83 */
obj_t BgL_rz00_854;obj_t BgL_vz00_855;
BgL_rz00_854 = BGl_list2022z00zztestsrfi117z00; 
BgL_vz00_855 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_xz00_835); 
{ /* recette/testsrfi117.scm 83 */
bool_t BgL_test2169z00_1484;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 83 */
BgL_test2169z00_1484 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_854, BgL_vz00_855, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 83 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2169z00_1484)
{ /* recette/testsrfi117.scm 83 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 83 */
obj_t BgL_arg1757z00_856;
{ /* recette/testsrfi117.scm 83 */
obj_t BgL_list1758z00_857;
{ /* recette/testsrfi117.scm 83 */
obj_t BgL_arg1759z00_858;
BgL_arg1759z00_858 = 
MAKE_YOUNG_PAIR(BgL_vz00_855, BNIL); 
BgL_list1758z00_857 = 
MAKE_YOUNG_PAIR(BgL_rz00_854, BgL_arg1759z00_858); } 
BgL_arg1757z00_856 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1758z00_857); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1757z00_856); } } } 
{ /* recette/testsrfi117.scm 85 */
obj_t BgL_rz00_859;obj_t BgL_vz00_860;
BgL_rz00_859 = BGl_list2031z00zztestsrfi117z00; 
BgL_vz00_860 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_yz00_841); 
{ /* recette/testsrfi117.scm 85 */
bool_t BgL_test2171z00_1499;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 85 */
BgL_test2171z00_1499 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_859, BgL_vz00_860, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 85 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2171z00_1499)
{ /* recette/testsrfi117.scm 85 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 85 */
obj_t BgL_arg1763z00_861;
{ /* recette/testsrfi117.scm 85 */
obj_t BgL_list1764z00_862;
{ /* recette/testsrfi117.scm 85 */
obj_t BgL_arg1765z00_863;
BgL_arg1765z00_863 = 
MAKE_YOUNG_PAIR(BgL_vz00_860, BNIL); 
BgL_list1764z00_862 = 
MAKE_YOUNG_PAIR(BgL_rz00_859, BgL_arg1765z00_863); } 
BgL_arg1763z00_861 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1764z00_862); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1763z00_861); } } } 
{ /* recette/testsrfi117.scm 88 */
obj_t BgL_rz00_864;obj_t BgL_vz00_865;
BgL_rz00_864 = BGl_list2032z00zztestsrfi117z00; 
BgL_vz00_865 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_x1z00_846); 
{ /* recette/testsrfi117.scm 88 */
bool_t BgL_test2173z00_1514;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 88 */
BgL_test2173z00_1514 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_864, BgL_vz00_865, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 88 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2173z00_1514)
{ /* recette/testsrfi117.scm 88 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 88 */
obj_t BgL_arg1768z00_866;
{ /* recette/testsrfi117.scm 88 */
obj_t BgL_list1769z00_867;
{ /* recette/testsrfi117.scm 88 */
obj_t BgL_arg1770z00_868;
BgL_arg1770z00_868 = 
MAKE_YOUNG_PAIR(BgL_vz00_865, BNIL); 
BgL_list1769z00_867 = 
MAKE_YOUNG_PAIR(BgL_rz00_864, BgL_arg1770z00_868); } 
BgL_arg1768z00_866 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1769z00_867); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1768z00_866); } } } 
{ /* recette/testsrfi117.scm 91 */
obj_t BgL_rz00_869;obj_t BgL_vz00_870;
BgL_rz00_869 = BGl_list2033z00zztestsrfi117z00; 
BgL_vz00_870 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_y1z00_851); 
{ /* recette/testsrfi117.scm 91 */
bool_t BgL_test2175z00_1529;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 91 */
BgL_test2175z00_1529 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_869, BgL_vz00_870, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 91 */
FAILURE(BGl_string2001z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2175z00_1529)
{ /* recette/testsrfi117.scm 91 */
return BTRUE;}  else 
{ /* recette/testsrfi117.scm 91 */
obj_t BgL_arg1772z00_871;
{ /* recette/testsrfi117.scm 91 */
obj_t BgL_list1773z00_872;
{ /* recette/testsrfi117.scm 91 */
obj_t BgL_arg1774z00_873;
BgL_arg1774z00_873 = 
MAKE_YOUNG_PAIR(BgL_vz00_870, BNIL); 
BgL_list1773z00_872 = 
MAKE_YOUNG_PAIR(BgL_rz00_869, BgL_arg1774z00_873); } 
BgL_arg1772z00_871 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1773z00_872); } 
return 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1772z00_871);} } } } } } } } } } 

}



/* &add1 */
obj_t BGl_z62add1z62zztestsrfi117z00(obj_t BgL_envz00_622, obj_t BgL_xz00_623)
{
{ /* recette/testsrfi117.scm 81 */
if(
INTEGERP(BgL_xz00_623))
{ /* recette/testsrfi117.scm 81 */
long BgL_tmpz00_1545;
BgL_tmpz00_1545 = 
(long)CINT(BgL_xz00_623); 
return 
BGL_SAFE_PLUS_FX(BgL_tmpz00_1545, ((long)1));}  else 
{ /* recette/testsrfi117.scm 81 */
return 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_623, 
BINT(((long)1)));} } 

}



/* &double */
obj_t BGl_z62doublez62zztestsrfi117z00(obj_t BgL_envz00_624, obj_t BgL_xz00_625)
{
{ /* recette/testsrfi117.scm 79 */
if(
INTEGERP(BgL_xz00_625))
{ /* recette/testsrfi117.scm 79 */
long BgL_tmpz00_1552;
BgL_tmpz00_1552 = 
(long)CINT(BgL_xz00_625); 
return 
BGL_SAFE_MUL_FX(BgL_tmpz00_1552, ((long)2));}  else 
{ /* recette/testsrfi117.scm 79 */
return 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_xz00_625, 
BINT(((long)2)));} } 

}



/* &done? */
obj_t BGl_z62donezf3z91zztestsrfi117z00(obj_t BgL_envz00_626, obj_t BgL_xz00_627)
{
{ /* recette/testsrfi117.scm 80 */
{ /* recette/testsrfi117.scm 80 */
bool_t BgL_tmpz00_1557;
if(
INTEGERP(BgL_xz00_627))
{ /* recette/testsrfi117.scm 80 */
BgL_tmpz00_1557 = 
(
(long)CINT(BgL_xz00_627)>((long)3))
; }  else 
{ /* recette/testsrfi117.scm 80 */
BgL_tmpz00_1557 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_627, 
BINT(((long)3)))
; } 
return 
BBOOL(BgL_tmpz00_1557);} } 

}



/* &<@anonymous:1673> */
obj_t BGl_z62zc3z04anonymousza31673ze3ze5zztestsrfi117z00(obj_t BgL_envz00_628)
{
{ /* recette/testsrfi117.scm 58 */
{ /* recette/testsrfi117.scm 59 */
obj_t BgL_nz00_875;
{ /* recette/testsrfi117.scm 59 */
obj_t BgL_list1749z00_876;
{ /* recette/testsrfi117.scm 59 */
obj_t BgL_arg1750z00_877;
BgL_arg1750z00_877 = 
MAKE_YOUNG_PAIR(
BINT(((long)6)), BNIL); 
BgL_list1749z00_876 = 
MAKE_YOUNG_PAIR(
BINT(((long)5)), BgL_arg1750z00_877); } 
BgL_nz00_875 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1749z00_876); } 
{ /* recette/testsrfi117.scm 62 */
obj_t BgL_dz00_878;
{ /* recette/testsrfi117.scm 62 */
obj_t BgL_list1746z00_879;
{ /* recette/testsrfi117.scm 62 */
obj_t BgL_arg1747z00_880;
{ /* recette/testsrfi117.scm 62 */
obj_t BgL_arg1748z00_881;
BgL_arg1748z00_881 = 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL); 
BgL_arg1747z00_880 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BgL_arg1748z00_881); } 
BgL_list1746z00_879 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1747z00_880); } 
BgL_dz00_878 = BgL_list1746z00_879; } 
{ /* recette/testsrfi117.scm 63 */
obj_t BgL_ez00_882;
{ /* recette/testsrfi117.scm 63 */
obj_t BgL_pairz00_883;
if(
PAIRP(BgL_dz00_878))
{ /* recette/testsrfi117.scm 63 */
BgL_pairz00_883 = BgL_dz00_878; }  else 
{ 
obj_t BgL_auxz00_1578;
BgL_auxz00_1578 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)2494)), BGl_string2034z00zztestsrfi117z00, BGl_string2035z00zztestsrfi117z00, BgL_dz00_878); 
FAILURE(BgL_auxz00_1578,BFALSE,BFALSE);} 
{ /* recette/testsrfi117.scm 63 */
obj_t BgL_pairz00_885;
{ /* recette/testsrfi117.scm 63 */
obj_t BgL_aux1889z00_886;
BgL_aux1889z00_886 = 
CDR(BgL_pairz00_883); 
if(
PAIRP(BgL_aux1889z00_886))
{ /* recette/testsrfi117.scm 63 */
BgL_pairz00_885 = BgL_aux1889z00_886; }  else 
{ 
obj_t BgL_auxz00_1585;
BgL_auxz00_1585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)2495)), BGl_string2034z00zztestsrfi117z00, BGl_string2035z00zztestsrfi117z00, BgL_aux1889z00_886); 
FAILURE(BgL_auxz00_1585,BFALSE,BFALSE);} } 
BgL_ez00_882 = 
CDR(BgL_pairz00_885); } } 
{ /* recette/testsrfi117.scm 64 */
obj_t BgL_fz00_887;
{ /* recette/testsrfi117.scm 64 */
obj_t BgL_funz00_888;
{ /* recette/testsrfi117.scm 64 */
obj_t BgL_aux1891z00_889;
BgL_aux1891z00_889 = BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1891z00_889))
{ /* recette/testsrfi117.scm 64 */
BgL_funz00_888 = BgL_aux1891z00_889; }  else 
{ 
obj_t BgL_auxz00_1592;
BgL_auxz00_1592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)2514)), BGl_string2034z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1891z00_889); 
FAILURE(BgL_auxz00_1592,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_888, ((long)2)))
{ /* recette/testsrfi117.scm 64 */
BgL_fz00_887 = 
PROCEDURE_ENTRY(BgL_funz00_888)(BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20, BgL_dz00_878, BgL_ez00_882, BEOA); }  else 
{ /* recette/testsrfi117.scm 64 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2037z00zztestsrfi117z00,BgL_funz00_888);} } 
{ /* recette/testsrfi117.scm 60 */
obj_t BgL_arg1674z00_890;
{ /* recette/testsrfi117.scm 60 */
obj_t BgL_list1675z00_891;
{ /* recette/testsrfi117.scm 60 */
obj_t BgL_arg1676z00_892;
BgL_arg1676z00_892 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BNIL); 
BgL_list1675z00_891 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1676z00_892); } 
BgL_arg1674z00_890 = BgL_list1675z00_891; } 
{ /* recette/testsrfi117.scm 60 */
obj_t BgL_funz00_893;
{ /* recette/testsrfi117.scm 60 */
obj_t BgL_aux1895z00_894;
BgL_aux1895z00_894 = BGl_listzd2queuezd2setzd2listz12zc0zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1895z00_894))
{ /* recette/testsrfi117.scm 60 */
BgL_funz00_893 = BgL_aux1895z00_894; }  else 
{ 
obj_t BgL_auxz00_1610;
BgL_auxz00_1610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)2357)), BGl_string2034z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1895z00_894); 
FAILURE(BgL_auxz00_1610,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_893, ((long)2)))
{ /* recette/testsrfi117.scm 60 */
PROCEDURE_ENTRY(BgL_funz00_893)(BGl_listzd2queuezd2setzd2listz12zc0zzsrfi117zf2listzd2queuesz20, BgL_nz00_875, BgL_arg1674z00_890, BEOA); }  else 
{ /* recette/testsrfi117.scm 60 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2044z00zztestsrfi117z00,BgL_funz00_893);} } } 
{ /* recette/testsrfi117.scm 61 */
obj_t BgL_rz00_895;obj_t BgL_vz00_896;
BgL_rz00_895 = BGl_list2051z00zztestsrfi117z00; 
BgL_vz00_896 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_nz00_875); 
{ /* recette/testsrfi117.scm 61 */
bool_t BgL_test2186z00_1623;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 61 */
BgL_test2186z00_1623 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_895, BgL_vz00_896, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 61 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2186z00_1623)
{ /* recette/testsrfi117.scm 61 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 61 */
obj_t BgL_arg1678z00_897;
{ /* recette/testsrfi117.scm 61 */
obj_t BgL_list1679z00_898;
{ /* recette/testsrfi117.scm 61 */
obj_t BgL_arg1685z00_899;
BgL_arg1685z00_899 = 
MAKE_YOUNG_PAIR(BgL_vz00_896, BNIL); 
BgL_list1679z00_898 = 
MAKE_YOUNG_PAIR(BgL_rz00_895, BgL_arg1685z00_899); } 
BgL_arg1678z00_897 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1679z00_898); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1678z00_897); } } } 
{ /* recette/testsrfi117.scm 65 */
obj_t BgL_dxz00_900;
BgL_dxz00_900 = 
BGl_listzd2queuezd2firstzd2lastzd2zzsrfi117zf2listzd2queuesz20(BgL_fz00_887); 
{ /* recette/testsrfi117.scm 65 */
obj_t BgL_exz00_901;
{ /* recette/testsrfi117.scm 65 */
int BgL_tmpz00_1638;
BgL_tmpz00_1638 = 
(int)(((long)1)); 
BgL_exz00_901 = 
BGL_MVALUES_VAL(BgL_tmpz00_1638); } 
{ /* recette/testsrfi117.scm 72 */
obj_t BgL_gz00_902;
{ /* recette/testsrfi117.scm 72 */
obj_t BgL_funz00_903;
{ /* recette/testsrfi117.scm 72 */
obj_t BgL_aux1901z00_904;
BgL_aux1901z00_904 = BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1901z00_904))
{ /* recette/testsrfi117.scm 72 */
BgL_funz00_903 = BgL_aux1901z00_904; }  else 
{ 
obj_t BgL_auxz00_1643;
BgL_auxz00_1643 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)2900)), BGl_string2034z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1901z00_904); 
FAILURE(BgL_auxz00_1643,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_903, ((long)2)))
{ /* recette/testsrfi117.scm 72 */
BgL_gz00_902 = 
PROCEDURE_ENTRY(BgL_funz00_903)(BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20, BgL_dz00_878, BgL_ez00_882, BEOA); }  else 
{ /* recette/testsrfi117.scm 72 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2037z00zztestsrfi117z00,BgL_funz00_903);} } 
{ /* recette/testsrfi117.scm 74 */
obj_t BgL_hz00_905;
{ /* recette/testsrfi117.scm 74 */
obj_t BgL_list1744z00_906;
{ /* recette/testsrfi117.scm 74 */
obj_t BgL_arg1745z00_907;
BgL_arg1745z00_907 = 
MAKE_YOUNG_PAIR(
BINT(((long)6)), BNIL); 
BgL_list1744z00_906 = 
MAKE_YOUNG_PAIR(
BINT(((long)5)), BgL_arg1745z00_907); } 
BgL_hz00_905 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1744z00_906); } 
{ /* recette/testsrfi117.scm 66 */
bool_t BgL_rz00_908;
BgL_rz00_908 = 
(BgL_dz00_878==BgL_dxz00_900); 
{ /* recette/testsrfi117.scm 66 */
bool_t BgL_test2190z00_1661;
if(
PROCEDURE_CORRECT_ARITYP(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 66 */
BgL_test2190z00_1661 = 
CBOOL(
PROCEDURE_ENTRY(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, 
BBOOL(BgL_rz00_908), BTRUE, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 66 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2190z00_1661)
{ /* recette/testsrfi117.scm 66 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 66 */
obj_t BgL_arg1689z00_909;
{ /* recette/testsrfi117.scm 66 */
obj_t BgL_list1690z00_910;
{ /* recette/testsrfi117.scm 66 */
obj_t BgL_arg1693z00_911;
BgL_arg1693z00_911 = 
MAKE_YOUNG_PAIR(BTRUE, BNIL); 
BgL_list1690z00_910 = 
MAKE_YOUNG_PAIR(
BBOOL(BgL_rz00_908), BgL_arg1693z00_911); } 
BgL_arg1689z00_909 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1690z00_910); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1689z00_909); } } } 
{ /* recette/testsrfi117.scm 67 */
bool_t BgL_rz00_912;
BgL_rz00_912 = 
(BgL_ez00_882==BgL_exz00_901); 
{ /* recette/testsrfi117.scm 67 */
bool_t BgL_test2192z00_1678;
if(
PROCEDURE_CORRECT_ARITYP(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 67 */
BgL_test2192z00_1678 = 
CBOOL(
PROCEDURE_ENTRY(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, 
BBOOL(BgL_rz00_912), BTRUE, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 67 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2192z00_1678)
{ /* recette/testsrfi117.scm 67 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 67 */
obj_t BgL_arg1698z00_913;
{ /* recette/testsrfi117.scm 67 */
obj_t BgL_list1699z00_914;
{ /* recette/testsrfi117.scm 67 */
obj_t BgL_arg1702z00_915;
BgL_arg1702z00_915 = 
MAKE_YOUNG_PAIR(BTRUE, BNIL); 
BgL_list1699z00_914 = 
MAKE_YOUNG_PAIR(
BBOOL(BgL_rz00_912), BgL_arg1702z00_915); } 
BgL_arg1698z00_913 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1699z00_914); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1698z00_913); } } } 
{ /* recette/testsrfi117.scm 68 */
obj_t BgL_rz00_916;obj_t BgL_vz00_917;
BgL_rz00_916 = BGl_list2052z00zztestsrfi117z00; 
BgL_vz00_917 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_fz00_887); 
{ /* recette/testsrfi117.scm 68 */
bool_t BgL_test2194z00_1695;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 68 */
BgL_test2194z00_1695 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_916, BgL_vz00_917, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 68 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2194z00_1695)
{ /* recette/testsrfi117.scm 68 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 68 */
obj_t BgL_arg1709z00_918;
{ /* recette/testsrfi117.scm 68 */
obj_t BgL_list1710z00_919;
{ /* recette/testsrfi117.scm 68 */
obj_t BgL_arg1721z00_920;
BgL_arg1721z00_920 = 
MAKE_YOUNG_PAIR(BgL_vz00_917, BNIL); 
BgL_list1710z00_919 = 
MAKE_YOUNG_PAIR(BgL_rz00_916, BgL_arg1721z00_920); } 
BgL_arg1709z00_918 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1710z00_919); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1709z00_918); } } } 
BGl_listzd2queuezd2addzd2frontz12zc0zzsrfi117zf2listzd2queuesz20(BgL_fz00_887, 
BINT(((long)0))); 
BGl_listzd2queuezd2addzd2backz12zc0zzsrfi117zf2listzd2queuesz20(BgL_fz00_887, 
BINT(((long)4))); 
{ /* recette/testsrfi117.scm 71 */
obj_t BgL_rz00_921;obj_t BgL_vz00_922;
BgL_rz00_921 = BGl_list2053z00zztestsrfi117z00; 
BgL_vz00_922 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_fz00_887); 
{ /* recette/testsrfi117.scm 71 */
bool_t BgL_test2196z00_1714;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 71 */
BgL_test2196z00_1714 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_921, BgL_vz00_922, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 71 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2196z00_1714)
{ /* recette/testsrfi117.scm 71 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 71 */
obj_t BgL_arg1724z00_923;
{ /* recette/testsrfi117.scm 71 */
obj_t BgL_list1725z00_924;
{ /* recette/testsrfi117.scm 71 */
obj_t BgL_arg1733z00_925;
BgL_arg1733z00_925 = 
MAKE_YOUNG_PAIR(BgL_vz00_922, BNIL); 
BgL_list1725z00_924 = 
MAKE_YOUNG_PAIR(BgL_rz00_921, BgL_arg1733z00_925); } 
BgL_arg1724z00_923 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1725z00_924); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1724z00_923); } } } 
{ /* recette/testsrfi117.scm 73 */
obj_t BgL_rz00_926;obj_t BgL_vz00_927;
BgL_rz00_926 = BGl_list2054z00zztestsrfi117z00; 
BgL_vz00_927 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_gz00_902); 
{ /* recette/testsrfi117.scm 73 */
bool_t BgL_test2198z00_1729;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 73 */
BgL_test2198z00_1729 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_926, BgL_vz00_927, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 73 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2198z00_1729)
{ /* recette/testsrfi117.scm 73 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 73 */
obj_t BgL_arg1737z00_928;
{ /* recette/testsrfi117.scm 73 */
obj_t BgL_list1738z00_929;
{ /* recette/testsrfi117.scm 73 */
obj_t BgL_arg1739z00_930;
BgL_arg1739z00_930 = 
MAKE_YOUNG_PAIR(BgL_vz00_927, BNIL); 
BgL_list1738z00_929 = 
MAKE_YOUNG_PAIR(BgL_rz00_926, BgL_arg1739z00_930); } 
BgL_arg1737z00_928 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1738z00_929); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1737z00_928); } } } 
{ /* recette/testsrfi117.scm 75 */
obj_t BgL_funz00_931;
{ /* recette/testsrfi117.scm 75 */
obj_t BgL_aux1915z00_932;
BgL_aux1915z00_932 = BGl_listzd2queuezd2setzd2listz12zc0zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1915z00_932))
{ /* recette/testsrfi117.scm 75 */
BgL_funz00_931 = BgL_aux1915z00_932; }  else 
{ 
obj_t BgL_auxz00_1745;
BgL_auxz00_1745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)3043)), BGl_string2034z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1915z00_932); 
FAILURE(BgL_auxz00_1745,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_931, ((long)3)))
{ /* recette/testsrfi117.scm 75 */
PROCEDURE_ENTRY(BgL_funz00_931)(BGl_listzd2queuezd2setzd2listz12zc0zzsrfi117zf2listzd2queuesz20, BgL_hz00_905, BgL_dz00_878, BgL_ez00_882, BEOA); }  else 
{ /* recette/testsrfi117.scm 75 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2055z00zztestsrfi117z00,BgL_funz00_931);} } 
{ /* recette/testsrfi117.scm 76 */
obj_t BgL_rz00_933;obj_t BgL_vz00_934;
BgL_rz00_933 = BGl_list2054z00zztestsrfi117z00; 
BgL_vz00_934 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_hz00_905); 
{ /* recette/testsrfi117.scm 76 */
bool_t BgL_test2202z00_1759;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 76 */
BgL_test2202z00_1759 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_933, BgL_vz00_934, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 76 */
FAILURE(BGl_string2036z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2202z00_1759)
{ /* recette/testsrfi117.scm 76 */
return BTRUE;}  else 
{ /* recette/testsrfi117.scm 76 */
obj_t BgL_arg1741z00_935;
{ /* recette/testsrfi117.scm 76 */
obj_t BgL_list1742z00_936;
{ /* recette/testsrfi117.scm 76 */
obj_t BgL_arg1743z00_937;
BgL_arg1743z00_937 = 
MAKE_YOUNG_PAIR(BgL_vz00_934, BNIL); 
BgL_list1742z00_936 = 
MAKE_YOUNG_PAIR(BgL_rz00_933, BgL_arg1743z00_937); } 
BgL_arg1741z00_935 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1742z00_936); } 
return 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1741z00_935);} } } } } } } } } } } } 

}



/* &<@anonymous:1641> */
obj_t BGl_z62zc3z04anonymousza31641ze3ze5zztestsrfi117z00(obj_t BgL_envz00_629)
{
{ /* recette/testsrfi117.scm 48 */
{ /* recette/testsrfi117.scm 48 */
obj_t BgL_sumz00_938;
{ /* recette/testsrfi117.scm 48 */
obj_t BgL_cellvalz00_1773;
BgL_cellvalz00_1773 = 
BINT(((long)0)); 
BgL_sumz00_938 = 
MAKE_CELL(BgL_cellvalz00_1773); } 
{ /* recette/testsrfi117.scm 49 */
obj_t BgL_rz00_939;
{ /* recette/testsrfi117.scm 49 */
obj_t BgL_list1666z00_940;
{ /* recette/testsrfi117.scm 49 */
obj_t BgL_arg1669z00_941;
{ /* recette/testsrfi117.scm 49 */
obj_t BgL_arg1670z00_942;
BgL_arg1670z00_942 = 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL); 
BgL_arg1669z00_941 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BgL_arg1670z00_942); } 
BgL_list1666z00_940 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1669z00_941); } 
BgL_rz00_939 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1666z00_940); } 
{ /* recette/testsrfi117.scm 50 */
obj_t BgL_sz00_943;
BgL_sz00_943 = 
BGl_listzd2queuezd2mapz00zzsrfi117zf2listzd2queuesz20(BGl_proc2058z00zztestsrfi117z00, BgL_rz00_939); 
{ /* recette/testsrfi117.scm 51 */
obj_t BgL_rz00_944;obj_t BgL_vz00_945;
BgL_rz00_944 = BGl_list2059z00zztestsrfi117z00; 
BgL_vz00_945 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_sz00_943); 
{ /* recette/testsrfi117.scm 51 */
bool_t BgL_test2204z00_1784;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 51 */
BgL_test2204z00_1784 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_944, BgL_vz00_945, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 51 */
FAILURE(BGl_string2060z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2204z00_1784)
{ /* recette/testsrfi117.scm 51 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 51 */
obj_t BgL_arg1643z00_946;
{ /* recette/testsrfi117.scm 51 */
obj_t BgL_list1644z00_947;
{ /* recette/testsrfi117.scm 51 */
obj_t BgL_arg1645z00_948;
BgL_arg1645z00_948 = 
MAKE_YOUNG_PAIR(BgL_vz00_945, BNIL); 
BgL_list1644z00_947 = 
MAKE_YOUNG_PAIR(BgL_rz00_944, BgL_arg1645z00_948); } 
BgL_arg1643z00_946 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1644z00_947); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1643z00_946); } } } 
BGl_listzd2queuezd2mapz12z12zzsrfi117zf2listzd2queuesz20(BGl_proc2061z00zztestsrfi117z00, BgL_rz00_939); 
{ /* recette/testsrfi117.scm 53 */
obj_t BgL_rz00_949;obj_t BgL_vz00_950;
BgL_rz00_949 = BGl_list2062z00zztestsrfi117z00; 
BgL_vz00_950 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_rz00_939); 
{ /* recette/testsrfi117.scm 53 */
bool_t BgL_test2206z00_1800;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 53 */
BgL_test2206z00_1800 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_949, BgL_vz00_950, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 53 */
FAILURE(BGl_string2060z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2206z00_1800)
{ /* recette/testsrfi117.scm 53 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 53 */
obj_t BgL_arg1654z00_951;
{ /* recette/testsrfi117.scm 53 */
obj_t BgL_list1655z00_952;
{ /* recette/testsrfi117.scm 53 */
obj_t BgL_arg1656z00_953;
BgL_arg1656z00_953 = 
MAKE_YOUNG_PAIR(BgL_vz00_950, BNIL); 
BgL_list1655z00_952 = 
MAKE_YOUNG_PAIR(BgL_rz00_949, BgL_arg1656z00_953); } 
BgL_arg1654z00_951 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1655z00_952); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1654z00_951); } } } 
{ /* recette/testsrfi117.scm 55 */
obj_t BgL_zc3z04anonymousza31658ze3z87_954;
BgL_zc3z04anonymousza31658ze3z87_954 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31658ze3ze5zztestsrfi117z00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31658ze3z87_954, 
(int)(((long)0)), 
((obj_t)BgL_sumz00_938)); 
BGl_listzd2queuezd2forzd2eachzd2zzsrfi117zf2listzd2queuesz20(BgL_zc3z04anonymousza31658ze3z87_954, BgL_sz00_943); } 
{ /* recette/testsrfi117.scm 56 */
obj_t BgL_vz00_955;
BgL_vz00_955 = 
CELL_REF(BgL_sumz00_938); 
{ /* recette/testsrfi117.scm 56 */
bool_t BgL_test2208z00_1821;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 56 */
BgL_test2208z00_1821 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, 
BINT(((long)60)), BgL_vz00_955, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 56 */
FAILURE(BGl_string2060z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2208z00_1821)
{ /* recette/testsrfi117.scm 56 */
return BTRUE;}  else 
{ /* recette/testsrfi117.scm 56 */
obj_t BgL_arg1660z00_956;
{ /* recette/testsrfi117.scm 56 */
obj_t BgL_list1661z00_957;
{ /* recette/testsrfi117.scm 56 */
obj_t BgL_arg1662z00_958;
BgL_arg1662z00_958 = 
MAKE_YOUNG_PAIR(BgL_vz00_955, BNIL); 
BgL_list1661z00_957 = 
MAKE_YOUNG_PAIR(
BINT(((long)60)), BgL_arg1662z00_958); } 
BgL_arg1660z00_956 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1661z00_957); } 
return 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1660z00_956);} } } } } } } 

}



/* &<@anonymous:1658> */
obj_t BGl_z62zc3z04anonymousza31658ze3ze5zztestsrfi117z00(obj_t BgL_envz00_632, obj_t BgL_xz00_634)
{
{ /* recette/testsrfi117.scm 55 */
{ /* recette/testsrfi117.scm 55 */
obj_t BgL_sumz00_633;
BgL_sumz00_633 = 
PROCEDURE_REF(BgL_envz00_632, 
(int)(((long)0))); 
{ /* recette/testsrfi117.scm 55 */
obj_t BgL_auxz00_959;
BgL_auxz00_959 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
CELL_REF(BgL_sumz00_633), BgL_xz00_634); 
return 
CELL_SET(BgL_sumz00_633, BgL_auxz00_959);} } } 

}



/* &<@anonymous:1651> */
obj_t BGl_z62zc3z04anonymousza31651ze3ze5zztestsrfi117z00(obj_t BgL_envz00_636, obj_t BgL_xz00_637)
{
{ /* recette/testsrfi117.scm 52 */
if(
INTEGERP(BgL_xz00_637))
{ /* recette/testsrfi117.scm 52 */
long BgL_tmpz00_1842;
BgL_tmpz00_1842 = 
(long)CINT(BgL_xz00_637); 
return 
BGL_SAFE_PLUS_FX(BgL_tmpz00_1842, ((long)1));}  else 
{ /* recette/testsrfi117.scm 52 */
return 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_637, 
BINT(((long)1)));} } 

}



/* &<@anonymous:1664> */
obj_t BGl_z62zc3z04anonymousza31664ze3ze5zztestsrfi117z00(obj_t BgL_envz00_638, obj_t BgL_xz00_639)
{
{ /* recette/testsrfi117.scm 50 */
if(
INTEGERP(BgL_xz00_639))
{ /* recette/testsrfi117.scm 50 */
long BgL_tmpz00_1849;
BgL_tmpz00_1849 = 
(long)CINT(BgL_xz00_639); 
return 
BGL_SAFE_MUL_FX(BgL_tmpz00_1849, ((long)10));}  else 
{ /* recette/testsrfi117.scm 50 */
return 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_xz00_639, 
BINT(((long)10)));} } 

}



/* &<@anonymous:1527> */
obj_t BGl_z62zc3z04anonymousza31527ze3ze5zztestsrfi117z00(obj_t BgL_envz00_640)
{
{ /* recette/testsrfi117.scm 38 */
{ /* recette/testsrfi117.scm 39 */
obj_t BgL_az00_964;
{ /* recette/testsrfi117.scm 39 */
obj_t BgL_list1612z00_965;
{ /* recette/testsrfi117.scm 39 */
obj_t BgL_arg1626z00_966;
{ /* recette/testsrfi117.scm 39 */
obj_t BgL_arg1631z00_967;
BgL_arg1631z00_967 = 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL); 
BgL_arg1626z00_966 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BgL_arg1631z00_967); } 
BgL_list1612z00_965 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1626z00_966); } 
BgL_az00_964 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1612z00_965); } 
{ /* recette/testsrfi117.scm 40 */
obj_t BgL_bz00_968;
BgL_bz00_968 = 
BGl_listzd2queuezd2copyz00zzsrfi117zf2listzd2queuesz20(BgL_az00_964); 
{ /* recette/testsrfi117.scm 41 */
obj_t BgL_rz00_969;obj_t BgL_vz00_970;
BgL_rz00_969 = BGl_list2052z00zztestsrfi117z00; 
BgL_vz00_970 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_bz00_968); 
{ /* recette/testsrfi117.scm 41 */
bool_t BgL_test2212z00_1863;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 41 */
BgL_test2212z00_1863 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_969, BgL_vz00_970, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 41 */
FAILURE(BGl_string2063z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2212z00_1863)
{ /* recette/testsrfi117.scm 41 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 41 */
obj_t BgL_arg1544z00_971;
{ /* recette/testsrfi117.scm 41 */
obj_t BgL_list1545z00_972;
{ /* recette/testsrfi117.scm 41 */
obj_t BgL_arg1546z00_973;
BgL_arg1546z00_973 = 
MAKE_YOUNG_PAIR(BgL_vz00_970, BNIL); 
BgL_list1545z00_972 = 
MAKE_YOUNG_PAIR(BgL_rz00_969, BgL_arg1546z00_973); } 
BgL_arg1544z00_971 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1545z00_972); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1544z00_971); } } } 
BGl_listzd2queuezd2addzd2frontz12zc0zzsrfi117zf2listzd2queuesz20(BgL_bz00_968, 
BINT(((long)0))); 
{ /* recette/testsrfi117.scm 43 */
obj_t BgL_rz00_974;obj_t BgL_vz00_975;
BgL_rz00_974 = BGl_list2052z00zztestsrfi117z00; 
BgL_vz00_975 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_az00_964); 
{ /* recette/testsrfi117.scm 43 */
bool_t BgL_test2214z00_1880;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 43 */
BgL_test2214z00_1880 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_974, BgL_vz00_975, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 43 */
FAILURE(BGl_string2063z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2214z00_1880)
{ /* recette/testsrfi117.scm 43 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 43 */
obj_t BgL_arg1559z00_976;
{ /* recette/testsrfi117.scm 43 */
obj_t BgL_list1560z00_977;
{ /* recette/testsrfi117.scm 43 */
obj_t BgL_arg1580z00_978;
BgL_arg1580z00_978 = 
MAKE_YOUNG_PAIR(BgL_vz00_975, BNIL); 
BgL_list1560z00_977 = 
MAKE_YOUNG_PAIR(BgL_rz00_974, BgL_arg1580z00_978); } 
BgL_arg1559z00_976 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1560z00_977); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1559z00_976); } } } 
{ /* recette/testsrfi117.scm 44 */
long BgL_vz00_979;
{ /* recette/testsrfi117.scm 44 */
obj_t BgL_arg1592z00_980;
BgL_arg1592z00_980 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_bz00_968); 
{ /* recette/testsrfi117.scm 44 */
obj_t BgL_auxz00_1895;
{ /* recette/testsrfi117.scm 44 */
bool_t BgL_test2216z00_1896;
if(
PAIRP(BgL_arg1592z00_980))
{ /* recette/testsrfi117.scm 44 */
BgL_test2216z00_1896 = ((bool_t)1)
; }  else 
{ /* recette/testsrfi117.scm 44 */
BgL_test2216z00_1896 = 
NULLP(BgL_arg1592z00_980)
; } 
if(BgL_test2216z00_1896)
{ /* recette/testsrfi117.scm 44 */
BgL_auxz00_1895 = BgL_arg1592z00_980
; }  else 
{ 
obj_t BgL_auxz00_1900;
BgL_auxz00_1900 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)1771)), BGl_string2064z00zztestsrfi117z00, BGl_string2065z00zztestsrfi117z00, BgL_arg1592z00_980); 
FAILURE(BgL_auxz00_1900,BFALSE,BFALSE);} } 
BgL_vz00_979 = 
bgl_list_length(BgL_auxz00_1895); } } 
{ /* recette/testsrfi117.scm 44 */
bool_t BgL_test2218z00_1905;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 44 */
BgL_test2218z00_1905 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, 
BINT(((long)4)), 
BINT(BgL_vz00_979), BEOA))
; }  else 
{ /* recette/testsrfi117.scm 44 */
FAILURE(BGl_string2063z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2218z00_1905)
{ /* recette/testsrfi117.scm 44 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 44 */
obj_t BgL_arg1585z00_985;
{ /* recette/testsrfi117.scm 44 */
obj_t BgL_list1586z00_986;
{ /* recette/testsrfi117.scm 44 */
obj_t BgL_arg1590z00_987;
BgL_arg1590z00_987 = 
MAKE_YOUNG_PAIR(
BINT(BgL_vz00_979), BNIL); 
BgL_list1586z00_986 = 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BgL_arg1590z00_987); } 
BgL_arg1585z00_985 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1586z00_986); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1585z00_985); } } } 
{ /* recette/testsrfi117.scm 45 */
obj_t BgL_cz00_988;
{ /* recette/testsrfi117.scm 45 */
obj_t BgL_arg1608z00_989;
{ /* recette/testsrfi117.scm 45 */
obj_t BgL_list1609z00_990;
{ /* recette/testsrfi117.scm 45 */
obj_t BgL_arg1611z00_991;
BgL_arg1611z00_991 = 
MAKE_YOUNG_PAIR(BgL_bz00_968, BNIL); 
BgL_list1609z00_990 = 
MAKE_YOUNG_PAIR(BgL_az00_964, BgL_arg1611z00_991); } 
BgL_arg1608z00_989 = BgL_list1609z00_990; } 
BgL_cz00_988 = 
BGl_listzd2queuezd2concatenatez00zzsrfi117zf2listzd2queuesz20(BgL_arg1608z00_989); } 
{ /* recette/testsrfi117.scm 46 */
obj_t BgL_rz00_992;obj_t BgL_vz00_993;
BgL_rz00_992 = BGl_list2066z00zztestsrfi117z00; 
BgL_vz00_993 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_cz00_988); 
{ /* recette/testsrfi117.scm 46 */
bool_t BgL_test2220z00_1927;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 46 */
BgL_test2220z00_1927 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_992, BgL_vz00_993, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 46 */
FAILURE(BGl_string2063z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2220z00_1927)
{ /* recette/testsrfi117.scm 46 */
return BTRUE;}  else 
{ /* recette/testsrfi117.scm 46 */
obj_t BgL_arg1601z00_994;
{ /* recette/testsrfi117.scm 46 */
obj_t BgL_list1602z00_995;
{ /* recette/testsrfi117.scm 46 */
obj_t BgL_arg1607z00_996;
BgL_arg1607z00_996 = 
MAKE_YOUNG_PAIR(BgL_vz00_993, BNIL); 
BgL_list1602z00_995 = 
MAKE_YOUNG_PAIR(BgL_rz00_992, BgL_arg1607z00_996); } 
BgL_arg1601z00_994 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1602z00_995); } 
return 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1601z00_994);} } } } } } } 

}



/* &<@anonymous:1078> */
obj_t BGl_z62zc3z04anonymousza31078ze3ze5zztestsrfi117z00(obj_t BgL_envz00_641)
{
{ /* recette/testsrfi117.scm 7 */
{ /* recette/testsrfi117.scm 8 */
obj_t BgL_xz00_998;
{ /* recette/testsrfi117.scm 8 */
obj_t BgL_list1507z00_999;
{ /* recette/testsrfi117.scm 8 */
obj_t BgL_arg1509z00_1000;
{ /* recette/testsrfi117.scm 8 */
obj_t BgL_arg1510z00_1001;
BgL_arg1510z00_1001 = 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL); 
BgL_arg1509z00_1000 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BgL_arg1510z00_1001); } 
BgL_list1507z00_999 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1509z00_1000); } 
BgL_xz00_998 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1507z00_999); } 
{ /* recette/testsrfi117.scm 9 */
obj_t BgL_x1z00_1002;
{ /* recette/testsrfi117.scm 9 */
obj_t BgL_list1500z00_1003;
{ /* recette/testsrfi117.scm 9 */
obj_t BgL_arg1505z00_1004;
{ /* recette/testsrfi117.scm 9 */
obj_t BgL_arg1506z00_1005;
BgL_arg1506z00_1005 = 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BNIL); 
BgL_arg1505z00_1004 = 
MAKE_YOUNG_PAIR(
BINT(((long)2)), BgL_arg1506z00_1005); } 
BgL_list1500z00_1003 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1505z00_1004); } 
BgL_x1z00_1002 = BgL_list1500z00_1003; } 
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_x2z00_1006;
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_arg1499z00_1007;
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_pairz00_1008;
if(
PAIRP(BgL_x1z00_1002))
{ /* recette/testsrfi117.scm 10 */
BgL_pairz00_1008 = BgL_x1z00_1002; }  else 
{ 
obj_t BgL_auxz00_1956;
BgL_auxz00_1956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)240)), BGl_string2067z00zztestsrfi117z00, BGl_string2035z00zztestsrfi117z00, BgL_x1z00_1002); 
FAILURE(BgL_auxz00_1956,BFALSE,BFALSE);} 
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_pairz00_1010;
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_aux1939z00_1011;
BgL_aux1939z00_1011 = 
CDR(BgL_pairz00_1008); 
if(
PAIRP(BgL_aux1939z00_1011))
{ /* recette/testsrfi117.scm 10 */
BgL_pairz00_1010 = BgL_aux1939z00_1011; }  else 
{ 
obj_t BgL_auxz00_1963;
BgL_auxz00_1963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)234)), BGl_string2067z00zztestsrfi117z00, BGl_string2035z00zztestsrfi117z00, BgL_aux1939z00_1011); 
FAILURE(BgL_auxz00_1963,BFALSE,BFALSE);} } 
BgL_arg1499z00_1007 = 
CDR(BgL_pairz00_1010); } } 
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_funz00_1012;
{ /* recette/testsrfi117.scm 10 */
obj_t BgL_aux1941z00_1013;
BgL_aux1941z00_1013 = BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1941z00_1013))
{ /* recette/testsrfi117.scm 10 */
BgL_funz00_1012 = BgL_aux1941z00_1013; }  else 
{ 
obj_t BgL_auxz00_1970;
BgL_auxz00_1970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)214)), BGl_string2067z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1941z00_1013); 
FAILURE(BgL_auxz00_1970,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1012, ((long)2)))
{ /* recette/testsrfi117.scm 10 */
BgL_x2z00_1006 = 
PROCEDURE_ENTRY(BgL_funz00_1012)(BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20, BgL_x1z00_1002, BgL_arg1499z00_1007, BEOA); }  else 
{ /* recette/testsrfi117.scm 10 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2069z00zztestsrfi117z00,BgL_funz00_1012);} } } 
{ /* recette/testsrfi117.scm 11 */
obj_t BgL_yz00_1014;
{ /* recette/testsrfi117.scm 11 */
obj_t BgL_list1486z00_1015;
{ /* recette/testsrfi117.scm 11 */
obj_t BgL_arg1493z00_1016;
BgL_arg1493z00_1016 = 
MAKE_YOUNG_PAIR(
BINT(((long)5)), BNIL); 
BgL_list1486z00_1015 = 
MAKE_YOUNG_PAIR(
BINT(((long)4)), BgL_arg1493z00_1016); } 
BgL_yz00_1014 = 
BGl_listzd2queuezd2zzsrfi117zf2listzd2queuesz20(BgL_list1486z00_1015); } 
{ /* recette/testsrfi117.scm 12 */
obj_t BgL_za7za7_1017;
{ /* recette/testsrfi117.scm 12 */
obj_t BgL_list1474z00_1018;
{ /* recette/testsrfi117.scm 12 */
obj_t BgL_arg1484z00_1019;
BgL_arg1484z00_1019 = 
MAKE_YOUNG_PAIR(BgL_yz00_1014, BNIL); 
BgL_list1474z00_1018 = 
MAKE_YOUNG_PAIR(BgL_xz00_998, BgL_arg1484z00_1019); } 
BgL_za7za7_1017 = 
BGl_listzd2queuezd2appendz00zzsrfi117zf2listzd2queuesz20(BgL_list1474z00_1018); } 
{ /* recette/testsrfi117.scm 13 */
obj_t BgL_za72za7_1020;
{ /* recette/testsrfi117.scm 13 */
obj_t BgL_arg1390z00_1021;obj_t BgL_arg1472z00_1022;
BgL_arg1390z00_1021 = 
BGl_listzd2queuezd2copyz00zzsrfi117zf2listzd2queuesz20(BgL_xz00_998); 
BgL_arg1472z00_1022 = 
BGl_listzd2queuezd2copyz00zzsrfi117zf2listzd2queuesz20(BgL_yz00_1014); 
{ /* recette/testsrfi117.scm 13 */
obj_t BgL_funz00_1023;
{ /* recette/testsrfi117.scm 13 */
obj_t BgL_aux1945z00_1024;
BgL_aux1945z00_1024 = BGl_listzd2queuezd2appendz12z12zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1945z00_1024))
{ /* recette/testsrfi117.scm 13 */
BgL_funz00_1023 = BgL_aux1945z00_1024; }  else 
{ 
obj_t BgL_auxz00_1994;
BgL_auxz00_1994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)338)), BGl_string2067z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1945z00_1024); 
FAILURE(BgL_auxz00_1994,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1023, ((long)2)))
{ /* recette/testsrfi117.scm 13 */
BgL_za72za7_1020 = 
PROCEDURE_ENTRY(BgL_funz00_1023)(BGl_listzd2queuezd2appendz12z12zzsrfi117zf2listzd2queuesz20, BgL_arg1390z00_1021, BgL_arg1472z00_1022, BEOA); }  else 
{ /* recette/testsrfi117.scm 13 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2074z00zztestsrfi117z00,BgL_funz00_1023);} } } 
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_rz00_1025;obj_t BgL_vz00_1026;
BgL_rz00_1025 = BGl_list2081z00zztestsrfi117z00; 
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_arg1089z00_1027;
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_funz00_1028;
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_aux1949z00_1029;
BgL_aux1949z00_1029 = BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20; 
if(
PROCEDUREP(BgL_aux1949z00_1029))
{ /* recette/testsrfi117.scm 14 */
BgL_funz00_1028 = BgL_aux1949z00_1029; }  else 
{ 
obj_t BgL_auxz00_2008;
BgL_auxz00_2008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)447)), BGl_string2067z00zztestsrfi117z00, BGl_string2000z00zztestsrfi117z00, BgL_aux1949z00_1029); 
FAILURE(BgL_auxz00_2008,BFALSE,BFALSE);} } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1028, ((long)1)))
{ /* recette/testsrfi117.scm 14 */
BgL_arg1089z00_1027 = 
PROCEDURE_ENTRY(BgL_funz00_1028)(BGl_makezd2listzd2queuez00zzsrfi117zf2listzd2queuesz20, BGl_list2081z00zztestsrfi117z00, BEOA); }  else 
{ /* recette/testsrfi117.scm 14 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2082z00zztestsrfi117z00,BgL_funz00_1028);} } 
BgL_vz00_1026 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_arg1089z00_1027); } 
{ /* recette/testsrfi117.scm 14 */
bool_t BgL_test2230z00_2020;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 14 */
BgL_test2230z00_2020 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1025, BgL_vz00_1026, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 14 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2230z00_2020)
{ /* recette/testsrfi117.scm 14 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_arg1081z00_1030;
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_list1082z00_1031;
{ /* recette/testsrfi117.scm 14 */
obj_t BgL_arg1083z00_1032;
BgL_arg1083z00_1032 = 
MAKE_YOUNG_PAIR(BgL_vz00_1026, BNIL); 
BgL_list1082z00_1031 = 
MAKE_YOUNG_PAIR(BgL_rz00_1025, BgL_arg1083z00_1032); } 
BgL_arg1081z00_1030 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1082z00_1031); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1081z00_1030); } } } 
{ /* recette/testsrfi117.scm 15 */
obj_t BgL_rz00_1033;obj_t BgL_vz00_1034;
BgL_rz00_1033 = BGl_list2052z00zztestsrfi117z00; 
BgL_vz00_1034 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_xz00_998); 
{ /* recette/testsrfi117.scm 15 */
bool_t BgL_test2232z00_2035;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 15 */
BgL_test2232z00_2035 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1033, BgL_vz00_1034, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 15 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2232z00_2035)
{ /* recette/testsrfi117.scm 15 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 15 */
obj_t BgL_arg1093z00_1035;
{ /* recette/testsrfi117.scm 15 */
obj_t BgL_list1094z00_1036;
{ /* recette/testsrfi117.scm 15 */
obj_t BgL_arg1095z00_1037;
BgL_arg1095z00_1037 = 
MAKE_YOUNG_PAIR(BgL_vz00_1034, BNIL); 
BgL_list1094z00_1036 = 
MAKE_YOUNG_PAIR(BgL_rz00_1033, BgL_arg1095z00_1037); } 
BgL_arg1093z00_1035 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1094z00_1036); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1093z00_1035); } } } 
{ /* recette/testsrfi117.scm 16 */
obj_t BgL_vz00_1038;
BgL_vz00_1038 = 
BGl_listzd2queuezd2backz00zzsrfi117zf2listzd2queuesz20(BgL_x2z00_1006); 
{ /* recette/testsrfi117.scm 16 */
bool_t BgL_test2234z00_2050;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 16 */
BgL_test2234z00_2050 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, 
BINT(((long)3)), BgL_vz00_1038, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 16 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2234z00_2050)
{ /* recette/testsrfi117.scm 16 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 16 */
obj_t BgL_arg1097z00_1039;
{ /* recette/testsrfi117.scm 16 */
obj_t BgL_list1098z00_1040;
{ /* recette/testsrfi117.scm 16 */
obj_t BgL_arg1100z00_1041;
BgL_arg1100z00_1041 = 
MAKE_YOUNG_PAIR(BgL_vz00_1038, BNIL); 
BgL_list1098z00_1040 = 
MAKE_YOUNG_PAIR(
BINT(((long)3)), BgL_arg1100z00_1041); } 
BgL_arg1097z00_1039 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1098z00_1040); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1097z00_1039); } } } 
{ /* recette/testsrfi117.scm 17 */
bool_t BgL_rz00_1042;
BgL_rz00_1042 = 
BGl_isazf3zf3zz__objectz00(BgL_yz00_1014, BGl_zc3listzd2queueze3zf2zzsrfi117zf2listzd2queuesz20); 
{ /* recette/testsrfi117.scm 17 */
bool_t BgL_test2236z00_2067;
if(
PROCEDURE_CORRECT_ARITYP(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 17 */
BgL_test2236z00_2067 = 
CBOOL(
PROCEDURE_ENTRY(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, 
BBOOL(BgL_rz00_1042), BTRUE, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 17 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2236z00_2067)
{ /* recette/testsrfi117.scm 17 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 17 */
obj_t BgL_arg1103z00_1043;
{ /* recette/testsrfi117.scm 17 */
obj_t BgL_list1104z00_1044;
{ /* recette/testsrfi117.scm 17 */
obj_t BgL_arg1108z00_1045;
BgL_arg1108z00_1045 = 
MAKE_YOUNG_PAIR(BTRUE, BNIL); 
BgL_list1104z00_1044 = 
MAKE_YOUNG_PAIR(
BBOOL(BgL_rz00_1042), BgL_arg1108z00_1045); } 
BgL_arg1103z00_1043 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1104z00_1044); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1103z00_1043); } } } 
{ /* recette/testsrfi117.scm 18 */
obj_t BgL_rz00_1046;obj_t BgL_vz00_1047;
BgL_rz00_1046 = BGl_list2086z00zztestsrfi117z00; 
BgL_vz00_1047 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017); 
{ /* recette/testsrfi117.scm 18 */
bool_t BgL_test2238z00_2084;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 18 */
BgL_test2238z00_2084 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1046, BgL_vz00_1047, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 18 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2238z00_2084)
{ /* recette/testsrfi117.scm 18 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 18 */
obj_t BgL_arg1110z00_1048;
{ /* recette/testsrfi117.scm 18 */
obj_t BgL_list1111z00_1049;
{ /* recette/testsrfi117.scm 18 */
obj_t BgL_arg1121z00_1050;
BgL_arg1121z00_1050 = 
MAKE_YOUNG_PAIR(BgL_vz00_1047, BNIL); 
BgL_list1111z00_1049 = 
MAKE_YOUNG_PAIR(BgL_rz00_1046, BgL_arg1121z00_1050); } 
BgL_arg1110z00_1048 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1111z00_1049); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1110z00_1048); } } } 
{ /* recette/testsrfi117.scm 19 */
obj_t BgL_rz00_1051;obj_t BgL_vz00_1052;
BgL_rz00_1051 = BGl_list2086z00zztestsrfi117z00; 
BgL_vz00_1052 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_za72za7_1020); 
{ /* recette/testsrfi117.scm 19 */
bool_t BgL_test2240z00_2099;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 19 */
BgL_test2240z00_2099 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1051, BgL_vz00_1052, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 19 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2240z00_2099)
{ /* recette/testsrfi117.scm 19 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 19 */
obj_t BgL_arg1123z00_1053;
{ /* recette/testsrfi117.scm 19 */
obj_t BgL_list1124z00_1054;
{ /* recette/testsrfi117.scm 19 */
obj_t BgL_arg1127z00_1055;
BgL_arg1127z00_1055 = 
MAKE_YOUNG_PAIR(BgL_vz00_1052, BNIL); 
BgL_list1124z00_1054 = 
MAKE_YOUNG_PAIR(BgL_rz00_1051, BgL_arg1127z00_1055); } 
BgL_arg1123z00_1053 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1124z00_1054); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1123z00_1053); } } } 
{ /* recette/testsrfi117.scm 20 */
obj_t BgL_vz00_1056;
BgL_vz00_1056 = 
BGl_listzd2queuezd2frontz00zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017); 
{ /* recette/testsrfi117.scm 20 */
bool_t BgL_test2242z00_2114;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 20 */
BgL_test2242z00_2114 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, 
BINT(((long)1)), BgL_vz00_1056, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 20 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2242z00_2114)
{ /* recette/testsrfi117.scm 20 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 20 */
obj_t BgL_arg1130z00_1057;
{ /* recette/testsrfi117.scm 20 */
obj_t BgL_list1131z00_1058;
{ /* recette/testsrfi117.scm 20 */
obj_t BgL_arg1132z00_1059;
BgL_arg1132z00_1059 = 
MAKE_YOUNG_PAIR(BgL_vz00_1056, BNIL); 
BgL_list1131z00_1058 = 
MAKE_YOUNG_PAIR(
BINT(((long)1)), BgL_arg1132z00_1059); } 
BgL_arg1130z00_1057 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1131z00_1058); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1130z00_1057); } } } 
{ /* recette/testsrfi117.scm 21 */
obj_t BgL_vz00_1060;
BgL_vz00_1060 = 
BGl_listzd2queuezd2backz00zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017); 
{ /* recette/testsrfi117.scm 21 */
bool_t BgL_test2244z00_2131;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 21 */
BgL_test2244z00_2131 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, 
BINT(((long)5)), BgL_vz00_1060, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 21 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2244z00_2131)
{ /* recette/testsrfi117.scm 21 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 21 */
obj_t BgL_arg1141z00_1061;
{ /* recette/testsrfi117.scm 21 */
obj_t BgL_list1142z00_1062;
{ /* recette/testsrfi117.scm 21 */
obj_t BgL_arg1146z00_1063;
BgL_arg1146z00_1063 = 
MAKE_YOUNG_PAIR(BgL_vz00_1060, BNIL); 
BgL_list1142z00_1062 = 
MAKE_YOUNG_PAIR(
BINT(((long)5)), BgL_arg1146z00_1063); } 
BgL_arg1141z00_1061 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1142z00_1062); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1141z00_1061); } } } 
BGl_listzd2queuezd2removezd2frontz12zc0zzsrfi117zf2listzd2queuesz20(BgL_yz00_1014); 
{ /* recette/testsrfi117.scm 23 */
obj_t BgL_rz00_1064;obj_t BgL_vz00_1065;
BgL_rz00_1064 = BGl_list2087z00zztestsrfi117z00; 
BgL_vz00_1065 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_yz00_1014); 
{ /* recette/testsrfi117.scm 23 */
bool_t BgL_test2246z00_2149;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 23 */
BgL_test2246z00_2149 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1064, BgL_vz00_1065, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 23 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2246z00_2149)
{ /* recette/testsrfi117.scm 23 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 23 */
obj_t BgL_arg1148z00_1066;
{ /* recette/testsrfi117.scm 23 */
obj_t BgL_list1149z00_1067;
{ /* recette/testsrfi117.scm 23 */
obj_t BgL_arg1152z00_1068;
BgL_arg1152z00_1068 = 
MAKE_YOUNG_PAIR(BgL_vz00_1065, BNIL); 
BgL_list1149z00_1067 = 
MAKE_YOUNG_PAIR(BgL_rz00_1064, BgL_arg1152z00_1068); } 
BgL_arg1148z00_1066 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1149z00_1067); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1148z00_1066); } } } 
BGl_listzd2queuezd2removezd2backz12zc0zzsrfi117zf2listzd2queuesz20(BgL_yz00_1014); 
{ /* recette/testsrfi117.scm 25 */
obj_t BgL_rz00_1069;
BgL_rz00_1069 = 
BGl_listzd2queuezd2emptyzf3zf3zzsrfi117zf2listzd2queuesz20(BgL_yz00_1014); 
{ /* recette/testsrfi117.scm 25 */
bool_t BgL_test2248z00_2165;
if(
PROCEDURE_CORRECT_ARITYP(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 25 */
BgL_test2248z00_2165 = 
CBOOL(
PROCEDURE_ENTRY(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1069, BTRUE, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 25 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2248z00_2165)
{ /* recette/testsrfi117.scm 25 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 25 */
obj_t BgL_arg1168z00_1070;
{ /* recette/testsrfi117.scm 25 */
obj_t BgL_list1169z00_1071;
{ /* recette/testsrfi117.scm 25 */
obj_t BgL_arg1171z00_1072;
BgL_arg1171z00_1072 = 
MAKE_YOUNG_PAIR(BTRUE, BNIL); 
BgL_list1169z00_1071 = 
MAKE_YOUNG_PAIR(BgL_rz00_1069, BgL_arg1171z00_1072); } 
BgL_arg1168z00_1070 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1169z00_1071); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1168z00_1070); } } } 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_res1043z00_1073;
BgL_res1043z00_1073 = 
MAKE_CELL(BUNSPEC); 
if(
CBOOL(
BGl_zc3z04exitza31184ze3ze70z60zztestsrfi117z00(BgL_yz00_1014, BgL_res1043z00_1073)))
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_ez00_1074;
BgL_ez00_1074 = 
CELL_REF(BgL_res1043z00_1073); 
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_1074, BGl_z62errorz62zz__objectz00))
{ /* recette/testsrfi117.scm 26 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_arg1201z00_1075;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_arg1207z00_1076;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_zc3z04anonymousza31210ze3z87_1077;
BgL_zc3z04anonymousza31210ze3z87_1077 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31210ze3ze5zztestsrfi117z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31210ze3z87_1077, 
(int)(((long)0)), BgL_ez00_1074); 
BgL_arg1207z00_1076 = 
BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31210ze3z87_1077); } 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_list1208z00_1078;
BgL_list1208z00_1078 = 
MAKE_YOUNG_PAIR(BgL_arg1207z00_1076, BNIL); 
BgL_arg1201z00_1075 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2088z00zztestsrfi117z00, BgL_list1208z00_1078); } } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1201z00_1075); } }  else 
{ /* recette/testsrfi117.scm 26 */
CELL_REF(BgL_res1043z00_1073); } } 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_res1055z00_1079;
BgL_res1055z00_1079 = 
MAKE_CELL(BUNSPEC); 
if(
CBOOL(
BGl_zc3z04exitza31238ze3ze70z60zztestsrfi117z00(BgL_yz00_1014, BgL_res1055z00_1079)))
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_ez00_1080;
BgL_ez00_1080 = 
CELL_REF(BgL_res1055z00_1079); 
if(
BGl_isazf3zf3zz__objectz00(BgL_ez00_1080, BGl_z62errorz62zz__objectz00))
{ /* recette/testsrfi117.scm 27 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_arg1287z00_1081;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_arg1288z00_1082;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_zc3z04anonymousza31292ze3z87_1083;
BgL_zc3z04anonymousza31292ze3z87_1083 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31292ze3ze5zztestsrfi117z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31292ze3z87_1083, 
(int)(((long)0)), BgL_ez00_1080); 
BgL_arg1288z00_1082 = 
BGl_withzd2errorzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31292ze3z87_1083); } 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_list1289z00_1084;
BgL_list1289z00_1084 = 
MAKE_YOUNG_PAIR(BgL_arg1288z00_1082, BNIL); 
BgL_arg1287z00_1081 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2088z00zztestsrfi117z00, BgL_list1289z00_1084); } } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1287z00_1081); } }  else 
{ /* recette/testsrfi117.scm 27 */
CELL_REF(BgL_res1055z00_1079); } } 
{ /* recette/testsrfi117.scm 28 */
obj_t BgL_rz00_1085;obj_t BgL_vz00_1086;
BgL_rz00_1085 = BGl_list2086z00zztestsrfi117z00; 
BgL_vz00_1086 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017); 
{ /* recette/testsrfi117.scm 28 */
bool_t BgL_test2254z00_2208;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 28 */
BgL_test2254z00_2208 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1085, BgL_vz00_1086, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 28 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2254z00_2208)
{ /* recette/testsrfi117.scm 28 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 28 */
obj_t BgL_arg1294z00_1087;
{ /* recette/testsrfi117.scm 28 */
obj_t BgL_list1295z00_1088;
{ /* recette/testsrfi117.scm 28 */
obj_t BgL_arg1297z00_1089;
BgL_arg1297z00_1089 = 
MAKE_YOUNG_PAIR(BgL_vz00_1086, BNIL); 
BgL_list1295z00_1088 = 
MAKE_YOUNG_PAIR(BgL_rz00_1085, BgL_arg1297z00_1089); } 
BgL_arg1294z00_1087 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1295z00_1088); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1294z00_1087); } } } 
{ /* recette/testsrfi117.scm 29 */
obj_t BgL_rz00_1090;obj_t BgL_vz00_1091;
BgL_rz00_1090 = BGl_list2086z00zztestsrfi117z00; 
BgL_vz00_1091 = 
BGl_listzd2queuezd2removezd2allz12zc0zzsrfi117zf2listzd2queuesz20(BgL_za72za7_1020); 
{ /* recette/testsrfi117.scm 29 */
bool_t BgL_test2256z00_2223;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 29 */
BgL_test2256z00_2223 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1090, BgL_vz00_1091, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 29 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2256z00_2223)
{ /* recette/testsrfi117.scm 29 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 29 */
obj_t BgL_arg1300z00_1092;
{ /* recette/testsrfi117.scm 29 */
obj_t BgL_list1301z00_1093;
{ /* recette/testsrfi117.scm 29 */
obj_t BgL_arg1302z00_1094;
BgL_arg1302z00_1094 = 
MAKE_YOUNG_PAIR(BgL_vz00_1091, BNIL); 
BgL_list1301z00_1093 = 
MAKE_YOUNG_PAIR(BgL_rz00_1090, BgL_arg1302z00_1094); } 
BgL_arg1300z00_1092 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1301z00_1093); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1300z00_1092); } } } 
{ /* recette/testsrfi117.scm 30 */
obj_t BgL_rz00_1095;
BgL_rz00_1095 = 
BGl_listzd2queuezd2emptyzf3zf3zzsrfi117zf2listzd2queuesz20(BgL_za72za7_1020); 
{ /* recette/testsrfi117.scm 30 */
bool_t BgL_test2258z00_2238;
if(
PROCEDURE_CORRECT_ARITYP(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 30 */
BgL_test2258z00_2238 = 
CBOOL(
PROCEDURE_ENTRY(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1095, BTRUE, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 30 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2258z00_2238)
{ /* recette/testsrfi117.scm 30 */BTRUE; }  else 
{ /* recette/testsrfi117.scm 30 */
obj_t BgL_arg1313z00_1096;
{ /* recette/testsrfi117.scm 30 */
obj_t BgL_list1314z00_1097;
{ /* recette/testsrfi117.scm 30 */
obj_t BgL_arg1315z00_1098;
BgL_arg1315z00_1098 = 
MAKE_YOUNG_PAIR(BTRUE, BNIL); 
BgL_list1314z00_1097 = 
MAKE_YOUNG_PAIR(BgL_rz00_1095, BgL_arg1315z00_1098); } 
BgL_arg1313z00_1096 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1314z00_1097); } 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1313z00_1096); } } } 
BGl_listzd2queuezd2removezd2allz12zc0zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017); 
BGl_listzd2queuezd2addzd2frontz12zc0zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017, 
BINT(((long)1))); 
BGl_listzd2queuezd2addzd2frontz12zc0zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017, 
BINT(((long)0))); 
BGl_listzd2queuezd2addzd2backz12zc0zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017, 
BINT(((long)2))); 
BGl_listzd2queuezd2addzd2backz12zc0zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017, 
BINT(((long)3))); 
{ /* recette/testsrfi117.scm 36 */
obj_t BgL_rz00_1099;obj_t BgL_vz00_1100;
BgL_rz00_1099 = BGl_list2089z00zztestsrfi117z00; 
BgL_vz00_1100 = 
BGl_listzd2queuezd2listz00zzsrfi117zf2listzd2queuesz20(BgL_za7za7_1017); 
{ /* recette/testsrfi117.scm 36 */
bool_t BgL_test2260z00_2262;
if(
PROCEDURE_CORRECT_ARITYP(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, ((long)2)))
{ /* recette/testsrfi117.scm 36 */
BgL_test2260z00_2262 = 
CBOOL(
PROCEDURE_ENTRY(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00)(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_rz00_1099, BgL_vz00_1100, BEOA))
; }  else 
{ /* recette/testsrfi117.scm 36 */
FAILURE(BGl_string2068z00zztestsrfi117z00,BGl_list2023z00zztestsrfi117z00,BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);} 
if(BgL_test2260z00_2262)
{ /* recette/testsrfi117.scm 36 */
return BTRUE;}  else 
{ /* recette/testsrfi117.scm 36 */
obj_t BgL_arg1347z00_1101;
{ /* recette/testsrfi117.scm 36 */
obj_t BgL_list1348z00_1102;
{ /* recette/testsrfi117.scm 36 */
obj_t BgL_arg1389z00_1103;
BgL_arg1389z00_1103 = 
MAKE_YOUNG_PAIR(BgL_vz00_1100, BNIL); 
BgL_list1348z00_1102 = 
MAKE_YOUNG_PAIR(BgL_rz00_1099, BgL_arg1389z00_1103); } 
BgL_arg1347z00_1101 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2030z00zztestsrfi117z00, BgL_list1348z00_1102); } 
return 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1347z00_1101);} } } } } } } } } } 

}



/* <@exit:1184>~0 */
obj_t BGl_zc3z04exitza31184ze3ze70z60zztestsrfi117z00(obj_t BgL_yz00_669, obj_t BgL_res1043z00_668)
{
{ /* recette/testsrfi117.scm 26 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1049z00_122;
if( SET_EXIT(BgL_an_exit1049z00_122) ) { 
return 
BGL_EXIT_VALUE();
} else {
#if( SIGSETJMP_SAVESIGS == 0 )
  bgl_restore_signal_handlers();
#endif

BgL_an_exit1049z00_122 = 
(void *)jmpbuf; 
{ /* recette/testsrfi117.scm 26 */

PUSH_EXIT(BgL_an_exit1049z00_122, ((long)1)); 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_an_exitd1050z00_123;
BgL_an_exitd1050z00_123 = 
((obj_t)(&exitd)); 
{ /* recette/testsrfi117.scm 26 */
bool_t BgL_res1052z00_126;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_ohs1041z00_127;
BgL_ohs1041z00_127 = 
BGL_ERROR_HANDLER_GET(); 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_exitd1046z00_128;
BgL_exitd1046z00_128 = 
((obj_t)(&exitd)); 
{ 
obj_t BgL_zc3z04anonymousza31198ze3z87_618;
BgL_zc3z04anonymousza31198ze3z87_618 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31198ze3ze5zztestsrfi117z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31198ze3z87_618, 
(int)(((long)0)), BgL_ohs1041z00_127); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1046z00_128, BgL_zc3z04anonymousza31198ze3z87_618); 
{ /* recette/testsrfi117.scm 26 */
bool_t BgL_tmp1048z00_130;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_arg1193z00_131;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_zc3z04anonymousza31195ze3z87_619;
BgL_zc3z04anonymousza31195ze3z87_619 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31195ze3ze5zztestsrfi117z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31195ze3z87_619, 
(int)(((long)0)), 
((obj_t)BgL_res1043z00_668)); 
PROCEDURE_SET(BgL_zc3z04anonymousza31195ze3z87_619, 
(int)(((long)1)), BgL_an_exitd1050z00_123); 
BgL_arg1193z00_131 = 
MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31195ze3z87_619, BgL_ohs1041z00_127); } 
BGL_ERROR_HANDLER_SET(BgL_arg1193z00_131); BUNSPEC; } 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_auxz00_643;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_resz00_136;
BgL_resz00_136 = 
BGl_listzd2queuezd2removezd2frontz12zc0zzsrfi117zf2listzd2queuesz20(BgL_yz00_669); 
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_arg1196z00_137;
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_list1197z00_139;
BgL_list1197z00_139 = 
MAKE_YOUNG_PAIR(BGl_z62errorz62zz__objectz00, BNIL); 
BgL_arg1196z00_137 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2090z00zztestsrfi117z00, BgL_list1197z00_139); } 
BgL_auxz00_643 = 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1196z00_137); } } 
CELL_SET(BgL_res1043z00_668, BgL_auxz00_643); } 
BgL_tmp1048z00_130 = ((bool_t)0); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1046z00_128); 
BGL_ERROR_HANDLER_SET(BgL_ohs1041z00_127); BUNSPEC; 
BgL_res1052z00_126 = BgL_tmp1048z00_130; } } } } 
POP_EXIT(); 
return 
BBOOL(BgL_res1052z00_126);} } } 
} } 

}



/* <@exit:1238>~0 */
obj_t BGl_zc3z04exitza31238ze3ze70z60zztestsrfi117z00(obj_t BgL_yz00_671, obj_t BgL_res1055z00_670)
{
{ /* recette/testsrfi117.scm 27 */
jmp_buf_t jmpbuf; 
void * BgL_an_exit1061z00_178;
if( SET_EXIT(BgL_an_exit1061z00_178) ) { 
return 
BGL_EXIT_VALUE();
} else {
#if( SIGSETJMP_SAVESIGS == 0 )
  bgl_restore_signal_handlers();
#endif

BgL_an_exit1061z00_178 = 
(void *)jmpbuf; 
{ /* recette/testsrfi117.scm 27 */

PUSH_EXIT(BgL_an_exit1061z00_178, ((long)1)); 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_an_exitd1062z00_179;
BgL_an_exitd1062z00_179 = 
((obj_t)(&exitd)); 
{ /* recette/testsrfi117.scm 27 */
bool_t BgL_res1064z00_182;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_ohs1053z00_183;
BgL_ohs1053z00_183 = 
BGL_ERROR_HANDLER_GET(); 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_exitd1058z00_184;
BgL_exitd1058z00_184 = 
((obj_t)(&exitd)); 
{ 
obj_t BgL_zc3z04anonymousza31283ze3z87_616;
BgL_zc3z04anonymousza31283ze3z87_616 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31283ze3ze5zztestsrfi117z00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31283ze3z87_616, 
(int)(((long)0)), BgL_ohs1053z00_183); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1058z00_184, BgL_zc3z04anonymousza31283ze3z87_616); 
{ /* recette/testsrfi117.scm 27 */
bool_t BgL_tmp1060z00_186;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_arg1264z00_187;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_zc3z04anonymousza31279ze3z87_617;
BgL_zc3z04anonymousza31279ze3z87_617 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31279ze3ze5zztestsrfi117z00, 
(int)(((long)1)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31279ze3z87_617, 
(int)(((long)0)), 
((obj_t)BgL_res1055z00_670)); 
PROCEDURE_SET(BgL_zc3z04anonymousza31279ze3z87_617, 
(int)(((long)1)), BgL_an_exitd1062z00_179); 
BgL_arg1264z00_187 = 
MAKE_YOUNG_PAIR(BgL_zc3z04anonymousza31279ze3z87_617, BgL_ohs1053z00_183); } 
BGL_ERROR_HANDLER_SET(BgL_arg1264z00_187); BUNSPEC; } 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_auxz00_646;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_resz00_192;
BgL_resz00_192 = 
BGl_listzd2queuezd2removezd2backz12zc0zzsrfi117zf2listzd2queuesz20(BgL_yz00_671); 
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_arg1281z00_193;
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_list1282z00_195;
BgL_list1282z00_195 = 
MAKE_YOUNG_PAIR(BGl_z62errorz62zz__objectz00, BNIL); 
BgL_arg1281z00_193 = 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2090z00zztestsrfi117z00, BgL_list1282z00_195); } 
BgL_auxz00_646 = 
BGl_raisezd2assertionzd2failurez00zzbtestzd2simplezd2testz00(BgL_arg1281z00_193); } } 
CELL_SET(BgL_res1055z00_670, BgL_auxz00_646); } 
BgL_tmp1060z00_186 = ((bool_t)0); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1058z00_184); 
BGL_ERROR_HANDLER_SET(BgL_ohs1053z00_183); BUNSPEC; 
BgL_res1064z00_182 = BgL_tmp1060z00_186; } } } } 
POP_EXIT(); 
return 
BBOOL(BgL_res1064z00_182);} } } 
} } 

}



/* &<@anonymous:1279> */
obj_t BGl_z62zc3z04anonymousza31279ze3ze5zztestsrfi117z00(obj_t BgL_envz00_648, obj_t BgL_ez00_651)
{
{ /* recette/testsrfi117.scm 27 */
{ /* recette/testsrfi117.scm 27 */
obj_t BgL_res1055z00_649;obj_t BgL_an_exitd1062z00_650;
BgL_res1055z00_649 = 
PROCEDURE_REF(BgL_envz00_648, 
(int)(((long)0))); 
BgL_an_exitd1062z00_650 = 
PROCEDURE_REF(BgL_envz00_648, 
(int)(((long)1))); 
CELL_SET(BgL_res1055z00_649, BgL_ez00_651); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1062z00_650, BTRUE);} } 

}



/* &<@anonymous:1283> */
obj_t BGl_z62zc3z04anonymousza31283ze3ze5zztestsrfi117z00(obj_t BgL_envz00_653)
{
{ /* recette/testsrfi117.scm 27 */
{ 
obj_t BgL_ohs1053z00_654;
BgL_ohs1053z00_654 = 
PROCEDURE_REF(BgL_envz00_653, 
(int)(((long)0))); 
BGL_ERROR_HANDLER_SET(BgL_ohs1053z00_654); 
return BUNSPEC;} } 

}



/* &<@anonymous:1292> */
obj_t BGl_z62zc3z04anonymousza31292ze3ze5zztestsrfi117z00(obj_t BgL_envz00_655)
{
{ /* recette/testsrfi117.scm 27 */
return 
BGl_errorzd2notifyzd2zz__errorz00(
PROCEDURE_REF(BgL_envz00_655, 
(int)(((long)0))));} 

}



/* &<@anonymous:1195> */
obj_t BGl_z62zc3z04anonymousza31195ze3ze5zztestsrfi117z00(obj_t BgL_envz00_657, obj_t BgL_ez00_660)
{
{ /* recette/testsrfi117.scm 26 */
{ /* recette/testsrfi117.scm 26 */
obj_t BgL_res1043z00_658;obj_t BgL_an_exitd1050z00_659;
BgL_res1043z00_658 = 
PROCEDURE_REF(BgL_envz00_657, 
(int)(((long)0))); 
BgL_an_exitd1050z00_659 = 
PROCEDURE_REF(BgL_envz00_657, 
(int)(((long)1))); 
CELL_SET(BgL_res1043z00_658, BgL_ez00_660); 
return 
BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1050z00_659, BTRUE);} } 

}



/* &<@anonymous:1198> */
obj_t BGl_z62zc3z04anonymousza31198ze3ze5zztestsrfi117z00(obj_t BgL_envz00_662)
{
{ /* recette/testsrfi117.scm 26 */
{ 
obj_t BgL_ohs1041z00_663;
BgL_ohs1041z00_663 = 
PROCEDURE_REF(BgL_envz00_662, 
(int)(((long)0))); 
BGL_ERROR_HANDLER_SET(BgL_ohs1041z00_663); 
return BUNSPEC;} } 

}



/* &<@anonymous:1210> */
obj_t BGl_z62zc3z04anonymousza31210ze3ze5zztestsrfi117z00(obj_t BgL_envz00_664)
{
{ /* recette/testsrfi117.scm 26 */
return 
BGl_errorzd2notifyzd2zz__errorz00(
PROCEDURE_REF(BgL_envz00_664, 
(int)(((long)0))));} 

}



/* main */
BGL_EXPORTED_DEF obj_t BGl_mainz00zztestsrfi117z00(obj_t BgL_argsz00_3)
{
{ /* recette/testsrfi117.scm 95 */
{ /* recette/testsrfi117.scm 96 */
BgL_terminalzd2testzd2runnerz00_bglt BgL_trz00_589;
{ /* recette/testsrfi117.scm 96 */
BgL_terminalzd2testzd2runnerz00_bglt BgL_new1076z00_590;
{ /* recette/testsrfi117.scm 96 */
BgL_terminalzd2testzd2runnerz00_bglt BgL_new1075z00_591;
BgL_new1075z00_591 = 
((BgL_terminalzd2testzd2runnerz00_bglt)BOBJECT( GC_MALLOC( sizeof(struct BgL_terminalzd2testzd2runnerz00_bgl) ))); 
{ /* recette/testsrfi117.scm 96 */
long BgL_arg1789z00_592;
{ /* recette/testsrfi117.scm 96 */
long BgL_res1806z00_595;
BgL_res1806z00_595 = 
BGL_CLASS_INDEX(BGl_terminalzd2testzd2runnerz00zzbtestzd2terminalzd2testzd2runnerzd2); 
BgL_arg1789z00_592 = BgL_res1806z00_595; } 
BGL_OBJECT_CLASS_NUM_SET(
((BgL_objectz00_bglt)BgL_new1075z00_591), BgL_arg1789z00_592); } 
BgL_new1076z00_590 = BgL_new1075z00_591; } 
((((BgL_terminalzd2testzd2runnerz00_bglt)COBJECT(BgL_new1076z00_590))->BgL_suitez00)=((obj_t)
((obj_t)BGl_srfi117zd2testszd2zztestsrfi117z00)),BUNSPEC); 
BgL_trz00_589 = BgL_new1076z00_590; } 
if(
CBOOL(
BGl_testzd2runnerzd2executez00zzbtestzd2testzd2runnerz00(
((BgL_testzd2runnerzd2_bglt)BgL_trz00_589), ((bool_t)1))))
{ /* recette/testsrfi117.scm 97 */
return 
BINT(((long)0));}  else 
{ /* recette/testsrfi117.scm 97 */
return 
BINT(((long)-1));} } } 

}



/* &main */
obj_t BGl_z62mainz62zztestsrfi117z00(obj_t BgL_envz00_666, obj_t BgL_argsz00_667)
{
{ /* recette/testsrfi117.scm 95 */
{ /* recette/testsrfi117.scm 96 */
obj_t BgL_auxz00_2366;
if(
PAIRP(BgL_argsz00_667))
{ /* recette/testsrfi117.scm 96 */
BgL_auxz00_2366 = BgL_argsz00_667
; }  else 
{ 
obj_t BgL_auxz00_2369;
BgL_auxz00_2369 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1998z00zztestsrfi117z00, 
BINT(((long)3832)), BGl_string2091z00zztestsrfi117z00, BGl_string2035z00zztestsrfi117z00, BgL_argsz00_667); 
FAILURE(BgL_auxz00_2369,BFALSE,BFALSE);} 
return 
BGl_mainz00zztestsrfi117z00(BgL_auxz00_2366);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zztestsrfi117z00()
{
{ /* recette/testsrfi117.scm 1 */
return BUNSPEC;} 

}

#ifdef __cplusplus
}
#endif
