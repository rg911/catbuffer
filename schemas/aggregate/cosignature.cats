import "types.cats"

# cosignature attached to an aggregate transaction
struct Cosignature
	# cosigner public key
	signer = Key

	# cosigner signature
	signature = Signature

# cosignature detached from an aggregate transaction
struct DetachedCosignature
	inline Cosignature

	# hash of the aggregate transaction that is signed by this cosignature
	parentHash = Hash256
