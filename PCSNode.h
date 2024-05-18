#ifndef PCSNODE_H
#define PCSNODE_H

#include <cstdint>

namespace Azul
{
	class PCSNode
	{
	public:
		static const unsigned int NAME_SIZE = 32;
		static const unsigned int MAJOR_VERSION = 5;
		static const unsigned int MINOR_VERSION = 0;

	public:
		enum class Code : uint32_t
		{
			SUCCESS,
			FAIL_NULL_PTR,
			FAIL_RETURN_NOT_INITIALIZED
		};


	public:
		PCSNode();
		PCSNode(const PCSNode &in);
		PCSNode(PCSNode *const pInParent,
				PCSNode *const pInChild,
				PCSNode *const pInNextSibling,
				PCSNode *const pInPrevSibling,
				const char *const pInName);
		PCSNode(const char *const pInName);
		virtual ~PCSNode();

		PCSNode &operator = (const PCSNode &in);

		void SetParent(PCSNode *const pIn);
		void SetChild(PCSNode *const pIn);
		void SetNextSibling(PCSNode *const pIn);
		void SetPrevSibling(PCSNode *const pIn);
		void SetForward(PCSNode *const pIn);
		void SetReverse(PCSNode *const pIn);

		PCSNode *GetParent(void) const;
		PCSNode *GetChild(void) const;
		PCSNode *GetNextSibling(void) const;
		PCSNode *GetPrevSibling(void) const;
		PCSNode *GetForward(void) const;
		PCSNode *GetReverse(void) const;

		Code SetName(const char *const pInName);
		Code GetName(char *const pOutBuffer, unsigned int sizeOutBuffer) const;

		void PrintNode() const;
		void PrintChildren() const;
		void PrintSiblings() const;

		int GetNumSiblings() const;
		int GetNumChildren() const;

	private:
		PCSNode *pParent;
		PCSNode *pChild;
		PCSNode *pNextSibling;
		PCSNode *pPrevSibling;
		PCSNode *pForward;
		PCSNode *pReverse;

		char     pName[PCSNode::NAME_SIZE];
	};

}

#endif
