/**
* @file include/llvmir2hll/analysis/alias_analysis/alias_analyses/basic_alias_analysis.h
* @brief A basic alias analysis.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_ANALYSIS_ALIAS_ANALYSIS_ALIAS_ANALYSES_BASIC_ALIAS_ANALYSIS_H
#define LLVMIR2HLL_ANALYSIS_ALIAS_ANALYSIS_ALIAS_ANALYSES_BASIC_ALIAS_ANALYSIS_H

#include <string>

#include "llvmir2hll/analysis/alias_analysis/alias_analysis.h"
#include "llvmir2hll/support/smart_ptr.h"

namespace llvmir2hll {

class Module;

/**
* @brief A basic alias analysis.
*
* Use create() to create instances. Instances of this class have
* reference object semantics.
*/
class BasicAliasAnalysis: public AliasAnalysis {
public:
	virtual ~BasicAliasAnalysis() override;

	static ShPtr<AliasAnalysis> create();

	virtual void init(ShPtr<Module> module) override;
	virtual std::string getId() const override;

private:
	BasicAliasAnalysis();
};

} // namespace llvmir2hll

#endif
