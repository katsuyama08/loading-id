/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * allocator port for call port:eEnt func:func21 param: a
 *   ER             eEnt_func21_a_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func21_a_dealloc( const void* ptr );
 *   ER             eEnt_func21_a_printStatistics( );
 * allocator port for call port:eEnt func:func22 param: sta
 *   ER             eEnt_func22_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func22_sta_dealloc( const void* ptr );
 *   ER             eEnt_func22_sta_printStatistics( );
 * allocator port for call port:eEnt func:func23 param: str
 *   ER             eEnt_func23_str_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func23_str_dealloc( const void* ptr );
 *   ER             eEnt_func23_str_printStatistics( );
 * allocator port for call port:eEnt func:func24 param: msg
 *   ER             eEnt_func24_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func24_msg_dealloc( const void* ptr );
 *   ER             eEnt_func24_msg_printStatistics( );
 * allocator port for call port:eEnt func:func25 param: msg
 *   ER             eEnt_func25_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func25_msg_dealloc( const void* ptr );
 *   ER             eEnt_func25_msg_printStatistics( );
 * allocator port for call port:eEnt func:func26 param: sta
 *   ER             eEnt_func26_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func26_sta_dealloc( const void* ptr );
 *   ER             eEnt_func26_sta_printStatistics( );
 * allocator port for call port:eEnt func:func27 param: array2
 *   ER             eEnt_func27_array2_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func27_array2_dealloc( const void* ptr );
 *   ER             eEnt_func27_array2_printStatistics( );
 * allocator port for call port:eEnt func:func31 param: a
 *   ER             eEnt_func31_a_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func31_a_dealloc( const void* ptr );
 *   ER             eEnt_func31_a_printStatistics( );
 * allocator port for call port:eEnt func:func32 param: sta
 *   ER             eEnt_func32_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func32_sta_dealloc( const void* ptr );
 *   ER             eEnt_func32_sta_printStatistics( );
 * allocator port for call port:eEnt func:func33 param: str
 *   ER             eEnt_func33_str_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func33_str_dealloc( const void* ptr );
 *   ER             eEnt_func33_str_printStatistics( );
 * allocator port for call port:eEnt func:func34 param: msg
 *   ER             eEnt_func34_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func34_msg_dealloc( const void* ptr );
 *   ER             eEnt_func34_msg_printStatistics( );
 * allocator port for call port:eEnt func:func35 param: msg
 *   ER             eEnt_func35_msg_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func35_msg_dealloc( const void* ptr );
 *   ER             eEnt_func35_msg_printStatistics( );
 * allocator port for call port:eEnt func:func36 param: sta
 *   ER             eEnt_func36_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func36_sta_dealloc( const void* ptr );
 *   ER             eEnt_func36_sta_printStatistics( );
 * allocator port for call port:eEnt func:func37 param: sta
 *   ER             eEnt_func37_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func37_sta_dealloc( const void* ptr );
 *   ER             eEnt_func37_sta_printStatistics( );
 * allocator port for call port:eEnt func:func38 param: array2
 *   ER             eEnt_func38_array2_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func38_array2_dealloc( const void* ptr );
 *   ER             eEnt_func38_array2_printStatistics( );
 * allocator port for call port:eEnt func:func39 param: arraySt
 *   ER             eEnt_func39_arraySt_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func39_arraySt_dealloc( const void* ptr );
 *   ER             eEnt_func39_arraySt_printStatistics( );
 * allocator port for call port:eEnt func:func63 param: sp
 *   ER             eEnt_func63_sp_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func63_sp_dealloc( const void* ptr );
 *   ER             eEnt_func63_sp_printStatistics( );
 * allocator port for call port:eEnt func:func64 param: rp
 *   ER             eEnt_func64_rp_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func64_rp_dealloc( const void* ptr );
 *   ER             eEnt_func64_rp_printStatistics( );
 * allocator port for call port:eEnt func:func70 param: sta
 *   ER             eEnt_func70_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func70_sta_dealloc( const void* ptr );
 *   ER             eEnt_func70_sta_printStatistics( );
 * allocator port for call port:eEnt func:func71 param: str
 *   ER             eEnt_func71_str_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func71_str_dealloc( const void* ptr );
 *   ER             eEnt_func71_str_printStatistics( );
 * allocator port for call port:eEnt func:func72 param: sta
 *   ER             eEnt_func72_sta_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func72_sta_dealloc( const void* ptr );
 *   ER             eEnt_func72_sta_printStatistics( );
 * allocator port for call port:eEnt func:func73 param: str
 *   ER             eEnt_func73_str_alloc( int32_t size, void** ptr );
 *   ER             eEnt_func73_str_dealloc( const void* ptr );
 *   ER             eEnt_func73_str_printStatistics( );
 *
 * #[</PREAMBLE>]# */

#include "tSimpleServer_tecsgen.h"
#include <string.h>

#ifndef E_OK
#define	E_OK	0		/* 正常終了 */
#define	E_ID	(-18)	/* 不正ID番号 */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sSimple
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_shutdown
 * name:         eEnt_shutdown
 * global_name:  tSimpleServer_eEnt_shutdown
 * oneway:       true
 * #[</ENTRY_FUNC>]# */
void
eEnt_shutdown(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	}

	/* ここに処理本体を記述します */
	syslog( LOG_INFO, "shutdown tSimpleServer" );
	sleep( 3 );
	eEnt_func21_a_printStatistics();
	exit(0);
}

/* #[<ENTRY_FUNC>]# eEnt_func1
 * name:         eEnt_func1
 * global_name:  tSimpleServer_eEnt_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func1(CELLIDX idx, int32_t inval)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します */
	syslog( LOG_INFO, "func1: %d\n", inval );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func2
 * name:         eEnt_func2
 * global_name:  tSimpleServer_eEnt_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func2(CELLIDX idx, const char_t* str)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します */
	syslog( LOG_INFO, "func2" );
	puts( str );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func3
 * name:         eEnt_func3
 * global_name:  tSimpleServer_eEnt_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func3(CELLIDX idx, const char_t* msg, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します */
	syslog( LOG_INFO, "func3" );
	puts( msg );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func4
 * name:         eEnt_func4
 * global_name:  tSimpleServer_eEnt_func4
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func4(CELLIDX idx, const char_t** msg, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int32_t i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < len; i++ ){
		puts( msg[i] );
		/* msg[i] は NULL 終端されているとは限らないので、このコーディングは不適切 */
		/* string(10) のぎりぎりまで詰め込むテストケースを作る場合には問題が発生する */
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func5
 * name:         eEnt_func5
 * global_name:  tSimpleServer_eEnt_func5
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func5(CELLIDX idx, const STA** sta, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < len; i++ ){
		syslog( LOG_INFO, "sta[%d]->a=%d  sta[%d]->b=%d", i, sta[i]->a, i, sta[i]->b );
		syslog( LOG_INFO, "sta[%d]->len=%d", i, sta[i]->len );
		syslog( LOG_INFO, sta[i]->msg );
	}
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func6
 * name:         eEnt_func6
 * global_name:  tSimpleServer_eEnt_func6
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func6(CELLIDX idx, const int8_t array[64])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, "eEnt_func6" );
	for( i = 0; i < ArraySize; i++ )
		syslog( LOG_INFO, "array[%d]=%d", i, array[i]);

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func7
 * name:         eEnt_func7
 * global_name:  tSimpleServer_eEnt_func7
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func7(CELLIDX idx, const int8_t array2[64][4])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i, j;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < ArraySize; i++ )
		for( j = 0; j < ArraySize2; j++ )
			syslog( LOG_INFO, "array2[%d][%d]=%d", i, j, array2[i][j] );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func8
 * name:         eEnt_func8
 * global_name:  tSimpleServer_eEnt_func8
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func8(CELLIDX idx, const STA arraySt[2])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int		i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < ArraySizeSTA; i++ ){
		syslog( LOG_INFO, "arraySt[%d].a=%d  arraySt[%d].b=%d",
				i, arraySt[i].a, i, arraySt[i].b );
		syslog( LOG_INFO, "arraySt[%d].len=%d", i, arraySt[i].len );
		syslog( LOG_INFO, arraySt[i].msg );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func9
 * name:         eEnt_func9
 * global_name:  tSimpleServer_eEnt_func9
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func9(CELLIDX idx, const STA* arraySt[2])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int		i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < ArraySizeSTA; i++ ){
		syslog( LOG_INFO, "arraySt[%d]->a=%d  arraySt[%d]->b=%d",
				i, arraySt[i]->a, i, arraySt[i]->b );
		syslog( LOG_INFO, "arraySt[%d]->len=%d", i, arraySt[i]->len );
		syslog( LOG_INFO, arraySt[i]->msg );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func10
 * name:         eEnt_func10
 * global_name:  tSimpleServer_eEnt_func10
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func10(CELLIDX idx, int32_t* val)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	*val = 12345;

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func11
 * name:         eEnt_func11
 * global_name:  tSimpleServer_eEnt_func11
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func11(CELLIDX idx, char_t* msg, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	strncpy( msg, "Hello this is func11", len );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func12
 * name:         eEnt_func12
 * global_name:  tSimpleServer_eEnt_func12
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func12(CELLIDX idx, char_t** msg)
{
	ER		ercd = E_OK;
	int_t   i;
	char    *MSG[8] = { "we", "are", "very", "glad", "you", "join", "TECS RPC", "Too long string will be chopped in 32." };

	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	syslog( LOG_INFO, "func12 called" );
	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < 8; i++ )
		strncpy( msg[i], MSG[i], 32 );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func13
 * name:         eEnt_func13
 * global_name:  tSimpleServer_eEnt_func13
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func13(CELLIDX idx, STB* sta, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int32_t  i;

	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < len; i++ ){
		sta[i].a = ( i + 1 ) * 2 - 1;
		sta[i].b = ( i + 1 ) * 2;
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func14
 * name:         eEnt_func14
 * global_name:  tSimpleServer_eEnt_func14
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func14(CELLIDX idx, STB** sta, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < len; i++ ){
		sta[i]->a = i + 100;
		sta[i]->b = - i + 100;
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func15
 * name:         eEnt_func15
 * global_name:  tSimpleServer_eEnt_func15
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func15(CELLIDX idx, int8_t(* array1)[64])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < ArraySize; i++ )
		(*array1)[i] = i*i;

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func16
 * name:         eEnt_func16
 * global_name:  tSimpleServer_eEnt_func16
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func16(CELLIDX idx, int8_t* array, int16_t* sz)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int16_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	*sz = ( *sz > 3 ) ? ( *sz - 3 ) : *sz;
	for( i = 0; i < *sz; i++ )
		array[ i ] = i * i;

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func40
 * name:         eEnt_func40
 * global_name:  tSimpleServer_eEnt_func40
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func40(CELLIDX idx, int32_t* val)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
#define  OUT_VAL  22360679
	syslog( LOG_INFO, "  *val = in:%d/out:%d", *val, OUT_VAL );
	*val = OUT_VAL;

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func41
 * name:         eEnt_func41
 * global_name:  tSimpleServer_eEnt_func41
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func41(CELLIDX idx, char_t* msg, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, msg );
	strncpy( msg, "message is very long & long long long long long long", len );
	msg[len-1] = '\0';

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func42
 * name:         eEnt_func42
 * global_name:  tSimpleServer_eEnt_func42
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func42(CELLIDX idx, char_t** msg)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	//	static  char_t  *MSG[8] = { "Hallo", "this", "is", "nice", "day", "isn't", "it", "?" };
	char_t  *MSG[8] = { "Hallo", "this", "is", "nice", "day", "isn't", "it", "?" };
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < 8; i++ )
		strcpy( msg[i], MSG[i] );
	for( i = 0; i < 8; i++ ){
		printf( "M %d %s\n", i, MSG[i] );
		printf( "m %d %08X %s\n", i, msg[i], msg[i] );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func43
 * name:         eEnt_func43
 * global_name:  tSimpleServer_eEnt_func43
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func43(CELLIDX idx, STA* sta, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < len; i++ ){
		syslog( LOG_INFO, " sta[%d].a=%d, sta[%d].b=%d", i, sta[i].a, i, sta[i].b );
	}

	for( i = 0; i < len; i++ ){
		int32_t		a, b;
		a = sta[i].a;
		b = sta[i].b;
		sta[i].a = b;
		sta[i].b = a;
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func44
 * name:         eEnt_func44
 * global_name:  tSimpleServer_eEnt_func44
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func44(CELLIDX idx, int8_t* array, int32_t* len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func21
 * name:         eEnt_func21
 * global_name:  tSimpleServer_eEnt_func21
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func21(CELLIDX idx, int32_t* a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, "func21 called a=%d", *a );

	EENT_FUNC21_A_DEALLOC( a );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func22
 * name:         eEnt_func22
 * global_name:  tSimpleServer_eEnt_func22
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func22(CELLIDX idx, STA* sta)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, "SimpleServer: eEnt_func22" );
	syslog( LOG_INFO, "  sta->a = %d", sta->a );
	syslog( LOG_INFO, "  sta->b = %d", sta->b );

	EENT_FUNC22_STA_DEALLOC( sta );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func23
 * name:         eEnt_func23
 * global_name:  tSimpleServer_eEnt_func23
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func23(CELLIDX idx, char_t* str)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, "SimpleServer: eEnt_func23" );
	syslog( LOG_INFO, "  str = %s", str );

	EENT_FUNC23_STR_DEALLOC( str );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func24
 * name:         eEnt_func24
 * global_name:  tSimpleServer_eEnt_func24
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func24(CELLIDX idx, char_t* msg, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, "SimpleServer: eEnt_func24" );
	syslog( LOG_INFO, "  msg = %s, len = %d", msg, len );

	EENT_FUNC24_MSG_DEALLOC( msg );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func25
 * name:         eEnt_func25
 * global_name:  tSimpleServer_eEnt_func25
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func25(CELLIDX idx, char_t** msg, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int     i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	for( i = 0; i < len; i++ ){
		puts( msg[i] );
		/* msg[i] は NULL 終端されているとは限らないので、このコーディングは不適切 */
		/* string(10) のぎりぎりまで詰め込むテストケースを作る場合には問題が発生する */
	}

	EENT_FUNC25_MSG_DEALLOC( msg,len );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func26
 * name:         eEnt_func26
 * global_name:  tSimpleServer_eEnt_func26
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func26(CELLIDX idx, STA** sta, int32_t len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, " len=%d", len );
	for( i = 0; i < len; i++ )
		syslog( LOG_INFO, "  sta[%d]->a=%d,   sta[%d]->b=%d", i, sta[i]->a, i, sta[i]->b );

	EENT_FUNC26_STA_DEALLOC( sta, len );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func27
 * name:         eEnt_func27
 * global_name:  tSimpleServer_eEnt_func27
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func27(CELLIDX idx, int8_t(* array2)[64])
{
	ER		ercd = E_OK;
	int_t	i;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	syslog( LOG_INFO, "eEnt_func27" );
	for( i = 0; i < ArraySize; i++ )
		syslog( LOG_INFO, "(*array2)[%d]=%d", i, (*array2)[i] );
	EENT_FUNC27_ARRAY2_DEALLOC( array2 );
	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func31
 * name:         eEnt_func31
 * global_name:  tSimpleServer_eEnt_func31
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func31(CELLIDX idx, int32_t** a)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	eEnt_func31_a_alloc( sizeof(int32_t), (void**) a );
	**a = 271828;

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func32
 * name:         eEnt_func32
 * global_name:  tSimpleServer_eEnt_func32
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func32(CELLIDX idx, STA** sta)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	eEnt_func32_sta_alloc( sizeof(STA), (void**) sta );
	(*sta)->a = 2;
	(*sta)->b = 141421;
#define	FUNC32_MSG	"You have a big chance."
	(*sta)->len = (*sta)->count = sizeof FUNC32_MSG;
	eEnt_func32_sta_alloc( sizeof(FUNC32_MSG), (void**)&(*sta)->msg );
	strcpy( (*sta)->msg, FUNC32_MSG );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func33
 * name:         eEnt_func33
 * global_name:  tSimpleServer_eEnt_func33
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func33(CELLIDX idx, char_t** str)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
#define MY_MSG  "Good morning. It's nice day today."
	eEnt_func33_str_alloc( sizeof(MY_MSG), (void**) str );
	strcpy( *str, MY_MSG );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func34
 * name:         eEnt_func34
 * global_name:  tSimpleServer_eEnt_func34
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func34(CELLIDX idx, char_t** msg, int32_t* len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
#define  FUNC34_MSG		"The temparature & humidity is just confortable."
	*len = sizeof FUNC34_MSG;
	eEnt_func34_msg_alloc( *len, (void **)msg );
	strcpy( *msg, FUNC34_MSG );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func35
 * name:         eEnt_func35
 * global_name:  tSimpleServer_eEnt_func35
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func35(CELLIDX idx, char_t*** msg, int32_t* len, int32_t* msglen)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	static const char_t *MSG[] = { "Today", "is", "2010", "October", "10", "10-10-10" };
	int32_t i;

	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */

	printf( "&i=%08X\n", &i );
	*len = sizeof MSG / sizeof( char_t * );
	*msglen = 9;  // MSG[i] の最大長さ
	syslog( LOG_INFO, "func35: len=%d\n", *len );
	eEnt_func35_msg_alloc( sizeof MSG, (void **)msg );
	for( i = 0; i < *len; i++ ){
		eEnt_func35_msg_alloc( strlen(MSG[i])+1, (void **)&(*msg)[i] );
		strcpy((*msg)[i],MSG[i]);
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func36
 * name:         eEnt_func36
 * global_name:  tSimpleServer_eEnt_func36
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func36(CELLIDX idx, STA** sta, int32_t* len)
{
	ER		ercd = E_OK;
	int_t   i;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

#define N_STA  (5)
	/* ここに処理本体を記述します #_TEFB_# */
	*len = N_STA;
	eEnt_func36_sta_alloc( N_STA * sizeof(STA), (void**)sta );
	for( i = 0; i < N_STA; i++ ){
		(*sta)[i].a = i + 1;
		(*sta)[i].b = - i - 1;
#define	FUNC36_MSG	"have a nice day!"
		(*sta)[i].len = (*sta)[i].count = sizeof FUNC36_MSG;
		eEnt_func36_sta_alloc( sizeof(FUNC36_MSG), (void**)&(*sta)[i].msg );
		strcpy( (*sta)[i].msg, FUNC36_MSG );
	}

	return(ercd);
	// return E_RPC;
}

/* #[<ENTRY_FUNC>]# eEnt_func37
 * name:         eEnt_func37
 * global_name:  tSimpleServer_eEnt_func37
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func37(CELLIDX idx, STA*** sta, int32_t* len)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int_t	i;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
#define STA_LEN	3
#define	FUNC37_MSG	"Welcome to TECS"
	*len = STA_LEN;
	eEnt_func37_sta_alloc( sizeof(STA*)*STA_LEN, (void **)sta );
	for( i = 0; i < STA_LEN; i++ ){
		eEnt_func37_sta_alloc( sizeof(STA), (void **)&(*sta)[i] );
		(*sta)[i]->a = ( i + 1 ) * ( i + 1 );
		(*sta)[i]->b = ( i + 1 ) * ( i + 1 ) * ( i + 1 );
		eEnt_func37_sta_alloc( sizeof FUNC37_MSG, (void **)&(*sta)[i]->msg );
		(*sta)[i]->len = (*sta)[i]->count = sizeof FUNC37_MSG;
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func38
 * name:         eEnt_func38
 * global_name:  tSimpleServer_eEnt_func38
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func38(CELLIDX idx, int8_t(** array2)[64])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func39
 * name:         eEnt_func39
 * global_name:  tSimpleServer_eEnt_func39
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func39(CELLIDX idx, STA*(** arraySt)[2])
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	STA			sta[ArraySizeSTA] = { { 11, 121 }, { 13, 169 } };
	char_t		*msg[ArraySizeSTA] = { "hello!! func39-0", "hello!! func39-1" };
	int		i;

	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	/* ここに処理本体を記述します #_TEFB_# */
	eEnt_func39_arraySt_alloc( sizeof(STA *)*ArraySizeSTA, (void **)arraySt );
	for( i = 0; i < ArraySizeSTA; i++ ){

		eEnt_func39_arraySt_alloc( sizeof(STA ), (void **)&(**arraySt)[i] );
		(**arraySt)[i]->a = sta[i].a;
		(**arraySt)[i]->b = sta[i].b;
		(**arraySt)[i]->len = (**arraySt)[i]->count = strlen( msg[i] ) + 1;
		eEnt_func39_arraySt_alloc( (**arraySt)[i]->len, (void **)&(**arraySt)[i]->msg );
		strncpy( (**arraySt)[i]->msg, msg[i], (**arraySt)[i]->len );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func50
 * name:         eEnt_func50
 * global_name:  tSimpleServer_eEnt_func50
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func50(CELLIDX idx, int_t i, short_t s, long_t l)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	printf( "func50: int_t i=%08X, short_t s=%04X, long_t l=%08X\n", i, (unsigned short)s, l );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func51
 * name:         eEnt_func51
 * global_name:  tSimpleServer_eEnt_func51
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func51(CELLIDX idx, uint_t i, ushort_t s, ulong_t l)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	printf( "func51: uint_t i=%08X, ushort_t s=%04X, ulong_t l=%08X\n", i, s, l );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func52
 * name:         eEnt_func52
 * global_name:  tSimpleServer_eEnt_func52
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func52(CELLIDX idx, int_t* i, short_t* s, long_t* l)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	*i = 0x12345678;
	*s = 0x1234;
	*l = 0x12345678;
	printf( "func52: int_t *i=%08X, short_t *s=%04X, long_t *l=%08X\n", i, s, l );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func53
 * name:         eEnt_func53
 * global_name:  tSimpleServer_eEnt_func53
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func53(CELLIDX idx, uint_t* i, ushort_t* s, ulong_t* l)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	*i = 0x12345678;
	*s = 0x1234;
	*l = 0x12345678;
	printf( "uint_t *i=%08X, ushort_t *s=%04X, ulong_t *l=%08X\n", i, s, l );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func54
 * name:         eEnt_func54
 * global_name:  tSimpleServer_eEnt_func54
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func54(CELLIDX idx, char_t c, schar_t sc, uchar_t uc)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	printf( "char_t c=%02X, schar_t sc=%02X, uchar_t uc=%02X\n", (uint8_t)c, (uint8_t)sc, (uint8_t)uc );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func55
 * name:         eEnt_func55
 * global_name:  tSimpleServer_eEnt_func55
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func55(CELLIDX idx, char_t* c, schar_t* sc, uchar_t* uc)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	*c = 0xab;
	*sc = 0xcd;
	*uc = 0xef;
	printf( "char_t *c=%02X, schar_t *sc=%02X, uchar_t *uc=%02X\n", (uint8_t)*c, (uint8_t)*sc, (uint8_t)*uc );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func56
 * name:         eEnt_func56
 * global_name:  tSimpleServer_eEnt_func56
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func56(CELLIDX idx, intptr_t ip, intptr_t* op)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	*op = 0x12345678;
	printf( "intptr_t ip=%08X, intptr_t *op=%08X\n", ip, *op );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func60
 * name:         eEnt_func60
 * global_name:  tSimpleServer_eEnt_func60
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func60(CELLIDX idx, intptr_t ip, intptr_t* op)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	printf( "[in]ip=%08X\n", ip );
	if( op ){
		*op = 0x87654321;
		printf( "[out]*op=%08X\n", *op );
	} else {
		puts( "[out]op=NULL" );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func61
 * name:         eEnt_func61
 * global_name:  tSimpleServer_eEnt_func61
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func61(CELLIDX idx, const int32_t* ip, intptr_t* op)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( ip ){
		printf( "func61: ip=%08X\n", *ip );
	} else {
		printf( "func61: ip=NULL\n" );
	}
	if( op ){
		*op = 0x22446688;
		printf( "func61: op=%08X\n", *op );
	} else {
		printf( "func61: op=NULL\n" );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func62
 * name:         eEnt_func62
 * global_name:  tSimpleServer_eEnt_func62
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func62(CELLIDX idx, int32_t* iop)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( iop ){
		printf( "func62: [in]*iop=%08X\n", *iop );
		*iop = 0x11335599;
		printf( "func62: [out]*iop=%08X\n", *iop );
	} else {
		printf( "func62: iop=NULL\n" );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func63
 * name:         eEnt_func63
 * global_name:  tSimpleServer_eEnt_func63
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func63(CELLIDX idx, int32_t* sp)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( sp ){
		printf( "func63: [in]*sp=%08X\n", *sp );
		eEnt_func63_sp_dealloc( sp );
	} else {
		printf( "func63: sp=NULL\n" );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func64
 * name:         eEnt_func64
 * global_name:  tSimpleServer_eEnt_func64
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func64(CELLIDX idx, int32_t** rp, bool_t b_zero)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	int32_t	*rp_tmp;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( b_zero ){
		*rp = NULL;
	} else {
		eEnt_func64_rp_alloc( sizeof( **rp ), (void **)&rp_tmp );
		*rp = rp_tmp;
		**rp = 0x22334455;
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func70
 * name:         eEnt_func70
 * global_name:  tSimpleServer_eEnt_func70
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func70(CELLIDX idx, STA* sta)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( sta ){
		eEnt_func70_sta_dealloc( sta->msg );
		eEnt_func70_sta_dealloc( sta );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func71
 * name:         eEnt_func71
 * global_name:  tSimpleServer_eEnt_func71
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func71(CELLIDX idx, char_t* str)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( str ){
		printf( "func71: str='%s'\n", str );
		eEnt_func71_str_dealloc( str );
	} else {
		printf( "func71: str=NULL\n" );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func72
 * name:         eEnt_func72
 * global_name:  tSimpleServer_eEnt_func72
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func72(CELLIDX idx, STA** sta, bool_t b_zero)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( b_zero )
		*sta = NULL;
	else {
		eEnt_func72_sta_alloc( sizeof( STA ), (void **)sta );
		(*sta)->a = 100;
		(*sta)->b = 100;
#define	FUNC72_MSG	"You have a big chance."
		(*sta)->len = (*sta)->count = sizeof FUNC72_MSG;
		eEnt_func72_sta_alloc( sizeof(FUNC72_MSG), (void**)&(*sta)->msg );
		strcpy( (*sta)->msg, FUNC72_MSG );
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func73
 * name:         eEnt_func73
 * global_name:  tSimpleServer_eEnt_func73
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func73(CELLIDX idx, char_t** str, bool_t b_zero)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
	if( ! b_zero ){
#define FUNC73_MSG	"func73 message"
		eEnt_func73_str_alloc( sizeof( FUNC73_MSG ), (void **)str );
		strcpy( *str, FUNC73_MSG );
	} else {
		*str = NULL;
	}

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func80
 * name:         eEnt_func80
 * global_name:  tSimpleServer_eEnt_func80
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func80(CELLIDX idx, float32_t val)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
    printf( "func80: in val=%g\n", val );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func81
 * name:         eEnt_func81
 * global_name:  tSimpleServer_eEnt_func81
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func81(CELLIDX idx, float32_t* val)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
    *val = 1.234;
    printf( "func81: out val=%1.10g\n", *val );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func82
 * name:         eEnt_func82
 * global_name:  tSimpleServer_eEnt_func82
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func82(CELLIDX idx, double64_t val)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
    printf( "func82: in val=%1.10g\n", val );

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEnt_func83
 * name:         eEnt_func83
 * global_name:  tSimpleServer_eEnt_func83
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEnt_func83(CELLIDX idx, double64_t* val)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */
    *val = 3.14159265358979323846;
    printf( "func83: out val=%1.10g\n", *val );

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
