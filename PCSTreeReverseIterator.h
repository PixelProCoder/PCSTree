#ifndef PCSTREE_REVERSE_ITERATOR_H
#define PCSTREE_REVERSE_ITERATOR_H

#include "PCSTreeIterator.h"

namespace Azul
{
	class PCSTreeReverseIterator : public PCSTreeIterator
	{
	public:
		PCSTreeReverseIterator(PCSNode *rootNode);

		PCSTreeReverseIterator() = delete;
		PCSTreeReverseIterator(const PCSTreeReverseIterator &) = delete;
		PCSTreeReverseIterator &operator = (const PCSTreeReverseIterator &) = delete;
		virtual ~PCSTreeReverseIterator() = default;

		virtual PCSNode *First() override;
		virtual PCSNode *Next() override;
		virtual bool IsDone() override;
		virtual PCSNode *Current() override;

	private:
		PCSNode *root;
		PCSNode *current;
		PCSNode *prevNode;
	};
}

#endif