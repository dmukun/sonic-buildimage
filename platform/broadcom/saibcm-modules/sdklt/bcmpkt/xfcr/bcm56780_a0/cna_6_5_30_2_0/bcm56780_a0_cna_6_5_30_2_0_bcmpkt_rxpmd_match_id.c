/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) bcm56780_a0_cna_6_5_30_2_0_sf_match_id_info.yml
 * for device bcm56780_a0 and variant cna_6_5_30_2_0.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 *
 ****************************************************************/


#include <bcmpkt/bcmpkt_rxpmd_match_id.h>
#include <bcmpkt/xfcr/bcm56780_a0/cna_6_5_30_2_0/bcm56780_a0_cna_6_5_30_2_0_bcmpkt_rxpmd_match_id_defs.h>


static bcmpkt_rxpmd_match_id_db_t
bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_db[BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_COUNT] = {
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ITAG */
        .name         = "EGRESS_PKT_FWD_L2_HDR_ITAG",
        .match        = 0x2,
        .match_mask   = 0x2,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 1,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 37,
        .pminbit      = 35,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_L2 */
        .name         = "EGRESS_PKT_FWD_L2_HDR_L2",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 37,
        .pminbit      = 35,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_NONE */
        .name         = "EGRESS_PKT_FWD_L2_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 2,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 37,
        .pminbit      = 35,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_OTAG */
        .name         = "EGRESS_PKT_FWD_L2_HDR_OTAG",
        .match        = 0x4,
        .match_mask   = 0x4,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 2,
        .minbit       = 2,
        .value        = 0x1,
        .pmaxbit      = 37,
        .pminbit      = 35,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ARP */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_ARP",
        .match        = 0x20,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ICMP */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_ICMP",
        .match        = 0x40,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV4 */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_IPV4",
        .match        = 0x8,
        .match_mask   = 0x18,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x1,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV6 */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_IPV6",
        .match        = 0x10,
        .match_mask   = 0x18,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x2,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_NONE */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7f,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_RARP */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_RARP",
        .match        = 0x2,
        .match_mask   = 0x6,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES",
        .match        = 0x4,
        .match_mask   = 0x6,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x2,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES",
        .match        = 0x24,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UDP */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_UDP",
        .match        = 0x6,
        .match_mask   = 0x6,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x3,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3 */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3",
        .match        = 0x18,
        .match_mask   = 0x18,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x3,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4 */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4",
        .match        = 0x60,
        .match_mask   = 0x60,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x3,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5 */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5",
        .match        = 0x46,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_VXLAN */
        .name         = "EGRESS_PKT_FWD_L3_L4_HDR_VXLAN",
        .match        = 0x26,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 55,
        .pminbit      = 49,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_EP_NIH */
        .name         = "EGRESS_PKT_SYS_HDR_EP_NIH",
        .match        = 0x2,
        .match_mask   = 0x3,
        .match_maxbit = 1,
        .match_minbit = 0,
        .maxbit       = 1,
        .minbit       = 0,
        .value        = 0x2,
        .pmaxbit      = 1,
        .pminbit      = 0,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_LOOPBACK */
        .name         = "EGRESS_PKT_SYS_HDR_LOOPBACK",
        .match        = 0x1,
        .match_mask   = 0x3,
        .match_maxbit = 1,
        .match_minbit = 0,
        .maxbit       = 1,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 1,
        .pminbit      = 0,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_NONE */
        .name         = "EGRESS_PKT_SYS_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x3,
        .match_maxbit = 1,
        .match_minbit = 0,
        .maxbit       = 1,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 1,
        .pminbit      = 0,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ITAG */
        .name         = "EGRESS_PKT_TUNNEL_L2_HDR_ITAG",
        .match        = 0x2,
        .match_mask   = 0x2,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 1,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 9,
        .pminbit      = 7,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_L2 */
        .name         = "EGRESS_PKT_TUNNEL_L2_HDR_L2",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 9,
        .pminbit      = 7,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_NONE */
        .name         = "EGRESS_PKT_TUNNEL_L2_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 2,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 9,
        .pminbit      = 7,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_OTAG */
        .name         = "EGRESS_PKT_TUNNEL_L2_HDR_OTAG",
        .match        = 0x4,
        .match_mask   = 0x4,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 2,
        .minbit       = 2,
        .value        = 0x1,
        .pmaxbit      = 9,
        .pminbit      = 7,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP",
        .match        = 0x20,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP",
        .match        = 0x40,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4 */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4",
        .match        = 0x8,
        .match_mask   = 0x18,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x1,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6 */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6",
        .match        = 0x10,
        .match_mask   = 0x18,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x2,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7f,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP",
        .match        = 0x2,
        .match_mask   = 0x6,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES",
        .match        = 0x4,
        .match_mask   = 0x6,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x2,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES",
        .match        = 0x24,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP",
        .match        = 0x6,
        .match_mask   = 0x6,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x3,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3 */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3",
        .match        = 0x18,
        .match_mask   = 0x18,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x3,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4 */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4",
        .match        = 0x60,
        .match_mask   = 0x60,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x3,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5 */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5",
        .match        = 0x46,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN */
        .name         = "EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN",
        .match        = 0x26,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 27,
        .pminbit      = 21,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ITAG */
        .name         = "INGRESS_PKT_INNER_L2_HDR_ITAG",
        .match        = 0x2,
        .match_mask   = 0x2,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 1,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 14,
        .pminbit      = 12,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_L2 */
        .name         = "INGRESS_PKT_INNER_L2_HDR_L2",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 14,
        .pminbit      = 12,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_NONE */
        .name         = "INGRESS_PKT_INNER_L2_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 2,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 14,
        .pminbit      = 12,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_OTAG */
        .name         = "INGRESS_PKT_INNER_L2_HDR_OTAG",
        .match        = 0x4,
        .match_mask   = 0x4,
        .match_maxbit = 14,
        .match_minbit = 12,
        .maxbit       = 2,
        .minbit       = 2,
        .value        = 0x1,
        .pmaxbit      = 14,
        .pminbit      = 12,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ARP */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_ARP",
        .match        = 0x20,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ICMP */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_ICMP",
        .match        = 0x40,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV4 */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_IPV4",
        .match        = 0x8,
        .match_mask   = 0x18,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x1,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV6 */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_IPV6",
        .match        = 0x10,
        .match_mask   = 0x18,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x2,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_NONE */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7f,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_RARP */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_RARP",
        .match        = 0x2,
        .match_mask   = 0x6,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES",
        .match        = 0x4,
        .match_mask   = 0x6,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x2,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES",
        .match        = 0x24,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UDP */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_UDP",
        .match        = 0x6,
        .match_mask   = 0x6,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x3,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3 */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3",
        .match        = 0x18,
        .match_mask   = 0x18,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x3,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4 */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4",
        .match        = 0x60,
        .match_mask   = 0x60,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x3,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5 */
        .name         = "INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5",
        .match        = 0x46,
        .match_mask   = 0x66,
        .match_maxbit = 21,
        .match_minbit = 15,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 21,
        .pminbit      = 15,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ITAG */
        .name         = "INGRESS_PKT_OUTER_L2_HDR_ITAG",
        .match        = 0x2,
        .match_mask   = 0x2,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 1,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 4,
        .pminbit      = 2,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_L2 */
        .name         = "INGRESS_PKT_OUTER_L2_HDR_L2",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 4,
        .pminbit      = 2,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_NONE */
        .name         = "INGRESS_PKT_OUTER_L2_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 2,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 4,
        .pminbit      = 2,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_OTAG */
        .name         = "INGRESS_PKT_OUTER_L2_HDR_OTAG",
        .match        = 0x4,
        .match_mask   = 0x4,
        .match_maxbit = 4,
        .match_minbit = 2,
        .maxbit       = 2,
        .minbit       = 2,
        .value        = 0x1,
        .pmaxbit      = 4,
        .pminbit      = 2,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ARP */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_ARP",
        .match        = 0x20,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE",
        .match        = 0x1,
        .match_mask   = 0x1,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 0,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ICMP */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_ICMP",
        .match        = 0x40,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV4 */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_IPV4",
        .match        = 0x8,
        .match_mask   = 0x18,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x1,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV6 */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_IPV6",
        .match        = 0x10,
        .match_mask   = 0x18,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x2,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_NONE */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x7f,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_RARP */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_RARP",
        .match        = 0x2,
        .match_mask   = 0x6,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x1,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES",
        .match        = 0x4,
        .match_mask   = 0x6,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x2,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES",
        .match        = 0x24,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UDP */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_UDP",
        .match        = 0x6,
        .match_mask   = 0x6,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 2,
        .minbit       = 1,
        .value        = 0x3,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3 */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3",
        .match        = 0x18,
        .match_mask   = 0x18,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 4,
        .minbit       = 3,
        .value        = 0x3,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4 */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4",
        .match        = 0x60,
        .match_mask   = 0x60,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x3,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5 */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5",
        .match        = 0x46,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x2,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN */
        .name         = "INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN",
        .match        = 0x26,
        .match_mask   = 0x66,
        .match_maxbit = 11,
        .match_minbit = 5,
        .maxbit       = 6,
        .minbit       = 5,
        .value        = 0x1,
        .pmaxbit      = 11,
        .pminbit      = 5,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_EP_NIH */
        .name         = "INGRESS_PKT_SYS_HDR_EP_NIH",
        .match        = 0x2,
        .match_mask   = 0x3,
        .match_maxbit = 1,
        .match_minbit = 0,
        .maxbit       = 1,
        .minbit       = 0,
        .value        = 0x2,
        .pmaxbit      = 1,
        .pminbit      = 0,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_LOOPBACK */
        .name         = "INGRESS_PKT_SYS_HDR_LOOPBACK",
        .match        = 0x1,
        .match_mask   = 0x3,
        .match_maxbit = 1,
        .match_minbit = 0,
        .maxbit       = 1,
        .minbit       = 0,
        .value        = 0x1,
        .pmaxbit      = 1,
        .pminbit      = 0,

    },
    {
        /* BCM56780_A0_CNA_6_5_30_2_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_NONE */
        .name         = "INGRESS_PKT_SYS_HDR_NONE",
        .match        = 0x0,
        .match_mask   = 0x3,
        .match_maxbit = 1,
        .match_minbit = 0,
        .maxbit       = 1,
        .minbit       = 0,
        .value        = 0x0,
        .pmaxbit      = 1,
        .pminbit      = 0,

    },
};

static bcmpkt_rxpmd_match_id_db_info_t bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_db_info = {
    .num_entries = 77,
    .db = bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_db
};
bcmpkt_rxpmd_match_id_db_info_t * bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_db_info_get(void) {
    return &bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_db_info;
}

static shr_enum_map_t bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_map[] = {
    BCM56780_A0_CNA_6_5_30_2_0_BCMPKT_RXPMD_MATCH_ID_FIELD_NAME_MAP_INIT
};

static bcmpkt_rxpmd_match_id_map_info_t bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_map_info = {
    .num_entries = 77,
    .map = bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_map
};

bcmpkt_rxpmd_match_id_map_info_t * bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_map_info_get(void) {
    return &bcm56780_a0_cna_6_5_30_2_0_rxpmd_match_id_map_info;
}