/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_MeasResultFailedCell_r16_H_
#define	_MeasResultFailedCell_r16_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CGI-Info-Logging-r16.h"
#include "MeasQuantityResults.h"
#include "constr_SEQUENCE.h"
#include "ResultsPerSSB-IndexList.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultFailedCell-r16 */
typedef struct MeasResultFailedCell_r16 {
	CGI_Info_Logging_r16_t	 cgi_Info;
	struct MeasResultFailedCell_r16__measResult_r16 {
		struct MeasResultFailedCell_r16__measResult_r16__cellResults_r16 {
			MeasQuantityResults_t	 resultsSSB_Cell_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} cellResults_r16;
		struct MeasResultFailedCell_r16__measResult_r16__rsIndexResults_r16 {
			ResultsPerSSB_IndexList_t	 resultsSSB_Indexes_r16;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} rsIndexResults_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultFailedCell_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultFailedCell_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultFailedCell_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultFailedCell_r16_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultFailedCell_r16_H_ */
#include "asn_internal.h"