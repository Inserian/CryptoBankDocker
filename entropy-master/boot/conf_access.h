#ifndef _CONF_ACCESS_H_
#define _CONF_ACCESS_H_

#include "compiler.h"
#include "board.h"

/*! \name Activation of Logical Unit Numbers
 */
//! @{
#define LUN_0                ENABLE    //!< On-Chip Flash Memory.
#define LUN_1                DISABLE   //!< Spare
#define LUN_2                DISABLE   //!< Spare
#define LUN_3                DISABLE   //!< Serial flash.
#define LUN_4                DISABLE   //!< Spare
#define LUN_5                DISABLE   //!< Spare
#define LUN_6                DISABLE   //!< Spare
#define LUN_7                DISABLE   //!< Spare
#define LUN_USB              DISABLE   //!< Host Mass-Storage Memory.
//! @}

#define VIRTUAL_MEM          DISABLE

/*! \name LUN 0 Definitions
 */
//! @{
#define FW_ACCESS                               LUN_0
#define LUN_ID_FW_ACCESS                        LUN_ID_0
#define LUN_0_INCLUDE                           "fw-access.h"
#define Lun_0_test_unit_ready                   fw_test_unit_ready
#define Lun_0_read_capacity                     fw_read_capacity
#define Lun_0_wr_protect                        fw_wr_protect
#define Lun_0_removal                           fw_removal
#define Lun_0_usb_read_10                       fw_usb_read_10
#define Lun_0_usb_write_10                      fw_usb_write_10
#define Lun_0_mem_2_ram                         fw_mem_2_ram
#define Lun_0_ram_2_mem                         fw_ram_2_mem
#define LUN_0_NAME                              "\"Bootloader\""
//! @}

/*! \name LUN 1 Definitions
 */
//! @{
#define AT45DBX_MEM                             LUN_1
#define LUN_ID_AT45DBX_MEM                      LUN_ID_1
#define LUN_1_INCLUDE                           "at45dbx_mem.h"
#define Lun_1_test_unit_ready                   at45dbx_test_unit_ready
#define Lun_1_read_capacity                     at45dbx_read_capacity
#define Lun_1_wr_protect                        at45dbx_wr_protect
#define Lun_1_removal                           at45dbx_removal
#define Lun_1_usb_read_10                       at45dbx_usb_read_10
#define Lun_1_usb_write_10                      at45dbx_usb_write_10
#define Lun_1_mem_2_ram                         at45dbx_df_2_ram
#define Lun_1_ram_2_mem                         at45dbx_ram_2_df
#define LUN_1_NAME                              "\"AT45DBX Data Flash\""
//! @}

/*! \name LUN 2 Definitions
 */
//! @{
#define SD_MMC_0_MEM                            LUN_2
#define LUN_ID_SD_MMC_0_MEM                     LUN_ID_2
#define LUN_2_INCLUDE                           "sd_mmc_mem.h"
#define Lun_2_test_unit_ready                   sd_mmc_test_unit_ready_0
#define Lun_2_read_capacity                     sd_mmc_read_capacity_0
#define Lun_2_wr_protect                        app_wr_protect
#define Lun_2_removal                           sd_mmc_removal_0
#define Lun_2_usb_read_10                       sd_mmc_usb_read_10_0
#define Lun_2_usb_write_10                      sd_mmc_usb_write_10_0
#define Lun_2_mem_2_ram                         sd_mmc_mem_2_ram_0
#define Lun_2_ram_2_mem                         sd_mmc_ram_2_mem_0
#define LUN_2_NAME                              "\"SD/MMC Card Slot 0\""
//! @}

/*! \name LUN 3 Definitions
 */
//! @{
#define AT25DFX_MEM                             LUN_3
#define LUN_ID_AT25DFX_MEM                      LUN_ID_3
#define LUN_3_INCLUDE                           "at25dfx_mem.h"
#define Lun_3_test_unit_ready                   at25dfx_test_unit_ready
#define Lun_3_read_capacity                     at25dfx_read_capacity
#define Lun_3_wr_protect                        at25dfx_wr_protect
#define Lun_3_removal                           at25dfx_removal
#define Lun_3_usb_read_10                       at25dfx_usb_read_10
#define Lun_3_usb_write_10                      at25dfx_usb_write_10
#define Lun_3_mem_2_ram                         at25dfx_df_2_ram
#define Lun_3_ram_2_mem                         at25dfx_ram_2_df
#define LUN_3_NAME                              "\"Serial Flash\""
//! @}

/*! \name LUN 4 Definitions
 */
//! @{
#define ME_ACCESS                               LUN_4
#define LUN_ID_ME_ACCESS                        LUN_ID_4
#define LUN_4_INCLUDE                           "me-access.h"
#define Lun_4_test_unit_ready                   me_test_unit_ready
#define Lun_4_read_capacity                     me_read_capacity
#define Lun_4_wr_protect                        me_wr_protect
#define Lun_4_removal                           me_removal
#define Lun_4_usb_read_10                       me_usb_read_10
#define Lun_4_usb_write_10                      me_usb_write_10
#define Lun_4_mem_2_ram                         me_mem_2_ram
#define Lun_4_ram_2_mem                         me_ram_2_mem
#define LUN_4_NAME                              "\"Mycelium Entropy\""
//! @}

#define SD_MMC_1_MEM                            DISABLE

/*! \name USB LUNs Definitions
 */
//! @{
#define MEM_USB                                 LUN_USB
#define LUN_ID_MEM_USB                          LUN_ID_USB
#define LUN_USB_INCLUDE                         "host_mem.h"
#define Lun_usb_test_unit_ready(lun)            host_test_unit_ready(lun)
#define Lun_usb_read_capacity(lun, nb_sect)     host_read_capacity(lun, nb_sect)
#define Lun_usb_read_sector_size(lun)           host_read_sector_size(lun)
#define Lun_usb_wr_protect(lun)                 host_wr_protect(lun)
#define Lun_usb_removal()                       host_removal()
#define Lun_usb_mem_2_ram(addr, ram)            host_read_10_ram(addr, ram)
#define Lun_usb_ram_2_mem(addr, ram)            host_write_10_ram(addr, ram)
#define LUN_USB_NAME                            "\"Host Mass-Storage Memory\""
//! @}

/*! \name Actions Associated with Memory Accesses
 *
 * Write here the action to associate with each memory access.
 *
 * \warning Be careful not to waste time in order not to disturb the functions.
 */
//! @{
#define memory_start_read_action(nb_sectors)
#define memory_stop_read_action()
#define memory_start_write_action(nb_sectors)
#define memory_stop_write_action()
//! @}

/*! \name Activation of Interface Features
 */
//! @{
#define ACCESS_USB           true    //!< MEM <-> USB interface.
#define ACCESS_MEM_TO_RAM    false   //!< MEM <-> RAM interface.
#define ACCESS_STREAM        false   //!< Streaming MEM <-> MEM interface.
#define ACCESS_STREAM_RECORD false   //!< Streaming MEM <-> MEM interface in record mode.
#define ACCESS_MEM_TO_MEM    false   //!< MEM <-> MEM interface.
#define ACCESS_CODEC         false   //!< Codec interface.
//! @}

/*! \name Specific Options for Access Control
 */
//! @{
#define GLOBAL_WR_PROTECT    false   //!< Management of a global write protection.
//! @}


#endif // _CONF_ACCESS_H_
