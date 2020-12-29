//--------------------------------------------------------------------------------
// Auto-generated by Migen (--------) & LiteX (--------) on 2020-12-28 13:06:01
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x0L
#endif

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_SIZE 1
static inline uint8_t ctrl_reset_read(void) {
	return csr_read_simple(CSR_BASE + 0x0L);
}
static inline void ctrl_reset_write(uint8_t v) {
	csr_write_simple(v, CSR_BASE + 0x0L);
}
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x4L)
#define CSR_CTRL_SCRATCH_SIZE 4
static inline uint32_t ctrl_scratch_read(void) {
	uint32_t r = csr_read_simple(CSR_BASE + 0x4L);
	r <<= 8;
	r |= csr_read_simple(CSR_BASE + 0x8L);
	r <<= 8;
	r |= csr_read_simple(CSR_BASE + 0xcL);
	r <<= 8;
	r |= csr_read_simple(CSR_BASE + 0x10L);
	return r;
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v >> 24, CSR_BASE + 0x4L);
	csr_write_simple(v >> 16, CSR_BASE + 0x8L);
	csr_write_simple(v >> 8, CSR_BASE + 0xcL);
	csr_write_simple(v, CSR_BASE + 0x10L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x14L)
#define CSR_CTRL_BUS_ERRORS_SIZE 4
static inline uint32_t ctrl_bus_errors_read(void) {
	uint32_t r = csr_read_simple(CSR_BASE + 0x14L);
	r <<= 8;
	r |= csr_read_simple(CSR_BASE + 0x18L);
	r <<= 8;
	r |= csr_read_simple(CSR_BASE + 0x1cL);
	r <<= 8;
	r |= csr_read_simple(CSR_BASE + 0x20L);
	return r;
}

/* ethphy */
#define CSR_ETHPHY_BASE (CSR_BASE + 0x800L)
#define CSR_ETHPHY_CRG_RESET_ADDR (CSR_BASE + 0x800L)
#define CSR_ETHPHY_CRG_RESET_SIZE 1
static inline uint8_t ethphy_crg_reset_read(void) {
	return csr_read_simple(CSR_BASE + 0x800L);
}
static inline void ethphy_crg_reset_write(uint8_t v) {
	csr_write_simple(v, CSR_BASE + 0x800L);
}
#define CSR_ETHPHY_RX_INBAND_STATUS_ADDR (CSR_BASE + 0x804L)
#define CSR_ETHPHY_RX_INBAND_STATUS_SIZE 1
static inline uint8_t ethphy_rx_inband_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x804L);
}
#define CSR_ETHPHY_RX_INBAND_STATUS_LINK_STATUS_OFFSET 0
#define CSR_ETHPHY_RX_INBAND_STATUS_LINK_STATUS_SIZE 1
#define CSR_ETHPHY_RX_INBAND_STATUS_CLOCK_SPEED_OFFSET 1
#define CSR_ETHPHY_RX_INBAND_STATUS_CLOCK_SPEED_SIZE 1
#define CSR_ETHPHY_RX_INBAND_STATUS_DUPLEX_STATUS_OFFSET 2
#define CSR_ETHPHY_RX_INBAND_STATUS_DUPLEX_STATUS_SIZE 1
#define CSR_ETHPHY_MDIO_W_ADDR (CSR_BASE + 0x808L)
#define CSR_ETHPHY_MDIO_W_SIZE 1
static inline uint8_t ethphy_mdio_w_read(void) {
	return csr_read_simple(CSR_BASE + 0x808L);
}
static inline void ethphy_mdio_w_write(uint8_t v) {
	csr_write_simple(v, CSR_BASE + 0x808L);
}
#define CSR_ETHPHY_MDIO_W_MDC_OFFSET 0
#define CSR_ETHPHY_MDIO_W_MDC_SIZE 1
#define CSR_ETHPHY_MDIO_W_OE_OFFSET 1
#define CSR_ETHPHY_MDIO_W_OE_SIZE 1
#define CSR_ETHPHY_MDIO_W_W_OFFSET 2
#define CSR_ETHPHY_MDIO_W_W_SIZE 1
#define CSR_ETHPHY_MDIO_R_ADDR (CSR_BASE + 0x80cL)
#define CSR_ETHPHY_MDIO_R_SIZE 1
static inline uint8_t ethphy_mdio_r_read(void) {
	return csr_read_simple(CSR_BASE + 0x80cL);
}
#define CSR_ETHPHY_MDIO_R_R_OFFSET 0
#define CSR_ETHPHY_MDIO_R_R_SIZE 1

#endif
