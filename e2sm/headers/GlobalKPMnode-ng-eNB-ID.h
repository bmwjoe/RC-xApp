/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "E2SM-KPM-Prespec.asn"
 * 	`asn1c -D ./e2sm-kpm -gen-PER`
 */

#ifndef	_GlobalKPMnode_ng_eNB_ID_H_
#define	_GlobalKPMnode_ng_eNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GlobalngeNB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalKPMnode-ng-eNB-ID */
typedef struct GlobalKPMnode_ng_eNB_ID {
	GlobalngeNB_ID_t	 global_ng_eNB_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalKPMnode_ng_eNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalKPMnode_ng_eNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalKPMnode_ng_eNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalKPMnode_ng_eNB_ID_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalKPMnode_ng_eNB_ID_H_ */
#include <asn_internal.h>
