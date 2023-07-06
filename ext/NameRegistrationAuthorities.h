/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIXqualified88"
 * 	found in "asn1/rfc3739-PKIXqualified88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_NameRegistrationAuthorities_H_
#define	_NameRegistrationAuthorities_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GeneralName;

/* NameRegistrationAuthorities */
typedef struct NameRegistrationAuthorities {
	A_SEQUENCE_OF(struct GeneralName) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NameRegistrationAuthorities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NameRegistrationAuthorities;
extern asn_SET_OF_specifics_t asn_SPC_NameRegistrationAuthorities_specs_1;
extern asn_TYPE_member_t asn_MBR_NameRegistrationAuthorities_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeneralName.h"

#endif	/* _NameRegistrationAuthorities_H_ */
#include <asn_internal.h>
