/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "TBSCertificate.h"

static int asn_DFL_2_cmp_0(const void *sptr) {
	const Version_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	long value;
	if(asn_INTEGER2long(st, &value))
		return -1;
	return (value != 0);
}
static int asn_DFL_2_set_0(void **sptr) {
	Version_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	return asn_long2INTEGER(st, 0);
}
asn_TYPE_member_t asn_MBR_TBSCertificate_1[] = {
	{ ATF_POINTER, 1, offsetof(struct TBSCertificate, version),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Version,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_2_set_0,	/* Set DEFAULT 0 */
		"version"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, serialNumber),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_CertificateSerialNumber,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"serialNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, signature),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AlgorithmIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, issuer),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"issuer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, validity),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Validity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"validity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, subject),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subject"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TBSCertificate, subjectPublicKeyInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SubjectPublicKeyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subjectPublicKeyInfo"
		},
	{ ATF_POINTER, 3, offsetof(struct TBSCertificate, issuerUniqueID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UniqueIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"issuerUniqueID"
		},
	{ ATF_POINTER, 2, offsetof(struct TBSCertificate, subjectUniqueID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UniqueIdentifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subjectUniqueID"
		},
	{ ATF_POINTER, 1, offsetof(struct TBSCertificate, extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Extensions,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extensions"
		},
};
static const ber_tlv_tag_t asn_DEF_TBSCertificate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TBSCertificate_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* serialNumber */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 4 }, /* signature */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -1, 3 }, /* rdnSequence */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -2, 2 }, /* validity */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -3, 1 }, /* rdnSequence */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -4, 0 }, /* subjectPublicKeyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* version */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 7, 0, 0 }, /* issuerUniqueID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 8, 0, 0 }, /* subjectUniqueID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 9, 0, 0 } /* extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TBSCertificate_specs_1 = {
	sizeof(struct TBSCertificate),
	offsetof(struct TBSCertificate, _asn_ctx),
	asn_MAP_TBSCertificate_tag2el_1,
	10,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TBSCertificate = {
	"TBSCertificate",
	"TBSCertificate",
	&asn_OP_SEQUENCE,
	asn_DEF_TBSCertificate_tags_1,
	sizeof(asn_DEF_TBSCertificate_tags_1)
		/sizeof(asn_DEF_TBSCertificate_tags_1[0]), /* 1 */
	asn_DEF_TBSCertificate_tags_1,	/* Same as above */
	sizeof(asn_DEF_TBSCertificate_tags_1)
		/sizeof(asn_DEF_TBSCertificate_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TBSCertificate_1,
	10,	/* Elements count */
	&asn_SPC_TBSCertificate_specs_1	/* Additional specs */
};

