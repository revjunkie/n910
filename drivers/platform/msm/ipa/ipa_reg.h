/* Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __IPA_REG_H__
#define __IPA_REG_H__

/*
 * IPA's BAM specific registers
 * Used for IPA HW 1.0 only
 */

#define IPA_BAM_REG_BASE_OFST 0x00004000
#define IPA_BAM_CNFG_BITS_OFST 0x7c
#define IPA_BAM_REMAP_SIZE (0x1000)

#define IPA_FILTER_FILTER_EN_BMSK 0x1
#define IPA_FILTER_FILTER_EN_SHFT 0x0
#define IPA_AGGREGATION_SPARE_REG_2_OFST 0x00002094
#define IPA_AGGREGATION_QCNCM_SIG0_SHFT 16
#define IPA_AGGREGATION_QCNCM_SIG1_SHFT 8

#define IPA_AGGREGATION_SPARE_REG_1_OFST 0x00002090
#define IPA_AGGREGATION_SPARE_REG_2_OFST 0x00002094

#define IPA_AGGREGATION_SINGLE_NDP_MSK 0x1
#define IPA_AGGREGATION_SINGLE_NDP_BMSK 0xfffffffe

#define IPA_AGGREGATION_MODE_MSK 0x1
#define IPA_AGGREGATION_MODE_SHFT 31
#define IPA_AGGREGATION_MODE_BMSK 0x7fffffff

#define IPA_AGGREGATION_QCNCM_SIG_BMSK 0xff000000

#define IPA_FILTER_FILTER_EN_BMSK 0x1
#define IPA_FILTER_FILTER_EN_SHFT 0x0

#define IPA_AGGREGATION_HW_TIMER_FIX_MBIM_AGGR_SHFT 2
#define IPA_AGGREGATION_HW_TIMER_FIX_MBIM_AGGR_BMSK 0x4

#define IPA_HEAD_OF_LINE_BLOCK_EN_OFST 0x00000044

/*
 * End of IPA 1.0 Registers
 */


/*
Common Registers
*/
#define IPA_REG_BASE_OFST 0x00020000
#define IPA_COMP_SW_RESET_OFST 0x0000003c

#define IPA_SHARED_MEM_SIZE_OFST_v1_0 0x00000058
#define IPA_SHARED_MEM_SIZE_OFST_v1_1 0x00000050

#define IPA_VERSION_OFST 0x00000034
#define IPA_COMP_HW_VERSION_OFST 0x00000030

#define IPA_ROUTE_OFST_v1_0 0x0000004c
#define IPA_ROUTE_OFST_v1_1 0x00000044

#define IPA_FILTER_OFST_v1_0 0x00000050
#define IPA_FILTER_OFST_v1_1 0x00000048

#define IPA_SHARED_MEM_SIZE_OFST_v1_0 0x00000058
#define IPA_SHARED_MEM_SIZE_OFST_v1_1 0x00000050
#define IPA_SHARED_MEM_SIZE_OFST_v2_0 0x00000050
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_BADDR_BMSK_v2_0 0xffff0000
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_BADDR_SHFT_v2_0 0x10
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_BMSK_v2_0  0xffff
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_SHFT_v2_0  0x0

#define IPA_ENDP_INIT_NAT_N_OFST_v1_0(n) (0x00000080 + 0x4 * (n))
#define IPA_ENDP_INIT_NAT_N_OFST_v1_1(n) (0x000000c0 + 0x4 * (n))

#define IPA_ENDP_INIT_HDR_N_OFST_v1_0(n) (0x000000e0 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_N_OFST_v1_1(n) (0x00000120 + 0x4 * (n))

#define IPA_ENDP_INIT_MODE_N_OFST_v1_0(n) (0x00000140 + 0x4 * (n))
#define IPA_ENDP_INIT_MODE_N_OFST_v1_1(n) (0x00000170 + 0x4 * (n))

#define IPA_ENDP_INIT_AGGR_N_OFST_v1_0(n) (0x000001a0 + 0x4 * (n))
#define IPA_ENDP_INIT_AGGR_N_OFST_v1_1(n) (0x000001c0 + 0x4 * (n))
#define IPA_ENDP_INIT_AGGR_N_OFST_v2_0(n) (0x00000320 + 0x4 * (n))

#define IPA_ENDP_INIT_ROUTE_N_OFST_v1_0(n) (0x00000200 + 0x4 * (n))
#define IPA_ENDP_INIT_ROUTE_N_OFST_v1_1(n) (0x00000220 + 0x4 * (n))
#define IPA_ENDP_INIT_ROUTE_N_OFST_v2_0(n) (0x00000370 + 0x4 * (n))
#define IPA_ENDP_INIT_ROUTE_N_ROUTE_TABLE_INDEX_BMSK 0x1f
#define IPA_ENDP_INIT_ROUTE_N_ROUTE_TABLE_INDEX_SHFT 0x0

#define IPA_ROUTE_OFST_v1_0 0x0000004c
#define IPA_ROUTE_OFST_v1_1 0x00000044

#define IPA_ROUTE_ROUTE_DIS_SHFT 0x0
#define IPA_ROUTE_ROUTE_DIS_BMSK 0x1
#define IPA_ROUTE_ROUTE_DEF_PIPE_SHFT 0x1
#define IPA_ROUTE_ROUTE_DEF_PIPE_BMSK 0x3e
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_SHFT 0x6
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_SHFT 0x7
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_BMSK 0x1ff80
#define IPA_ROUTE_ROUTE_FRAG_DEF_PIPE_BMSK 0x3e0000
#define IPA_ROUTE_ROUTE_FRAG_DEF_PIPE_SHFT 0x11


#define IPA_FILTER_OFST_v1_0 0x00000050
#define IPA_FILTER_OFST_v1_1 0x00000048

#define IPA_SRAM_DIRECT_ACCESS_N_OFST_v1_1(n) (0x00004000 + 0x4 * (n))
#define IPA_SRAM_DIRECT_ACCESS_N_OFST_v2_0(n) (0x00005000 + 0x4 * (n))
#define IPA_SRAM_DIRECT_ACCESS_N_OFST(n) (0x00004000 + 0x4 * (n))
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_BMSK 0x40
#define IPA_ENDP_INIT_NAT_N_NAT_EN_SHFT 0x0
#define IPA_COMP_CFG_OFST 0x00000038

#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_BMSK 0x1f8000
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_SHFT 0xf
#define IPA_ENDP_INIT_AGGR_N_AGGR_TIME_LIMIT_BMSK 0x7c00
#define IPA_ENDP_INIT_AGGR_N_AGGR_TIME_LIMIT_SHFT 0xa
#define IPA_ENDP_INIT_AGGR_N_AGGR_BYTE_LIMIT_BMSK 0x3e0
#define IPA_ENDP_INIT_AGGR_N_AGGR_BYTE_LIMIT_SHFT 0x5
#define IPA_ENDP_INIT_AGGR_N_AGGR_TYPE_BMSK 0x1c
#define IPA_ENDP_INIT_AGGR_N_AGGR_TYPE_SHFT 0x2
#define IPA_ENDP_INIT_AGGR_N_AGGR_EN_BMSK 0x3
#define IPA_ENDP_INIT_AGGR_N_AGGR_EN_SHFT 0x0

#define IPA_ENDP_INIT_MODE_N_OFST_v1_0(n) (0x00000140 + 0x4 * (n))
#define IPA_ENDP_INIT_MODE_N_OFST_v1_1(n) (0x00000170 + 0x4 * (n))
#define IPA_ENDP_INIT_MODE_N_OFST_v2_0(n) (0x000002c0 + 0x4 * (n))
#define IPA_ENDP_INIT_MODE_N_RMSK 0x7f
#define IPA_ENDP_INIT_MODE_N_MAX 19
#define IPA_ENDP_INIT_MODE_N_DEST_PIPE_INDEX_BMSK_v1 0x7c
#define IPA_ENDP_INIT_MODE_N_DEST_PIPE_INDEX_SHFT_v1 0x2
#define IPA_ENDP_INIT_MODE_N_DEST_PIPE_INDEX_BMSK_v2_0 0x1f0
#define IPA_ENDP_INIT_MODE_N_DEST_PIPE_INDEX_SHFT_v2_0 0x4
#define IPA_ENDP_INIT_MODE_N_MODE_BMSK 0x3
#define IPA_ENDP_INIT_MODE_N_MODE_SHFT 0x0

#define IPA_ENDP_INIT_HDR_N_OFST_v1_0(n) (0x000000e0 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_N_OFST_v1_1(n) (0x00000120 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_N_OFST_v2_0(n) (0x00000170 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_N_HDR_LEN_BMSK 0x3f
#define IPA_ENDP_INIT_HDR_N_HDR_LEN_SHFT 0x0
#define IPA_ENDP_INIT_HDR_N_HDR_ADDITIONAL_CONST_LEN_BMSK 0x7e000
#define IPA_ENDP_INIT_HDR_N_HDR_ADDITIONAL_CONST_LEN_SHFT 0xd
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_PKT_SIZE_BMSK 0x3f00000
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_PKT_SIZE_SHFT 0x14
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_PKT_SIZE_VALID_BMSK 0x80000
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_PKT_SIZE_VALID_SHFT 0x13
#define IPA_ENDP_INIT_HDR_N_HDR_METADATA_REG_VALID_BMSK_v2 0x10000000
#define IPA_ENDP_INIT_HDR_N_HDR_METADATA_REG_VALID_SHFT_v2 0x1c
#define IPA_ENDP_INIT_HDR_N_HDR_LEN_INC_DEAGG_HDR_BMSK_v2 0x8000000
#define IPA_ENDP_INIT_HDR_N_HDR_LEN_INC_DEAGG_HDR_SHFT_v2 0x1b
#define IPA_ENDP_INIT_HDR_N_HDR_A5_MUX_BMSK 0x4000000
#define IPA_ENDP_INIT_HDR_N_HDR_A5_MUX_SHFT 0x1a
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_METADATA_VALID_BMSK 0x40
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_METADATA_VALID_SHFT 0x6
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_METADATA_SHFT 0x7
#define IPA_ENDP_INIT_HDR_N_HDR_OFST_METADATA_BMSK 0x1f80

#define IPA_ENDP_INIT_NAT_N_OFST_v1_0(n) (0x00000080 + 0x4 * (n))
#define IPA_ENDP_INIT_NAT_N_OFST_v1_1(n) (0x000000c0 + 0x4 * (n))
#define IPA_ENDP_INIT_NAT_N_OFST_v2_0(n) (0x00000120 + 0x4 * (n))
#define IPA_ENDP_INIT_NAT_N_NAT_EN_BMSK 0x3
#define IPA_ENDP_INIT_NAT_N_NAT_EN_SHFT 0x0


#define IPA_ENDP_INIT_HDR_EXT_n_OFST_v2_0(n) (0x000001c0 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ENDIANESS_BMSK 0x1
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ENDIANESS_SHFT 0x0
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_VALID_BMSK 0x2
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_VALID_SHFT 0x1
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_BMSK 0x4
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_SHFT 0x2
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAYLOAD_LEN_INC_PADDING_BMSK 0x8
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAYLOAD_LEN_INC_PADDING_SHFT 0x3
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_BMSK 0x3f0
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_SHFT 0x4
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAD_TO_ALIGNMENT_BMSK 0x1c00
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAD_TO_ALIGNMENT_SHFT 0xa


/*
 IPA HW 1.1 specific Registers
*/

#define IPA_FILTER_FILTER_DIS_BMSK 0x1
#define IPA_FILTER_FILTER_DIS_SHFT 0x0
#define IPA_SINGLE_NDP_MODE_OFST 0x00000064
#define IPA_QCNCM_OFST 0x00000060

#define IPA_SPARE_REG_1_OFST 0x00002090

#define IPA_ENDP_INIT_CTRL_N_OFST(n) (0x00000070 + 0x4 * (n))
#define IPA_ENDP_INIT_CTRL_N_RMSK 0x1
#define IPA_ENDP_INIT_CTRL_N_MAX 19
#define IPA_ENDP_INIT_CTRL_N_ENDP_SUSPEND_BMSK 0x1
#define IPA_ENDP_INIT_CTRL_N_ENDP_SUSPEND_SHFT 0x0

#define IPA_ENDP_INIT_HOL_BLOCK_EN_N_OFST_v1_1(n) (0x00000270 + 0x4 * (n))
#define IPA_ENDP_INIT_HOL_BLOCK_EN_N_OFST_v2_0(n) (0x000003c0 + 0x4 * (n))
#define IPA_ENDP_INIT_HOL_BLOCK_EN_N_RMSK 0x1
#define IPA_ENDP_INIT_HOL_BLOCK_EN_N_MAX 19
#define IPA_ENDP_INIT_HOL_BLOCK_EN_N_EN_BMSK 0x1
#define IPA_ENDP_INIT_HOL_BLOCK_EN_N_EN_SHFT 0x0

#define IPA_ENDP_INIT_DEAGGR_n_OFST_v2_0(n) (0x00000470 + 0x04 * (n))
#define IPA_ENDP_INIT_DEAGGR_n_DEAGGR_HDR_LEN_BMSK 0x3F
#define IPA_ENDP_INIT_DEAGGR_n_DEAGGR_HDR_LEN_SHFT 0x0
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_VALID_BMSK 0x40
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_VALID_SHFT 0x6
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_LOCATION_BMSK 0x3F00
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_LOCATION_SHFT 0x8
#define IPA_ENDP_INIT_DEAGGR_n_MAX_PACKET_LEN_BMSK 0xFFFF0000
#define IPA_ENDP_INIT_DEAGGR_n_MAX_PACKET_LEN_SHFT 0x10

#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_N_OFST_v1_1(n) (0x000002c0 + 0x4 * (n))
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_N_OFST_v2_0(n) (0x00000420 + 0x4 * (n))
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_N_RMSK 0x1ff
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_N_MAX 19
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_N_TIMER_BMSK 0x1ff
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_N_TIMER_SHFT 0x0

#define IPA_DEBUG_CNT_REG_N_OFST_v1(n) (0x00000340 + 0x4 * (n))
#define IPA_DEBUG_CNT_REG_N_OFST_v2_0(n) (0x00000600 + 0x4 * (n))
#define IPA_DEBUG_CNT_REG_N_RMSK 0xffffffff
#define IPA_DEBUG_CNT_REG_N_MAX 15
#define IPA_DEBUG_CNT_REG_N_DBG_CNT_REG_BMSK 0xffffffff
#define IPA_DEBUG_CNT_REG_N_DBG_CNT_REG_SHFT 0x0

#define IPA_DEBUG_CNT_CTRL_N_OFST_v1(n) (0x00000380 + 0x4 * (n))
#define IPA_DEBUG_CNT_CTRL_N_OFST_v2_0(n) (0x00000640 + 0x4 * (n))
#define IPA_DEBUG_CNT_CTRL_N_RMSK 0x1ff1f171
#define IPA_DEBUG_CNT_CTRL_N_MAX 15
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_RULE_INDEX_BMSK 0x1ff00000
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_RULE_INDEX_SHFT 0x14
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_SOURCE_PIPE_BMSK 0x1f000
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_SOURCE_PIPE_SHFT 0xc
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_PRODUCT_BMSK 0x100
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_PRODUCT_SHFT 0x8
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_TYPE_BMSK 0x70
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_TYPE_SHFT 0x4
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_EN_BMSK 0x1
#define IPA_DEBUG_CNT_CTRL_N_DBG_CNT_EN_SHFT 0x0

#define IPA_ENDP_STATUS_n_OFST(n) (0x000004c0 + 0x4 * (n))
#define IPA_ENDP_STATUS_n_STATUS_ENDP_BMSK 0x3e
#define IPA_ENDP_STATUS_n_STATUS_ENDP_SHFT 0x1
#define IPA_ENDP_STATUS_n_STATUS_EN_BMSK 0x1
#define IPA_ENDP_STATUS_n_STATUS_EN_SHFT 0x0

#define IPA_ENDP_INIT_CFG_n_OFST(n) (0x000000c0 + 0x4 * (n))
#define IPA_ENDP_INIT_CFG_n_RMSK 0x7f
#define IPA_ENDP_INIT_CFG_n_MAXn 19
#define IPA_ENDP_INIT_CFG_n_CS_METADATA_HDR_OFFSET_BMSK 0x78
#define IPA_ENDP_INIT_CFG_n_CS_METADATA_HDR_OFFSET_SHFT 0x3
#define IPA_ENDP_INIT_CFG_n_CS_OFFLOAD_EN_BMSK 0x6
#define IPA_ENDP_INIT_CFG_n_CS_OFFLOAD_EN_SHFT 0x1
#define IPA_ENDP_INIT_CFG_n_FRAG_OFFLOAD_EN_BMSK 0x1
#define IPA_ENDP_INIT_CFG_n_FRAG_OFFLOAD_EN_SHFT 0x0

#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_OFST(n) (0x00000220 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_RMSK 0xffffffff
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_MAXn 19
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_METADATA_MASK_BMSK 0xffffffff
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_METADATA_MASK_SHFT 0x0

#define IPA_ENDP_INIT_HDR_METADATA_n_OFST(n) (0x00000270 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_METADATA_n_MUX_ID_BMASK 0xFF0000
#define IPA_ENDP_INIT_HDR_METADATA_n_MUX_ID_SHFT 0x10
#endif

