#ifndef _CRC32_CALCULATION_H_INCLUDED_
#define _CRC32_CALCULATION_H_INCLUDED_

#include <stdint.h>

/* 
 * \brief CRC32の計算（ファイル名指定）
 * \param [in] filename ファイル名
 * \param [out] result  CRC32値
 * \return 計算ステータス(0:成功, 負値:失敗)
 */
int32_t CRC32_CalculateByFileName(const char* filename, uint32_t* result);

/* 
 * \brief CRC32の計算（データ列入力）
 * \param [in] data 入力データ列
 * \param [in] num_data 入力データ列サイズ
 * \param [out] result  CRC32値
 * \return 計算ステータス(0:成功, 負値:失敗)
 */
int32_t CRC32_CalculateByData(uint8_t* data, uint64_t num_data, uint32_t* result);


#endif /* _CRC32_CALCULATION_H_INCLUDED_ */
