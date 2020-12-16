/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_SL_QuantityConfig_r16_H_
#define	_SL_QuantityConfig_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FilterCoefficient.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SL-QuantityConfig-r16 */
typedef struct SL_QuantityConfig_r16 {
	FilterCoefficient_t	*sl_FilterCoefficientDMRS_r16	/* DEFAULT 4 */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_QuantityConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_QuantityConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_QuantityConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_QuantityConfig_r16_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_QuantityConfig_r16_H_ */
#include "asn_internal.h"