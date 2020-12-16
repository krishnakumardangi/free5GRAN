/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_RF_Parameters_H_
#define	_RF_Parameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RF_Parameters__srs_SwitchingTimeRequested {
	RF_Parameters__srs_SwitchingTimeRequested_true	= 0
} e_RF_Parameters__srs_SwitchingTimeRequested;

/* Forward declarations */
struct BandCombinationList;
struct FreqBandList;
struct BandCombinationList_v1540;
struct BandCombinationList_v1550;
struct BandCombinationList_v1560;
struct BandCombinationList_v1610;
struct BandCombinationListSidelinkEUTRA_NR_r16;
struct BandCombinationList_UplinkTxSwitch_r16;
struct BandNR;

/* RF-Parameters */
typedef struct RF_Parameters {
	struct RF_Parameters__supportedBandListNR {
		A_SEQUENCE_OF(struct BandNR) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedBandListNR;
	struct BandCombinationList	*supportedBandCombinationList	/* OPTIONAL */;
	struct FreqBandList	*appliedFreqBandListFilter	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct BandCombinationList_v1540	*supportedBandCombinationList_v1540	/* OPTIONAL */;
	long	*srs_SwitchingTimeRequested	/* OPTIONAL */;
	struct BandCombinationList_v1550	*supportedBandCombinationList_v1550	/* OPTIONAL */;
	struct BandCombinationList_v1560	*supportedBandCombinationList_v1560	/* OPTIONAL */;
	struct BandCombinationList_v1610	*supportedBandCombinationList_v1610	/* OPTIONAL */;
	struct BandCombinationListSidelinkEUTRA_NR_r16	*supportedBandCombinationListSidelinkEUTRA_NR_r16	/* OPTIONAL */;
	struct BandCombinationList_UplinkTxSwitch_r16	*supportedBandCombinationList_UplinkTxSwitch_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_SwitchingTimeRequested_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandCombinationList.h"
#include "FreqBandList.h"
#include "BandCombinationList-v1540.h"
#include "BandCombinationList-v1550.h"
#include "BandCombinationList-v1560.h"
#include "BandCombinationList-v1610.h"
#include "BandCombinationListSidelinkEUTRA-NR-r16.h"
#include "BandCombinationList-UplinkTxSwitch-r16.h"
#include "BandNR.h"

#endif	/* _RF_Parameters_H_ */
#include "asn_internal.h"