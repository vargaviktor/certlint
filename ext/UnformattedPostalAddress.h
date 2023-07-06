/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_UnformattedPostalAddress_H_
#define	_UnformattedPostalAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include <TeletexString.h>
#include <PrintableString.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum UnformattedPostalAddress_PR {
	UnformattedPostalAddress_PR_printable_address,	/* Member printable_address is present */
	UnformattedPostalAddress_PR_teletex_string,	/* Member teletex_string is present */
} UnformattedPostalAddress_PR;

/* UnformattedPostalAddress */
typedef struct UnformattedPostalAddress {
	struct UnformattedPostalAddress__printable_address {
		A_SEQUENCE_OF(PrintableString_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *printable_address;
	TeletexString_t	*teletex_string	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pUnformattedPostalAddress, UnformattedPostalAddress_PR_x) */
	unsigned int _presence_map
		[((2+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UnformattedPostalAddress_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnformattedPostalAddress;

#ifdef __cplusplus
}
#endif

#endif	/* _UnformattedPostalAddress_H_ */
#include <asn_internal.h>
