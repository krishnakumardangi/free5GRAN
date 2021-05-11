/*
 * Copyright 2020-2021 Telecom Paris
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#ifndef	_CG_ConfigInfo_v1560_IEs_H_
#define	_CG_ConfigInfo_v1560_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "ARFCN-ValueEUTRA.h"
#include "EUTRA-PhysCellId.h"
#include "CGI-InfoEUTRA.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA {
	CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_t313_Expiry	= 0,
	CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_randomAccessProblem	= 1,
	CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_rlc_MaxNumRetx	= 2,
	CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_scg_ChangeFailure	= 3
} e_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA;

/* Forward declarations */
struct DRX_Config;
struct MeasResultCellListSFTD_EUTRA;
struct FR_InfoList;

/* CG-ConfigInfo-v1560-IEs */
typedef struct CG_ConfigInfo_v1560_IEs {
	OCTET_STRING_t	*candidateCellInfoListMN_EUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*candidateCellInfoListSN_EUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*sourceConfigSCG_EUTRA;	/* OPTIONAL */
	struct CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA {
		long	 failureTypeEUTRA;
		OCTET_STRING_t	 measResultSCG_EUTRA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *scgFailureInfoEUTRA;
	struct DRX_Config	*drx_ConfigMCG;	/* OPTIONAL */
	struct CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA {
		ARFCN_ValueEUTRA_t	 eutraFrequency;
		EUTRA_PhysCellId_t	 cellForWhichToReportCGI_EUTRA;
		CGI_InfoEUTRA_t	 cgi_InfoEUTRA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultReportCGI_EUTRA;
	struct MeasResultCellListSFTD_EUTRA	*measResultCellListSFTD_EUTRA;	/* OPTIONAL */
	struct FR_InfoList	*fr_InfoListMCG;	/* OPTIONAL */
	struct CG_ConfigInfo_v1560_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CG_ConfigInfo_v1560_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureTypeEUTRA_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CG_ConfigInfo_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_CG_ConfigInfo_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_CG_ConfigInfo_v1560_IEs_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DRX-Config.h"
#include "MeasResultCellListSFTD-EUTRA.h"
#include "FR-InfoList.h"

#endif	/* _CG_ConfigInfo_v1560_IEs_H_ */
#include "asn_internal.h"
