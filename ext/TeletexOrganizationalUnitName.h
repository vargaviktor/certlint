/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_TeletexOrganizationalUnitName_H_
#define	_TeletexOrganizationalUnitName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <TeletexString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TeletexOrganizationalUnitName */
typedef TeletexString_t	 TeletexOrganizationalUnitName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TeletexOrganizationalUnitName;
asn_struct_free_f TeletexOrganizationalUnitName_free;
asn_struct_print_f TeletexOrganizationalUnitName_print;
asn_constr_check_f TeletexOrganizationalUnitName_constraint;
ber_type_decoder_f TeletexOrganizationalUnitName_decode_ber;
der_type_encoder_f TeletexOrganizationalUnitName_encode_der;
xer_type_decoder_f TeletexOrganizationalUnitName_decode_xer;
xer_type_encoder_f TeletexOrganizationalUnitName_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TeletexOrganizationalUnitName_H_ */
#include <asn_internal.h>
