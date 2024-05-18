#ifndef PCSTREE_H
#define PCSTREE_H

namespace Azul
{
	class PCSNode;

	class PCSTree
	{
	public:
		struct Info
		{
			int currNumNodes;
			int maxNumNodes;
			int currNumLevels;
			int maxNumLevels;
		};

	public:
		PCSTree();
		PCSTree(const PCSTree &in) = delete;
		PCSTree &operator = (const PCSTree &in) = delete;
		~PCSTree();

		PCSNode *GetRoot() const;

		void Insert(PCSNode *const pInNode, PCSNode *const pParent);

		void Remove(PCSNode *const pInNode);
		void RemoveNodeAux(PCSNode* const pInNode);

		void GetInfo(Info &info) const;
		void Print() const;
		void PrintAux(PCSNode* pNode) const;

		int CalculateNumLevels(const PCSNode* const pNode, int currLevel, int maxLevel) const;

	private:
		Info	mInfo;
		PCSNode *pRoot;

	};
}

#endif
