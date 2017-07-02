#ifndef __MTLK_WSS_ID_H__
#define __MTLK_WSS_ID_H__

#define MTLK_WWSS_WLAN_STAT_ID_FIRST 0x80000000

typedef enum
{
  MTLK_WWSS_WLAN_STAT_ID_FCS_ERROR_COUNT = MTLK_WWSS_WLAN_STAT_ID_FIRST,
  MTLK_WWSS_WLAN_STAT_ID_RTS_SUCCESS_COUNT,
  MTLK_WWSS_WLAN_STAT_ID_RTS_FAILURE_COUNT,
  MTLK_WWSS_WLAN_STAT_ID_FREE_TX_MSDUs,
  MTLK_WWSS_WLAN_STAT_ID_TX_MSDUs_USAGE_PEAK,
  MTLK_WWSS_WLAN_STAT_ID_BIST_CHECK_PASSED,
  MTLK_WWSS_WLAN_STAT_ID_MAN_MSG_SENT,
  MTLK_WWSS_WLAN_STAT_ID_MAN_MSG_CONFIRMED,
  MTLK_WWSS_WLAN_STAT_ID_MAN_MSG_PEAK,
  MTLK_WWSS_WLAN_STAT_ID_DBG_MSG_SENT,
  MTLK_WWSS_WLAN_STAT_ID_DBG_MSG_CONFIRMED,
  MTLK_WWSS_WLAN_STAT_ID_DBG_MSG_PEAK,
  MTLK_WWSS_WLAN_STAT_ID_FW_LOGGER_PACKETS_PROCESSED,
  MTLK_WWSS_WLAN_STAT_ID_FW_LOGGER_PACKETS_DROPPED,
  MTLK_WWSS_WLAN_STAT_ID_DAT_FRAMES_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_CTL_FRAMES_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_MAN_FRAMES_RECEIVED,

  MTLK_WWSS_WLAN_STAT_ID_ISRS_TOTAL,
  MTLK_WWSS_WLAN_STAT_ID_ISRS_FOREIGN,
  MTLK_WWSS_WLAN_STAT_ID_ISRS_NOT_PENDING, 
  MTLK_WWSS_WLAN_STAT_ID_ISRS_HALTED,
  MTLK_WWSS_WLAN_STAT_ID_ISRS_INIT,
  MTLK_WWSS_WLAN_STAT_ID_ISRS_TO_DPC,
  MTLK_WWSS_WLAN_STAT_ID_ISRS_UNKNOWN,
  MTLK_WWSS_WLAN_STAT_ID_POST_ISR_DPCS,
  MTLK_WWSS_WLAN_STAT_ID_FW_MSGS_HANDLED,
  MTLK_WWSS_WLAN_STAT_ID_SQ_DPCS_SCHEDULED,
  MTLK_WWSS_WLAN_STAT_ID_SQ_DPCS_ARRIVED,
  MTLK_WWSS_WLAN_STAT_ID_RX_BUF_ALLOC_FAILED,
  MTLK_WWSS_WLAN_STAT_ID_RX_BUF_REALLOC_FAILED,
  MTLK_WWSS_WLAN_STAT_ID_RX_BUF_REALLOCATED,

  MTLK_WWSS_WLAN_STAT_ID_BYTES_SENT,
  MTLK_WWSS_WLAN_STAT_ID_BYTES_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_UNICAST_PACKETS_SENT,
  MTLK_WWSS_WLAN_STAT_ID_UNICAST_PACKETS_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_MULTICAST_PACKETS_SENT,
  MTLK_WWSS_WLAN_STAT_ID_MULTICAST_PACKETS_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_BROADCAST_PACKETS_SENT,
  MTLK_WWSS_WLAN_STAT_ID_BROADCAST_PACKETS_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_MULTICAST_BYTES_SENT,
  MTLK_WWSS_WLAN_STAT_ID_MULTICAST_BYTES_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_BROADCAST_BYTES_SENT,
  MTLK_WWSS_WLAN_STAT_ID_BROADCAST_BYTES_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_NACKed_PACKETS_SENT,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_NO_PEERS,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_ACM,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_EAPOL_CLONED,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_UNKNOWN_DESTINATION_DIRECTED,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_UNKNOWN_DESTINATION_MCAST,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_NO_RESOURCES,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_SQ_OVERFLOW,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_EAPOL_FILTER,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_DROP_ALL_FILTER,
  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_DRV_TX_QUEUE_OVERFLOW,
  MTLK_WWSS_WLAN_STAT_ID_RX_PACKETS_DISCARDED_DRV_FOREIGN,
  MTLK_WWSS_WLAN_STAT_ID_RX_PACKETS_DISCARDED_DRV_LOOPBACK,
  MTLK_WWSS_WLAN_STAT_ID_RX_PACKETS_DISCARDED_DRV_TOO_OLD,
  MTLK_WWSS_WLAN_STAT_ID_RX_PACKETS_DISCARDED_DRV_DUPLICATE,
  MTLK_WWSS_WLAN_STAT_ID_RX_PACKETS_DISCARDED_DRV_NO_RESOURCES,

  MTLK_WWSS_WLAN_STAT_ID_TX_PACKETS_DISCARDED_FW,
  MTLK_WWSS_WLAN_STAT_ID_RX_PACKETS_DISCARDED_FW,
  MTLK_WWSS_WLAN_STAT_ID_PAIRWISE_MIC_FAILURE_PACKETS,
  MTLK_WWSS_WLAN_STAT_ID_GROUP_MIC_FAILURE_PACKETS,
  MTLK_WWSS_WLAN_STAT_ID_UNICAST_REPLAYED_PACKETS,
  MTLK_WWSS_WLAN_STAT_ID_MULTICAST_REPLAYED_PACKETS,
  MTLK_WWSS_WLAN_STAT_ID_RETRY_COUNT,
  MTLK_WWSS_WLAN_STAT_ID_MULTIPLE_RETRY_COUNT,
  MTLK_WWSS_WLAN_STAT_ID_FWD_RX_PACKETS,
  MTLK_WWSS_WLAN_STAT_ID_FWD_RX_BYTES,
  MTLK_WWSS_WLAN_STAT_ID_BAR_FRAMES_COUNT,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_RECEIVED_AC_BE,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_RECEIVED_AC_BK,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_RECEIVED_AC_VI,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_RECEIVED_AC_VO,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_TRANSMITTED_AC_BE,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_TRANSMITTED_AC_BK,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_TRANSMITTED_AC_VI,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_TRANSMITTED_AC_VO,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_USED_AC_BE,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_USED_AC_BK,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_USED_AC_VI,
  MTLK_WWSS_WLAN_STAT_ID_MSDU_USED_AC_VO,
  MTLK_WWSS_WLAN_STAT_ID_MAC_STATS,
  MTLK_WWSS_WLAN_STAT_ID_SEND_QUEUE_STATS,
  MTLK_WWSS_WLAN_STAT_ID_REORDERING_STATS,

  MTLK_WWSS_WLAN_STAT_ID_LAST_DATA_UPLINK_RATE,
  MTLK_WWSS_WLAN_STAT_ID_LAST_DATA_DOWNLINK_RATE,
  MTLK_WWSS_WLAN_STAT_ID_SIGNAL_STRENGTH_SHORT,
  MTLK_WWSS_WLAN_STAT_ID_SIGNAL_STRENGTH_HISTORY,
  MTLK_WWSS_WLAN_STAT_ID_DISCARDED_TX_PACKETS_FW,
  MTLK_WWSS_WLAN_STAT_ID_PACKETS_SENT,
  MTLK_WWSS_WLAN_STAT_ID_PACKETS_RECEIVED,
  MTLK_WWSS_WLAN_STAT_ID_LAST_ACTIVITY_TIMESTAMP,
  MTLK_WWSS_WLAN_STAT_ID_TX_THROUGHPUT_SHORT,
  MTLK_WWSS_WLAN_STAT_ID_TX_THROUGHPUT_HISTORY,
  MTLK_WWSS_WLAN_STAT_ID_RX_THROUGHPUT_SHORT,
  MTLK_WWSS_WLAN_STAT_ID_RX_THROUGHPUT_HISTORY,
  MTLK_WWSS_WLAN_STAT_ID_PS_MODE_ENTRANCES,

  MTLK_WWSS_WLAN_STAT_ID_NOF_COEX_EL_RECEIVED,                           /* received coexistence element */
  MTLK_WWSS_WLAN_STAT_ID_NOF_COEX_EL_SCAN_EXEMPTION_REQUESTED,           /* received coexistence element with SCAN_EXEMPTION_REQUEST bit = 1 */
  MTLK_WWSS_WLAN_STAT_ID_NOF_COEX_EL_SCAN_EXEMPTION_GRANTED,             /* sent coexistence element with SCAN_EXEMPTION_GRANT bit = 1 */
  MTLK_WWSS_WLAN_STAT_ID_NOF_COEX_EL_SCAN_EXEMPTION_GRANT_CANCELLED,     /* sent coexistence element with SCAN_EXEMPTION_GRANT bit = 0 */
  MTLK_WWSS_WLAN_STAT_ID_NOF_CHANNEL_SWITCH_20_TO_40,                    /* switch channel message sent to FW (20MHz to 40MHz) */
  MTLK_WWSS_WLAN_STAT_ID_NOF_CHANNEL_SWITCH_40_TO_20,                    /* switch channel message sent to FW (40MHz to 20MHz) */
  MTLK_WWSS_WLAN_STAT_ID_NOF_CHANNEL_SWITCH_40_TO_40,                    /* switch channel message sent to FW (40MHz to 40MHz) */

  MTLK_WWSS_WLAN_STAT_ID_AGGR_ACTIVE,
  MTLK_WWSS_WLAN_STAT_ID_REORD_ACTIVE,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_REQUEST_TX,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_POSITIVE_RESPONSE_TX,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_NEGATIVE_RESPONSE_TX,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_REQUEST_RX,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_POSITIVE_RESPONSE_RX,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_NEGATIVE_RESPONSE_RX,
  MTLK_WWSS_WLAN_STAT_ID_ADDBA_UNCONFIRMED_RESPONSE_RX,
  MTLK_WWSS_WLAN_STAT_ID_DELBA_REQUEST_TX,
  MTLK_WWSS_WLAN_STAT_ID_DELBA_SENT_REQUEST_RX,
  MTLK_WWSS_WLAN_STAT_ID_DELBA_RECEIVED_REQUEST_RX,
  MTLK_WWSS_WLAN_STAT_ID_AGGR_OPEN_REQUEST,
  MTLK_WWSS_WLAN_STAT_ID_AGGR_OPEN_CONFIRM,
  MTLK_WWSS_WLAN_STAT_ID_AGGR_CLOSE_REQUEST,
  MTLK_WWSS_WLAN_STAT_ID_AGGR_CLOSE_CONFIRM,

  MTLK_WWSS_WLAN_STAT_ID_LAST
} mtlk_wss_stat_id_e;

#define MTLK_ASSERT_STAT_ID(id)                         \
  do {                                                  \
    MTLK_ASSERT((id) >= MTLK_WWSS_WLAN_STAT_ID_FIRST); \
    MTLK_ASSERT((id) < MTLK_WWSS_WLAN_STAT_ID_LAST);   \
  } while (0)

#endif /* __MTLK_WSS_ID_H__ */
