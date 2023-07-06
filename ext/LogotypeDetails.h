/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LogotypeCertExtn"
 * 	found in "asn1/rfc3709-LogotypeCertExtn.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_LogotypeDetails_H_
#define	_LogotypeDetails_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HashAlgAndValue;

/* LogotypeDetails */
typedef struct LogotypeDetails {
	IA5String_t	 mediaType;
	struct LogotypeDetails__logotypeHash {
		A_SEQUENCE_OF(struct HashAlgAndValue) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} logotypeHash;
	struct LogotypeDetails__logotypeURI {
		A_SEQUENCE_OF(IA5String_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} logotypeURI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogotypeDetails_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LogotypeDetails;
extern asn_SEQUENCE_specifics_t asn_SPC_LogotypeDetails_specs_1;
extern asn_TYPE_member_t asn_MBR_LogotypeDetails_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HashAlgAndValue.h"

#endif	/* _LogotypeDetails_H_ */
#include <asn_internal.h>
