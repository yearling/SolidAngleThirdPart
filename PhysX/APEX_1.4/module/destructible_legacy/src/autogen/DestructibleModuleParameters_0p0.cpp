// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2015 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "DestructibleModuleParameters_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace DestructibleModuleParameters_0p0NS;

const char* const DestructibleModuleParameters_0p0Factory::vptr =
    NvParameterized::getVptr<DestructibleModuleParameters_0p0, DestructibleModuleParameters_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 17;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 11, 12, 13, 14, 15, 16, 2, 3, 4, 5, 6, 7, 8, 9, 10,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 7 },
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->gpuRigidBodySettings), CHILDREN(7), 9 }, // gpuRigidBodySettings
	{ TYPE_I32, false, (size_t)(&((GRBSettings_Type*)0)->gpuDeviceOrdinal), NULL, 0 }, // gpuRigidBodySettings.gpuDeviceOrdinal
	{ TYPE_F32, false, (size_t)(&((GRBSettings_Type*)0)->meshCellSize), NULL, 0 }, // gpuRigidBodySettings.meshCellSize
	{ TYPE_F32, false, (size_t)(&((GRBSettings_Type*)0)->skinWidth), NULL, 0 }, // gpuRigidBodySettings.skinWidth
	{ TYPE_U32, false, (size_t)(&((GRBSettings_Type*)0)->nonPenSolverPosIterCount), NULL, 0 }, // gpuRigidBodySettings.nonPenSolverPosIterCount
	{ TYPE_U32, false, (size_t)(&((GRBSettings_Type*)0)->frictionSolverPosIterCount), NULL, 0 }, // gpuRigidBodySettings.frictionSolverPosIterCount
	{ TYPE_U32, false, (size_t)(&((GRBSettings_Type*)0)->frictionSolverVelIterCount), NULL, 0 }, // gpuRigidBodySettings.frictionSolverVelIterCount
	{ TYPE_F32, false, (size_t)(&((GRBSettings_Type*)0)->maxLinAcceleration), NULL, 0 }, // gpuRigidBodySettings.maxLinAcceleration
	{ TYPE_U32, false, (size_t)(&((GRBSettings_Type*)0)->gpuMemSceneSize), NULL, 0 }, // gpuRigidBodySettings.gpuMemSceneSize
	{ TYPE_U32, false, (size_t)(&((GRBSettings_Type*)0)->gpuMemTempDataSize), NULL, 0 }, // gpuRigidBodySettings.gpuMemTempDataSize
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxDynamicChunkIslandCount), NULL, 0 }, // maxDynamicChunkIslandCount
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->sortFIFOByBenefit), NULL, 0 }, // sortFIFOByBenefit
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->validBoundsPadding), NULL, 0 }, // validBoundsPadding
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->maxChunkSeparationLOD), NULL, 0 }, // maxChunkSeparationLOD
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxActorCreatesPerFrame), NULL, 0 }, // maxActorCreatesPerFrame
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->maxChunkDepthOffset), NULL, 0 }, // maxChunkDepthOffset
};


bool DestructibleModuleParameters_0p0::mBuiltFlag = false;
NvParameterized::MutexType DestructibleModuleParameters_0p0::mBuiltFlagMutex;

DestructibleModuleParameters_0p0::DestructibleModuleParameters_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &DestructibleModuleParameters_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

DestructibleModuleParameters_0p0::~DestructibleModuleParameters_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void DestructibleModuleParameters_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~DestructibleModuleParameters_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* DestructibleModuleParameters_0p0::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* DestructibleModuleParameters_0p0::getParameterDefinitionTree(void) const
{
	DestructibleModuleParameters_0p0* tmpParam = const_cast<DestructibleModuleParameters_0p0*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType DestructibleModuleParameters_0p0::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType DestructibleModuleParameters_0p0::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void DestructibleModuleParameters_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<DestructibleModuleParameters_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void DestructibleModuleParameters_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void DestructibleModuleParameters_0p0::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "This class is used for initializing the NxModuleDestructible.", true);
		ParamDefTable[0].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="gpuRigidBodySettings"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("gpuRigidBodySettings", TYPE_STRUCT, "GRBSettings", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "See the GRBParameters struct.  The user can enable/disable GPU rigid bodies, and set various parameters for them.", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="gpuRigidBodySettings.gpuDeviceOrdinal"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("gpuDeviceOrdinal", TYPE_I32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Leaving this field at its default value (-1) will disable GRB entirely.  Setting this field to -2 will allow GRB to use the default PhysX GPU as defined by the NVIDIA control panel.  Any other value will explicitly specify the GPU ordinal to use for all GRB scenes.", true);
		HintTable[1].init("shortDescription", "override automatic GPU detection and selection", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="gpuRigidBodySettings.meshCellSize"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("meshCellSize", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Size of grid cells used in mesh collision.", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="gpuRigidBodySettings.skinWidth"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("skinWidth", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Collision skin width, as in PhysX.", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="gpuRigidBodySettings.nonPenSolverPosIterCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("nonPenSolverPosIterCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Number of non-penetration solver iterations.", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="gpuRigidBodySettings.frictionSolverPosIterCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("frictionSolverPosIterCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Number of friction solver position iterations.", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="gpuRigidBodySettings.frictionSolverVelIterCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("frictionSolverVelIterCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Number of friction solver velocity iterations.", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="gpuRigidBodySettings.maxLinAcceleration"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("maxLinAcceleration", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Maximum linear acceleration", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="gpuRigidBodySettings.gpuMemSceneSize"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("gpuMemSceneSize", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Amount (in MB) of GPU memory to allocate for GRB scene data (shapes, actors etc)", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="gpuRigidBodySettings.gpuMemTempDataSize"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("gpuMemTempDataSize", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Amount (in MB) of GPU memory to allocate for GRB temporary data (broadphase pairs, contacts etc)", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="maxDynamicChunkIslandCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("maxDynamicChunkIslandCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The maximum number of dynamic NxActors that will be allowed to be active per NxApexScene. A value of 0 (the default) is interpreted as no limit.", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="sortFIFOByBenefit"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("sortFIFOByBenefit", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Instead of keeping the maxCount youngest, use maxCount largest benefit if this is true.", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="validBoundsPadding"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("validBoundsPadding", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The padding applied to the combined scene valid bounds and NxDestructible actor bounds.  The final combined and passed bounds is used to cull NxActors and GrbActors", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="maxChunkSeparationLOD"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("maxChunkSeparationLOD", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(1), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[4];
		static Hint* HintPtrTable[4] = { &HintTable[0], &HintTable[1], &HintTable[2], &HintTable[3], };
		HintTable[0].init("longDescription", "Chunk islands are destroyed after this time or separation from their origins.  This parameter sets the lifetimes and max separations within their min-max ranges.  The valid range is [0,1].  Default is 0.5.", true);
		HintTable[1].init("max", uint64_t(1), true);
		HintTable[2].init("min", uint64_t(0), true);
		HintTable[3].init("shortDescription", "Every destructible asset defines a min and max lifetime, and maximum separation distance for its chunks.", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 4);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="maxActorCreatesPerFrame"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("maxActorCreatesPerFrame", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Lets the user throttle the number of SDK actor creates per frame (per scene) due to destruction, as this can be quite costly. The default is 0xffffffff (unlimited).", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="maxChunkDepthOffset"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("maxChunkDepthOffset", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If maxChunkDepthOffset = 0, all chunks can be fractured.  If maxChunkDepthOffset = 1, the highest level (smallest) chunks are eliminated, etc.  This prevents too many chunks from being formed.  In other words, the higher maxChunkDepthOffset, the lower the LOD.", true);
		HintTable[1].init("shortDescription", "Effectively eliminates the higher level (smaller) chunks from NxDestructibleAssets (see NxDestructibleAsset).", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[7];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(11);
		Children[2] = PDEF_PTR(12);
		Children[3] = PDEF_PTR(13);
		Children[4] = PDEF_PTR(14);
		Children[5] = PDEF_PTR(15);
		Children[6] = PDEF_PTR(16);

		ParamDefTable[0].setChildren(Children, 7);
	}

	// SetChildren for: nodeIndex=1, longName="gpuRigidBodySettings"
	{
		static Definition* Children[9];
		Children[0] = PDEF_PTR(2);
		Children[1] = PDEF_PTR(3);
		Children[2] = PDEF_PTR(4);
		Children[3] = PDEF_PTR(5);
		Children[4] = PDEF_PTR(6);
		Children[5] = PDEF_PTR(7);
		Children[6] = PDEF_PTR(8);
		Children[7] = PDEF_PTR(9);
		Children[8] = PDEF_PTR(10);

		ParamDefTable[1].setChildren(Children, 9);
	}

	mBuiltFlag = true;

}
void DestructibleModuleParameters_0p0::initStrings(void)
{
}

void DestructibleModuleParameters_0p0::initDynamicArrays(void)
{
}

void DestructibleModuleParameters_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	gpuRigidBodySettings.gpuDeviceOrdinal = int32_t(-1);
	gpuRigidBodySettings.meshCellSize = float(0.25);
	gpuRigidBodySettings.skinWidth = float(0.01);
	gpuRigidBodySettings.nonPenSolverPosIterCount = uint32_t(9);
	gpuRigidBodySettings.frictionSolverPosIterCount = uint32_t(3);
	gpuRigidBodySettings.frictionSolverVelIterCount = uint32_t(3);
	gpuRigidBodySettings.maxLinAcceleration = float(PX_MAX_F32);
	gpuRigidBodySettings.gpuMemSceneSize = uint32_t(64);
	gpuRigidBodySettings.gpuMemTempDataSize = uint32_t(192);
	maxDynamicChunkIslandCount = uint32_t(0);
	sortFIFOByBenefit = bool(false);
	validBoundsPadding = float(0);
	maxChunkSeparationLOD = float(0.5);
	maxActorCreatesPerFrame = uint32_t(UINT32_MAX);
	maxChunkDepthOffset = uint32_t(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void DestructibleModuleParameters_0p0::initReferences(void)
{
}

void DestructibleModuleParameters_0p0::freeDynamicArrays(void)
{
}

void DestructibleModuleParameters_0p0::freeStrings(void)
{
}

void DestructibleModuleParameters_0p0::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia
