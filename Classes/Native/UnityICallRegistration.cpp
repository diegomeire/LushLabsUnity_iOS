void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

		//System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_IsBlittable();

		//System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf(System.Type)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();

		//System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();

	//End Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

	//Start Registrations for type : Unity.Jobs.JobHandle

		//System.Void Unity.Jobs.JobHandle::CombineDependenciesInternal3_Injected(Unity.Jobs.JobHandle&,Unity.Jobs.JobHandle&,Unity.Jobs.JobHandle&,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_JobHandle_CombineDependenciesInternal3_Injected();
		Register_Unity_Jobs_JobHandle_CombineDependenciesInternal3_Injected();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobsAndComplete(Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();

	//End Registrations for type : Unity.Jobs.JobHandle

	//Start Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

		//System.Boolean Unity.Jobs.LowLevel.Unsafe.JobsUtility::GetWorkStealingRange(Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.Int32&,System.Int32&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();

		//System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility::CreateJobReflectionData(System.Type,System.Type,System.Object,System.Object,System.Object)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::ScheduleParallelFor_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Int32,System.Int32,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::Schedule_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();

	//End Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

	//Start Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

		//System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker();

	//End Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

	//Start Registrations for type : UnityEngine.Animation

		//System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
		void Register_UnityEngine_Animation_PlayDefaultAnimation();
		Register_UnityEngine_Animation_PlayDefaultAnimation();

		//System.Boolean UnityEngine.Animation::get_isPlaying()
		void Register_UnityEngine_Animation_get_isPlaying();
		Register_UnityEngine_Animation_get_isPlaying();

		//System.Int32 UnityEngine.Animation::GetStateCount()
		void Register_UnityEngine_Animation_GetStateCount();
		Register_UnityEngine_Animation_GetStateCount();

		//System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
		void Register_UnityEngine_Animation_set_clip();
		Register_UnityEngine_Animation_set_clip();

		//UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
		void Register_UnityEngine_Animation_GetStateAtIndex();
		Register_UnityEngine_Animation_GetStateAtIndex();

	//End Registrations for type : UnityEngine.Animation

	//Start Registrations for type : UnityEngine.AnimationClip

		//System.Array UnityEngine.AnimationClip::GetEventsInternal()
		void Register_UnityEngine_AnimationClip_GetEventsInternal();
		Register_UnityEngine_AnimationClip_GetEventsInternal();

		//System.Boolean UnityEngine.AnimationClip::get_empty()
		void Register_UnityEngine_AnimationClip_get_empty();
		Register_UnityEngine_AnimationClip_get_empty();

		//System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
		void Register_UnityEngine_AnimationClip_get_hasGenericRootTransform();
		Register_UnityEngine_AnimationClip_get_hasGenericRootTransform();

		//System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
		void Register_UnityEngine_AnimationClip_get_hasMotionCurves();
		Register_UnityEngine_AnimationClip_get_hasMotionCurves();

		//System.Boolean UnityEngine.AnimationClip::get_hasMotionFloatCurves()
		void Register_UnityEngine_AnimationClip_get_hasMotionFloatCurves();
		Register_UnityEngine_AnimationClip_get_hasMotionFloatCurves();

		//System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
		void Register_UnityEngine_AnimationClip_get_hasRootCurves();
		Register_UnityEngine_AnimationClip_get_hasRootCurves();

		//System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
		void Register_UnityEngine_AnimationClip_get_hasRootMotion();
		Register_UnityEngine_AnimationClip_get_hasRootMotion();

		//System.Boolean UnityEngine.AnimationClip::get_humanMotion()
		void Register_UnityEngine_AnimationClip_get_humanMotion();
		Register_UnityEngine_AnimationClip_get_humanMotion();

		//System.Boolean UnityEngine.AnimationClip::get_legacy()
		void Register_UnityEngine_AnimationClip_get_legacy();
		Register_UnityEngine_AnimationClip_get_legacy();

		//System.Single UnityEngine.AnimationClip::get_frameRate()
		void Register_UnityEngine_AnimationClip_get_frameRate();
		Register_UnityEngine_AnimationClip_get_frameRate();

		//System.Single UnityEngine.AnimationClip::get_length()
		void Register_UnityEngine_AnimationClip_get_length();
		Register_UnityEngine_AnimationClip_get_length();

		//System.Single UnityEngine.AnimationClip::get_startTime()
		void Register_UnityEngine_AnimationClip_get_startTime();
		Register_UnityEngine_AnimationClip_get_startTime();

		//System.Single UnityEngine.AnimationClip::get_stopTime()
		void Register_UnityEngine_AnimationClip_get_stopTime();
		Register_UnityEngine_AnimationClip_get_stopTime();

		//System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
		void Register_UnityEngine_AnimationClip_AddEventInternal();
		Register_UnityEngine_AnimationClip_AddEventInternal();

		//System.Void UnityEngine.AnimationClip::ClearCurves()
		void Register_UnityEngine_AnimationClip_ClearCurves();
		Register_UnityEngine_AnimationClip_ClearCurves();

		//System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
		void Register_UnityEngine_AnimationClip_EnsureQuaternionContinuity();
		Register_UnityEngine_AnimationClip_EnsureQuaternionContinuity();

		//System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
		void Register_UnityEngine_AnimationClip_Internal_CreateAnimationClip();
		Register_UnityEngine_AnimationClip_Internal_CreateAnimationClip();

		//System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
		void Register_UnityEngine_AnimationClip_SampleAnimation();
		Register_UnityEngine_AnimationClip_SampleAnimation();

		//System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
		void Register_UnityEngine_AnimationClip_SetCurve();
		Register_UnityEngine_AnimationClip_SetCurve();

		//System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
		void Register_UnityEngine_AnimationClip_SetEventsInternal();
		Register_UnityEngine_AnimationClip_SetEventsInternal();

		//System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_AnimationClip_get_localBounds_Injected();
		Register_UnityEngine_AnimationClip_get_localBounds_Injected();

		//System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
		void Register_UnityEngine_AnimationClip_set_frameRate();
		Register_UnityEngine_AnimationClip_set_frameRate();

		//System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
		void Register_UnityEngine_AnimationClip_set_legacy();
		Register_UnityEngine_AnimationClip_set_legacy();

		//System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_AnimationClip_set_localBounds_Injected();
		Register_UnityEngine_AnimationClip_set_localBounds_Injected();

		//System.Void UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)
		void Register_UnityEngine_AnimationClip_set_wrapMode();
		Register_UnityEngine_AnimationClip_set_wrapMode();

		//UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
		void Register_UnityEngine_AnimationClip_get_wrapMode();
		Register_UnityEngine_AnimationClip_get_wrapMode();

	//End Registrations for type : UnityEngine.AnimationClip

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals();
		Register_UnityEngine_AnimationCurve_Internal_Equals();

		//System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
		void Register_UnityEngine_AnimationCurve_AddKey();
		Register_UnityEngine_AnimationCurve_AddKey();

		//System.Int32 UnityEngine.AnimationCurve::AddKey_Internal_Injected(UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();
		Register_UnityEngine_AnimationCurve_AddKey_Internal_Injected();

		//System.Int32 UnityEngine.AnimationCurve::MoveKey_Injected(System.Int32,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_MoveKey_Injected();
		Register_UnityEngine_AnimationCurve_MoveKey_Injected();

		//System.Int32 UnityEngine.AnimationCurve::get_length()
		void Register_UnityEngine_AnimationCurve_get_length();
		Register_UnityEngine_AnimationCurve_get_length();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Internal_Create();
		Register_UnityEngine_AnimationCurve_Internal_Create();

		//System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
		void Register_UnityEngine_AnimationCurve_Evaluate();
		Register_UnityEngine_AnimationCurve_Evaluate();

		//System.Void UnityEngine.AnimationCurve::GetKey_Injected(System.Int32,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_GetKey_Injected();
		Register_UnityEngine_AnimationCurve_GetKey_Injected();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

		//System.Void UnityEngine.AnimationCurve::RemoveKey(System.Int32)
		void Register_UnityEngine_AnimationCurve_RemoveKey();
		Register_UnityEngine_AnimationCurve_RemoveKey();

		//System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_SetKeys();
		Register_UnityEngine_AnimationCurve_SetKeys();

		//System.Void UnityEngine.AnimationCurve::SmoothTangents(System.Int32,System.Single)
		void Register_UnityEngine_AnimationCurve_SmoothTangents();
		Register_UnityEngine_AnimationCurve_SmoothTangents();

		//UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
		void Register_UnityEngine_AnimationCurve_GetKeys();
		Register_UnityEngine_AnimationCurve_GetKeys();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Animator

		//System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
		void Register_UnityEngine_Animator_GetBoolID();
		Register_UnityEngine_Animator_GetBoolID();

		//System.Boolean UnityEngine.Animator::GetBoolString(System.String)
		void Register_UnityEngine_Animator_GetBoolString();
		Register_UnityEngine_Animator_GetBoolString();

		//System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
		void Register_UnityEngine_Animator_HasState();
		Register_UnityEngine_Animator_HasState();

		//System.Boolean UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)
		void Register_UnityEngine_Animator_IsBoneTransform();
		Register_UnityEngine_Animator_IsBoneTransform();

		//System.Boolean UnityEngine.Animator::IsInIKPass()
		void Register_UnityEngine_Animator_IsInIKPass();
		Register_UnityEngine_Animator_IsInIKPass();

		//System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
		void Register_UnityEngine_Animator_IsInTransition();
		Register_UnityEngine_Animator_IsInTransition();

		//System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
		void Register_UnityEngine_Animator_IsParameterControlledByCurveID();
		Register_UnityEngine_Animator_IsParameterControlledByCurveID();

		//System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
		void Register_UnityEngine_Animator_IsParameterControlledByCurveString();
		Register_UnityEngine_Animator_IsParameterControlledByCurveString();

		//System.Boolean UnityEngine.Animator::get_allowConstantClipSamplingOptimization()
		void Register_UnityEngine_Animator_get_allowConstantClipSamplingOptimization();
		Register_UnityEngine_Animator_get_allowConstantClipSamplingOptimization();

		//System.Boolean UnityEngine.Animator::get_applyRootMotion()
		void Register_UnityEngine_Animator_get_applyRootMotion();
		Register_UnityEngine_Animator_get_applyRootMotion();

		//System.Boolean UnityEngine.Animator::get_fireEvents()
		void Register_UnityEngine_Animator_get_fireEvents();
		Register_UnityEngine_Animator_get_fireEvents();

		//System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
		void Register_UnityEngine_Animator_get_hasBoundPlayables();
		Register_UnityEngine_Animator_get_hasBoundPlayables();

		//System.Boolean UnityEngine.Animator::get_hasRootMotion()
		void Register_UnityEngine_Animator_get_hasRootMotion();
		Register_UnityEngine_Animator_get_hasRootMotion();

		//System.Boolean UnityEngine.Animator::get_hasTransformHierarchy()
		void Register_UnityEngine_Animator_get_hasTransformHierarchy();
		Register_UnityEngine_Animator_get_hasTransformHierarchy();

		//System.Boolean UnityEngine.Animator::get_isHuman()
		void Register_UnityEngine_Animator_get_isHuman();
		Register_UnityEngine_Animator_get_isHuman();

		//System.Boolean UnityEngine.Animator::get_isInitialized()
		void Register_UnityEngine_Animator_get_isInitialized();
		Register_UnityEngine_Animator_get_isInitialized();

		//System.Boolean UnityEngine.Animator::get_isMatchingTarget()
		void Register_UnityEngine_Animator_get_isMatchingTarget();
		Register_UnityEngine_Animator_get_isMatchingTarget();

		//System.Boolean UnityEngine.Animator::get_isOptimizable()
		void Register_UnityEngine_Animator_get_isOptimizable();
		Register_UnityEngine_Animator_get_isOptimizable();

		//System.Boolean UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()
		void Register_UnityEngine_Animator_get_isRootPositionOrRotationControlledByCurves();
		Register_UnityEngine_Animator_get_isRootPositionOrRotationControlledByCurves();

		//System.Boolean UnityEngine.Animator::get_keepAnimatorControllerStateOnDisable()
		void Register_UnityEngine_Animator_get_keepAnimatorControllerStateOnDisable();
		Register_UnityEngine_Animator_get_keepAnimatorControllerStateOnDisable();

		//System.Boolean UnityEngine.Animator::get_layersAffectMassCenter()
		void Register_UnityEngine_Animator_get_layersAffectMassCenter();
		Register_UnityEngine_Animator_get_layersAffectMassCenter();

		//System.Boolean UnityEngine.Animator::get_linearVelocityBlending()
		void Register_UnityEngine_Animator_get_linearVelocityBlending();
		Register_UnityEngine_Animator_get_linearVelocityBlending();

		//System.Boolean UnityEngine.Animator::get_logWarnings()
		void Register_UnityEngine_Animator_get_logWarnings();
		Register_UnityEngine_Animator_get_logWarnings();

		//System.Boolean UnityEngine.Animator::get_stabilizeFeet()
		void Register_UnityEngine_Animator_get_stabilizeFeet();
		Register_UnityEngine_Animator_get_stabilizeFeet();

		//System.Boolean UnityEngine.Animator::get_supportsOnAnimatorMove()
		void Register_UnityEngine_Animator_get_supportsOnAnimatorMove();
		Register_UnityEngine_Animator_get_supportsOnAnimatorMove();

		//System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
		void Register_UnityEngine_Animator_GetAnimatorClipInfoCount();
		Register_UnityEngine_Animator_GetAnimatorClipInfoCount();

		//System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
		void Register_UnityEngine_Animator_GetIntegerID();
		Register_UnityEngine_Animator_GetIntegerID();

		//System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
		void Register_UnityEngine_Animator_GetIntegerString();
		Register_UnityEngine_Animator_GetIntegerString();

		//System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
		void Register_UnityEngine_Animator_GetLayerIndex();
		Register_UnityEngine_Animator_GetLayerIndex();

		//System.Int32 UnityEngine.Animator::StringToHash(System.String)
		void Register_UnityEngine_Animator_StringToHash();
		Register_UnityEngine_Animator_StringToHash();

		//System.Int32 UnityEngine.Animator::get_layerCount()
		void Register_UnityEngine_Animator_get_layerCount();
		Register_UnityEngine_Animator_get_layerCount();

		//System.Int32 UnityEngine.Animator::get_parameterCount()
		void Register_UnityEngine_Animator_get_parameterCount();
		Register_UnityEngine_Animator_get_parameterCount();

		//System.Single UnityEngine.Animator::GetFloatID(System.Int32)
		void Register_UnityEngine_Animator_GetFloatID();
		Register_UnityEngine_Animator_GetFloatID();

		//System.Single UnityEngine.Animator::GetFloatString(System.String)
		void Register_UnityEngine_Animator_GetFloatString();
		Register_UnityEngine_Animator_GetFloatString();

		//System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
		void Register_UnityEngine_Animator_GetGoalWeightPosition();
		Register_UnityEngine_Animator_GetGoalWeightPosition();

		//System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
		void Register_UnityEngine_Animator_GetGoalWeightRotation();
		Register_UnityEngine_Animator_GetGoalWeightRotation();

		//System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
		void Register_UnityEngine_Animator_GetHintWeightPosition();
		Register_UnityEngine_Animator_GetHintWeightPosition();

		//System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
		void Register_UnityEngine_Animator_GetLayerWeight();
		Register_UnityEngine_Animator_GetLayerWeight();

		//System.Single UnityEngine.Animator::GetRecorderStartTime()
		void Register_UnityEngine_Animator_GetRecorderStartTime();
		Register_UnityEngine_Animator_GetRecorderStartTime();

		//System.Single UnityEngine.Animator::GetRecorderStopTime()
		void Register_UnityEngine_Animator_GetRecorderStopTime();
		Register_UnityEngine_Animator_GetRecorderStopTime();

		//System.Single UnityEngine.Animator::get_feetPivotActive()
		void Register_UnityEngine_Animator_get_feetPivotActive();
		Register_UnityEngine_Animator_get_feetPivotActive();

		//System.Single UnityEngine.Animator::get_gravityWeight()
		void Register_UnityEngine_Animator_get_gravityWeight();
		Register_UnityEngine_Animator_get_gravityWeight();

		//System.Single UnityEngine.Animator::get_humanScale()
		void Register_UnityEngine_Animator_get_humanScale();
		Register_UnityEngine_Animator_get_humanScale();

		//System.Single UnityEngine.Animator::get_leftFeetBottomHeight()
		void Register_UnityEngine_Animator_get_leftFeetBottomHeight();
		Register_UnityEngine_Animator_get_leftFeetBottomHeight();

		//System.Single UnityEngine.Animator::get_pivotWeight()
		void Register_UnityEngine_Animator_get_pivotWeight();
		Register_UnityEngine_Animator_get_pivotWeight();

		//System.Single UnityEngine.Animator::get_playbackTime()
		void Register_UnityEngine_Animator_get_playbackTime();
		Register_UnityEngine_Animator_get_playbackTime();

		//System.Single UnityEngine.Animator::get_rightFeetBottomHeight()
		void Register_UnityEngine_Animator_get_rightFeetBottomHeight();
		Register_UnityEngine_Animator_get_rightFeetBottomHeight();

		//System.Single UnityEngine.Animator::get_speed()
		void Register_UnityEngine_Animator_get_speed();
		Register_UnityEngine_Animator_get_speed();

		//System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
		void Register_UnityEngine_Animator_GetAnimatorStateName();
		Register_UnityEngine_Animator_GetAnimatorStateName();

		//System.String UnityEngine.Animator::GetLayerName(System.Int32)
		void Register_UnityEngine_Animator_GetLayerName();
		Register_UnityEngine_Animator_GetLayerName();

		//System.String UnityEngine.Animator::GetStats()
		void Register_UnityEngine_Animator_GetStats();
		Register_UnityEngine_Animator_GetStats();

		//System.String UnityEngine.Animator::ResolveHash(System.Int32)
		void Register_UnityEngine_Animator_ResolveHash();
		Register_UnityEngine_Animator_ResolveHash();

		//System.Void UnityEngine.Animator::ApplyBuiltinRootMotion()
		void Register_UnityEngine_Animator_ApplyBuiltinRootMotion();
		Register_UnityEngine_Animator_ApplyBuiltinRootMotion();

		//System.Void UnityEngine.Animator::ClearInternalControllerPlayable()
		void Register_UnityEngine_Animator_ClearInternalControllerPlayable();
		Register_UnityEngine_Animator_ClearInternalControllerPlayable();

		//System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
		void Register_UnityEngine_Animator_CrossFade();
		Register_UnityEngine_Animator_CrossFade();

		//System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
		void Register_UnityEngine_Animator_CrossFadeInFixedTime();
		Register_UnityEngine_Animator_CrossFadeInFixedTime();

		//System.Void UnityEngine.Animator::EvaluateController(System.Single)
		void Register_UnityEngine_Animator_EvaluateController();
		Register_UnityEngine_Animator_EvaluateController();

		//System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
		void Register_UnityEngine_Animator_GetAnimatorClipInfoInternal();
		Register_UnityEngine_Animator_GetAnimatorClipInfoInternal();

		//System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
		void Register_UnityEngine_Animator_GetAnimatorStateInfo();
		Register_UnityEngine_Animator_GetAnimatorStateInfo();

		//System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
		void Register_UnityEngine_Animator_GetAnimatorTransitionInfo();
		Register_UnityEngine_Animator_GetAnimatorTransitionInfo();

		//System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Animator_GetCurrentGraph();
		Register_UnityEngine_Animator_GetCurrentGraph();

		//System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_GetGoalPosition_Injected();
		Register_UnityEngine_Animator_GetGoalPosition_Injected();

		//System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_GetGoalRotation_Injected();
		Register_UnityEngine_Animator_GetGoalRotation_Injected();

		//System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_GetHintPosition_Injected();
		Register_UnityEngine_Animator_GetHintPosition_Injected();

		//System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
		void Register_UnityEngine_Animator_InterruptMatchTarget();
		Register_UnityEngine_Animator_InterruptMatchTarget();

		//System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
		void Register_UnityEngine_Animator_MatchTarget_Injected();
		Register_UnityEngine_Animator_MatchTarget_Injected();

		//System.Void UnityEngine.Animator::OnCullingModeChanged()
		void Register_UnityEngine_Animator_OnCullingModeChanged();
		Register_UnityEngine_Animator_OnCullingModeChanged();

		//System.Void UnityEngine.Animator::OnUpdateModeChanged()
		void Register_UnityEngine_Animator_OnUpdateModeChanged();
		Register_UnityEngine_Animator_OnUpdateModeChanged();

		//System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
		void Register_UnityEngine_Animator_Play();
		Register_UnityEngine_Animator_Play();

		//System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
		void Register_UnityEngine_Animator_PlayInFixedTime();
		Register_UnityEngine_Animator_PlayInFixedTime();

		//System.Void UnityEngine.Animator::Rebind(System.Boolean)
		void Register_UnityEngine_Animator_Rebind();
		Register_UnityEngine_Animator_Rebind();

		//System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
		void Register_UnityEngine_Animator_ResetTriggerID();
		Register_UnityEngine_Animator_ResetTriggerID();

		//System.Void UnityEngine.Animator::ResetTriggerString(System.String)
		void Register_UnityEngine_Animator_ResetTriggerString();
		Register_UnityEngine_Animator_ResetTriggerString();

		//System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_SetBoneLocalRotationInternal_Injected();
		Register_UnityEngine_Animator_SetBoneLocalRotationInternal_Injected();

		//System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
		void Register_UnityEngine_Animator_SetBoolID();
		Register_UnityEngine_Animator_SetBoolID();

		//System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
		void Register_UnityEngine_Animator_SetBoolString();
		Register_UnityEngine_Animator_SetBoolString();

		//System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
		void Register_UnityEngine_Animator_SetFloatID();
		Register_UnityEngine_Animator_SetFloatID();

		//System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
		void Register_UnityEngine_Animator_SetFloatIDDamp();
		Register_UnityEngine_Animator_SetFloatIDDamp();

		//System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
		void Register_UnityEngine_Animator_SetFloatString();
		Register_UnityEngine_Animator_SetFloatString();

		//System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
		void Register_UnityEngine_Animator_SetFloatStringDamp();
		Register_UnityEngine_Animator_SetFloatStringDamp();

		//System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_SetGoalPosition_Injected();
		Register_UnityEngine_Animator_SetGoalPosition_Injected();

		//System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_SetGoalRotation_Injected();
		Register_UnityEngine_Animator_SetGoalRotation_Injected();

		//System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
		void Register_UnityEngine_Animator_SetGoalWeightPosition();
		Register_UnityEngine_Animator_SetGoalWeightPosition();

		//System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
		void Register_UnityEngine_Animator_SetGoalWeightRotation();
		Register_UnityEngine_Animator_SetGoalWeightRotation();

		//System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_SetHintPosition_Injected();
		Register_UnityEngine_Animator_SetHintPosition_Injected();

		//System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
		void Register_UnityEngine_Animator_SetHintWeightPosition();
		Register_UnityEngine_Animator_SetHintWeightPosition();

		//System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
		void Register_UnityEngine_Animator_SetIntegerID();
		Register_UnityEngine_Animator_SetIntegerID();

		//System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
		void Register_UnityEngine_Animator_SetIntegerString();
		Register_UnityEngine_Animator_SetIntegerString();

		//System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
		void Register_UnityEngine_Animator_SetLayerWeight();
		Register_UnityEngine_Animator_SetLayerWeight();

		//System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_SetLookAtPositionInternal_Injected();
		Register_UnityEngine_Animator_SetLookAtPositionInternal_Injected();

		//System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
		void Register_UnityEngine_Animator_SetLookAtWeightInternal();
		Register_UnityEngine_Animator_SetLookAtWeightInternal();

		//System.Void UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)
		void Register_UnityEngine_Animator_SetTarget();
		Register_UnityEngine_Animator_SetTarget();

		//System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
		void Register_UnityEngine_Animator_SetTriggerID();
		Register_UnityEngine_Animator_SetTriggerID();

		//System.Void UnityEngine.Animator::SetTriggerString(System.String)
		void Register_UnityEngine_Animator_SetTriggerString();
		Register_UnityEngine_Animator_SetTriggerString();

		//System.Void UnityEngine.Animator::StartPlayback()
		void Register_UnityEngine_Animator_StartPlayback();
		Register_UnityEngine_Animator_StartPlayback();

		//System.Void UnityEngine.Animator::StartRecording(System.Int32)
		void Register_UnityEngine_Animator_StartRecording();
		Register_UnityEngine_Animator_StartRecording();

		//System.Void UnityEngine.Animator::StopPlayback()
		void Register_UnityEngine_Animator_StopPlayback();
		Register_UnityEngine_Animator_StopPlayback();

		//System.Void UnityEngine.Animator::StopRecording()
		void Register_UnityEngine_Animator_StopRecording();
		Register_UnityEngine_Animator_StopRecording();

		//System.Void UnityEngine.Animator::Update(System.Single)
		void Register_UnityEngine_Animator_Update();
		Register_UnityEngine_Animator_Update();

		//System.Void UnityEngine.Animator::WriteDefaultPose()
		void Register_UnityEngine_Animator_WriteDefaultPose();
		Register_UnityEngine_Animator_WriteDefaultPose();

		//System.Void UnityEngine.Animator::WriteDefaultValues()
		void Register_UnityEngine_Animator_WriteDefaultValues();
		Register_UnityEngine_Animator_WriteDefaultValues();

		//System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_angularVelocity_Injected();
		Register_UnityEngine_Animator_get_angularVelocity_Injected();

		//System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_bodyPositionInternal_Injected();
		Register_UnityEngine_Animator_get_bodyPositionInternal_Injected();

		//System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_get_bodyRotationInternal_Injected();
		Register_UnityEngine_Animator_get_bodyRotationInternal_Injected();

		//System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_deltaPosition_Injected();
		Register_UnityEngine_Animator_get_deltaPosition_Injected();

		//System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_get_deltaRotation_Injected();
		Register_UnityEngine_Animator_get_deltaRotation_Injected();

		//System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_pivotPosition_Injected();
		Register_UnityEngine_Animator_get_pivotPosition_Injected();

		//System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_rootPosition_Injected();
		Register_UnityEngine_Animator_get_rootPosition_Injected();

		//System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_get_rootRotation_Injected();
		Register_UnityEngine_Animator_get_rootRotation_Injected();

		//System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_targetPosition_Injected();
		Register_UnityEngine_Animator_get_targetPosition_Injected();

		//System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_get_targetRotation_Injected();
		Register_UnityEngine_Animator_get_targetRotation_Injected();

		//System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_get_velocity_Injected();
		Register_UnityEngine_Animator_get_velocity_Injected();

		//System.Void UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)
		void Register_UnityEngine_Animator_set_allowConstantClipSamplingOptimization();
		Register_UnityEngine_Animator_set_allowConstantClipSamplingOptimization();

		//System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
		void Register_UnityEngine_Animator_set_applyRootMotion();
		Register_UnityEngine_Animator_set_applyRootMotion();

		//System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
		void Register_UnityEngine_Animator_set_avatar();
		Register_UnityEngine_Animator_set_avatar();

		//System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_set_bodyPositionInternal_Injected();
		Register_UnityEngine_Animator_set_bodyPositionInternal_Injected();

		//System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_set_bodyRotationInternal_Injected();
		Register_UnityEngine_Animator_set_bodyRotationInternal_Injected();

		//System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
		void Register_UnityEngine_Animator_set_cullingMode();
		Register_UnityEngine_Animator_set_cullingMode();

		//System.Void UnityEngine.Animator::set_feetPivotActive(System.Single)
		void Register_UnityEngine_Animator_set_feetPivotActive();
		Register_UnityEngine_Animator_set_feetPivotActive();

		//System.Void UnityEngine.Animator::set_fireEvents(System.Boolean)
		void Register_UnityEngine_Animator_set_fireEvents();
		Register_UnityEngine_Animator_set_fireEvents();

		//System.Void UnityEngine.Animator::set_keepAnimatorControllerStateOnDisable(System.Boolean)
		void Register_UnityEngine_Animator_set_keepAnimatorControllerStateOnDisable();
		Register_UnityEngine_Animator_set_keepAnimatorControllerStateOnDisable();

		//System.Void UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)
		void Register_UnityEngine_Animator_set_layersAffectMassCenter();
		Register_UnityEngine_Animator_set_layersAffectMassCenter();

		//System.Void UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)
		void Register_UnityEngine_Animator_set_linearVelocityBlending();
		Register_UnityEngine_Animator_set_linearVelocityBlending();

		//System.Void UnityEngine.Animator::set_logWarnings(System.Boolean)
		void Register_UnityEngine_Animator_set_logWarnings();
		Register_UnityEngine_Animator_set_logWarnings();

		//System.Void UnityEngine.Animator::set_playbackTime(System.Single)
		void Register_UnityEngine_Animator_set_playbackTime();
		Register_UnityEngine_Animator_set_playbackTime();

		//System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Animator_set_rootPosition_Injected();
		Register_UnityEngine_Animator_set_rootPosition_Injected();

		//System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Animator_set_rootRotation_Injected();
		Register_UnityEngine_Animator_set_rootRotation_Injected();

		//System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
		void Register_UnityEngine_Animator_set_runtimeAnimatorController();
		Register_UnityEngine_Animator_set_runtimeAnimatorController();

		//System.Void UnityEngine.Animator::set_speed(System.Single)
		void Register_UnityEngine_Animator_set_speed();
		Register_UnityEngine_Animator_set_speed();

		//System.Void UnityEngine.Animator::set_stabilizeFeet(System.Boolean)
		void Register_UnityEngine_Animator_set_stabilizeFeet();
		Register_UnityEngine_Animator_set_stabilizeFeet();

		//System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
		void Register_UnityEngine_Animator_set_updateMode();
		Register_UnityEngine_Animator_set_updateMode();

		//UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
		void Register_UnityEngine_Animator_GetCurrentAnimatorClipInfo();
		Register_UnityEngine_Animator_GetCurrentAnimatorClipInfo();

		//UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
		void Register_UnityEngine_Animator_GetNextAnimatorClipInfo();
		Register_UnityEngine_Animator_GetNextAnimatorClipInfo();

		//UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
		void Register_UnityEngine_Animator_get_parameters();
		Register_UnityEngine_Animator_get_parameters();

		//UnityEngine.AnimatorCullingMode UnityEngine.Animator::get_cullingMode()
		void Register_UnityEngine_Animator_get_cullingMode();
		Register_UnityEngine_Animator_get_cullingMode();

		//UnityEngine.AnimatorRecorderMode UnityEngine.Animator::get_recorderMode()
		void Register_UnityEngine_Animator_get_recorderMode();
		Register_UnityEngine_Animator_get_recorderMode();

		//UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
		void Register_UnityEngine_Animator_get_updateMode();
		Register_UnityEngine_Animator_get_updateMode();

		//UnityEngine.Avatar UnityEngine.Animator::get_avatar()
		void Register_UnityEngine_Animator_get_avatar();
		Register_UnityEngine_Animator_get_avatar();

		//UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
		void Register_UnityEngine_Animator_get_runtimeAnimatorController();
		Register_UnityEngine_Animator_get_runtimeAnimatorController();

		//UnityEngine.ScriptableObject UnityEngine.Animator::GetBehaviour(System.Type)
		void Register_UnityEngine_Animator_GetBehaviour();
		Register_UnityEngine_Animator_GetBehaviour();

		//UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehaviours(System.Type)
		void Register_UnityEngine_Animator_InternalGetBehaviours();
		Register_UnityEngine_Animator_InternalGetBehaviours();

		//UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
		void Register_UnityEngine_Animator_InternalGetBehavioursByKey();
		Register_UnityEngine_Animator_InternalGetBehavioursByKey();

		//UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
		void Register_UnityEngine_Animator_GetBoneTransformInternal();
		Register_UnityEngine_Animator_GetBoneTransformInternal();

		//UnityEngine.Transform UnityEngine.Animator::get_avatarRoot()
		void Register_UnityEngine_Animator_get_avatarRoot();
		Register_UnityEngine_Animator_get_avatarRoot();

	//End Registrations for type : UnityEngine.Animator

	//Start Registrations for type : UnityEngine.Application

		//System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
		void Register_UnityEngine_Application_HasUserAuthorization();
		Register_UnityEngine_Application_HasUserAuthorization();

		//System.Boolean UnityEngine.Application::get_isPlaying()
		void Register_UnityEngine_Application_get_isPlaying();
		Register_UnityEngine_Application_get_isPlaying();

		//System.String UnityEngine.Application::get_cloudProjectId()
		void Register_UnityEngine_Application_get_cloudProjectId();
		Register_UnityEngine_Application_get_cloudProjectId();

		//System.String UnityEngine.Application::get_persistentDataPath()
		void Register_UnityEngine_Application_get_persistentDataPath();
		Register_UnityEngine_Application_get_persistentDataPath();

		//System.String UnityEngine.Application::get_streamingAssetsPath()
		void Register_UnityEngine_Application_get_streamingAssetsPath();
		Register_UnityEngine_Application_get_streamingAssetsPath();

		//System.String UnityEngine.Application::get_temporaryCachePath()
		void Register_UnityEngine_Application_get_temporaryCachePath();
		Register_UnityEngine_Application_get_temporaryCachePath();

		//System.Void UnityEngine.Application::Quit(System.Int32)
		void Register_UnityEngine_Application_Quit();
		Register_UnityEngine_Application_Quit();

		//System.Void UnityEngine.Application::Unload()
		void Register_UnityEngine_Application_Unload();
		Register_UnityEngine_Application_Unload();

		//System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
		void Register_UnityEngine_Application_set_runInBackground();
		Register_UnityEngine_Application_set_runInBackground();

		//System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
		void Register_UnityEngine_Application_set_targetFrameRate();
		Register_UnityEngine_Application_set_targetFrameRate();

		//UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
		void Register_UnityEngine_Application_RequestUserAuthorization();
		Register_UnityEngine_Application_RequestUserAuthorization();

		//UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
		void Register_UnityEngine_Application_get_platform();
		Register_UnityEngine_Application_get_platform();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AssetBundle

		//System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
		void Register_UnityEngine_AssetBundle_Unload();
		Register_UnityEngine_AssetBundle_Unload();

		//UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromFileAsync_Internal(System.String,System.UInt32,System.UInt64)
		void Register_UnityEngine_AssetBundle_LoadFromFileAsync_Internal();
		Register_UnityEngine_AssetBundle_LoadFromFileAsync_Internal();

		//UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync_Internal(System.String,System.Type)
		void Register_UnityEngine_AssetBundle_LoadAssetAsync_Internal();
		Register_UnityEngine_AssetBundle_LoadAssetAsync_Internal();

		//UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetWithSubAssetsAsync_Internal(System.String,System.Type)
		void Register_UnityEngine_AssetBundle_LoadAssetWithSubAssetsAsync_Internal();
		Register_UnityEngine_AssetBundle_LoadAssetWithSubAssetsAsync_Internal();

	//End Registrations for type : UnityEngine.AssetBundle

	//Start Registrations for type : UnityEngine.AssetBundleCreateRequest

		//UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
		void Register_UnityEngine_AssetBundleCreateRequest_get_assetBundle();
		Register_UnityEngine_AssetBundleCreateRequest_get_assetBundle();

	//End Registrations for type : UnityEngine.AssetBundleCreateRequest

	//Start Registrations for type : UnityEngine.AssetBundleRequest

		//UnityEngine.Object UnityEngine.AssetBundleRequest::GetResult()
		void Register_UnityEngine_AssetBundleRequest_GetResult();
		Register_UnityEngine_AssetBundleRequest_GetResult();

		//UnityEngine.Object[] UnityEngine.AssetBundleRequest::get_allAssets()
		void Register_UnityEngine_AssetBundleRequest_get_allAssets();
		Register_UnityEngine_AssetBundleRequest_get_allAssets();

	//End Registrations for type : UnityEngine.AssetBundleRequest

	//Start Registrations for type : UnityEngine.AsyncOperation

		//System.Boolean UnityEngine.AsyncOperation::get_isDone()
		void Register_UnityEngine_AsyncOperation_get_isDone();
		Register_UnityEngine_AsyncOperation_get_isDone();

		//System.Single UnityEngine.AsyncOperation::get_progress()
		void Register_UnityEngine_AsyncOperation_get_progress();
		Register_UnityEngine_AsyncOperation_get_progress();

		//System.Void UnityEngine.AsyncOperation::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_AsyncOperation_InternalDestroy();
		Register_UnityEngine_AsyncOperation_InternalDestroy();

		//System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
		void Register_UnityEngine_AsyncOperation_set_allowSceneActivation();
		Register_UnityEngine_AsyncOperation_set_allowSceneActivation();

		//System.Void UnityEngine.AsyncOperation::set_priority(System.Int32)
		void Register_UnityEngine_AsyncOperation_set_priority();
		Register_UnityEngine_AsyncOperation_set_priority();

	//End Registrations for type : UnityEngine.AsyncOperation

	//Start Registrations for type : UnityEngine.AudioClip

		//System.Boolean UnityEngine.AudioClip::GetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
		void Register_UnityEngine_AudioClip_GetData();
		Register_UnityEngine_AudioClip_GetData();

		//System.Boolean UnityEngine.AudioClip::LoadAudioData()
		void Register_UnityEngine_AudioClip_LoadAudioData();
		Register_UnityEngine_AudioClip_LoadAudioData();

		//System.Boolean UnityEngine.AudioClip::SetData(UnityEngine.AudioClip,System.Single[],System.Int32,System.Int32)
		void Register_UnityEngine_AudioClip_SetData();
		Register_UnityEngine_AudioClip_SetData();

		//System.Boolean UnityEngine.AudioClip::UnloadAudioData()
		void Register_UnityEngine_AudioClip_UnloadAudioData();
		Register_UnityEngine_AudioClip_UnloadAudioData();

		//System.Boolean UnityEngine.AudioClip::get_ambisonic()
		void Register_UnityEngine_AudioClip_get_ambisonic();
		Register_UnityEngine_AudioClip_get_ambisonic();

		//System.Boolean UnityEngine.AudioClip::get_isReadyToPlay()
		void Register_UnityEngine_AudioClip_get_isReadyToPlay();
		Register_UnityEngine_AudioClip_get_isReadyToPlay();

		//System.Boolean UnityEngine.AudioClip::get_loadInBackground()
		void Register_UnityEngine_AudioClip_get_loadInBackground();
		Register_UnityEngine_AudioClip_get_loadInBackground();

		//System.Boolean UnityEngine.AudioClip::get_preloadAudioData()
		void Register_UnityEngine_AudioClip_get_preloadAudioData();
		Register_UnityEngine_AudioClip_get_preloadAudioData();

		//System.Int32 UnityEngine.AudioClip::get_channels()
		void Register_UnityEngine_AudioClip_get_channels();
		Register_UnityEngine_AudioClip_get_channels();

		//System.Int32 UnityEngine.AudioClip::get_frequency()
		void Register_UnityEngine_AudioClip_get_frequency();
		Register_UnityEngine_AudioClip_get_frequency();

		//System.Int32 UnityEngine.AudioClip::get_samples()
		void Register_UnityEngine_AudioClip_get_samples();
		Register_UnityEngine_AudioClip_get_samples();

		//System.Single UnityEngine.AudioClip::get_length()
		void Register_UnityEngine_AudioClip_get_length();
		Register_UnityEngine_AudioClip_get_length();

		//System.String UnityEngine.AudioClip::GetName()
		void Register_UnityEngine_AudioClip_GetName();
		Register_UnityEngine_AudioClip_GetName();

		//System.Void UnityEngine.AudioClip::CreateUserSound(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
		void Register_UnityEngine_AudioClip_CreateUserSound();
		Register_UnityEngine_AudioClip_CreateUserSound();

		//UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
		void Register_UnityEngine_AudioClip_Construct_Internal();
		Register_UnityEngine_AudioClip_Construct_Internal();

		//UnityEngine.AudioClipLoadType UnityEngine.AudioClip::get_loadType()
		void Register_UnityEngine_AudioClip_get_loadType();
		Register_UnityEngine_AudioClip_get_loadType();

		//UnityEngine.AudioDataLoadState UnityEngine.AudioClip::get_loadState()
		void Register_UnityEngine_AudioClip_get_loadState();
		Register_UnityEngine_AudioClip_get_loadState();

	//End Registrations for type : UnityEngine.AudioClip

	//Start Registrations for type : UnityEngine.AudioListener

		//System.Boolean UnityEngine.AudioListener::get_pause()
		void Register_UnityEngine_AudioListener_get_pause();
		Register_UnityEngine_AudioListener_get_pause();

		//System.Single UnityEngine.AudioListener::get_volume()
		void Register_UnityEngine_AudioListener_get_volume();
		Register_UnityEngine_AudioListener_get_volume();

		//System.Void UnityEngine.AudioListener::GetOutputDataHelper(System.Single[],System.Int32)
		void Register_UnityEngine_AudioListener_GetOutputDataHelper();
		Register_UnityEngine_AudioListener_GetOutputDataHelper();

		//System.Void UnityEngine.AudioListener::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
		void Register_UnityEngine_AudioListener_GetSpectrumDataHelper();
		Register_UnityEngine_AudioListener_GetSpectrumDataHelper();

		//System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
		void Register_UnityEngine_AudioListener_set_pause();
		Register_UnityEngine_AudioListener_set_pause();

		//System.Void UnityEngine.AudioListener::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
		void Register_UnityEngine_AudioListener_set_velocityUpdateMode();
		Register_UnityEngine_AudioListener_set_velocityUpdateMode();

		//System.Void UnityEngine.AudioListener::set_volume(System.Single)
		void Register_UnityEngine_AudioListener_set_volume();
		Register_UnityEngine_AudioListener_set_volume();

		//UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioListener::get_velocityUpdateMode()
		void Register_UnityEngine_AudioListener_get_velocityUpdateMode();
		Register_UnityEngine_AudioListener_get_velocityUpdateMode();

	//End Registrations for type : UnityEngine.AudioListener

	//Start Registrations for type : UnityEngine.AudioSettings

		//System.Boolean UnityEngine.AudioSettings::StartAudioOutput()
		void Register_UnityEngine_AudioSettings_StartAudioOutput();
		Register_UnityEngine_AudioSettings_StartAudioOutput();

		//System.Boolean UnityEngine.AudioSettings::StopAudioOutput()
		void Register_UnityEngine_AudioSettings_StopAudioOutput();
		Register_UnityEngine_AudioSettings_StopAudioOutput();

		//System.Int32 UnityEngine.AudioSettings::GetSampleRate()
		void Register_UnityEngine_AudioSettings_GetSampleRate();
		Register_UnityEngine_AudioSettings_GetSampleRate();

	//End Registrations for type : UnityEngine.AudioSettings

	//Start Registrations for type : UnityEngine.AudioSource

		//System.Boolean UnityEngine.AudioSource::GetAmbisonicDecoderFloat(System.Int32,System.Single&)
		void Register_UnityEngine_AudioSource_GetAmbisonicDecoderFloat();
		Register_UnityEngine_AudioSource_GetAmbisonicDecoderFloat();

		//System.Boolean UnityEngine.AudioSource::GetSpatializerFloat(System.Int32,System.Single&)
		void Register_UnityEngine_AudioSource_GetSpatializerFloat();
		Register_UnityEngine_AudioSource_GetSpatializerFloat();

		//System.Boolean UnityEngine.AudioSource::SetAmbisonicDecoderFloat(System.Int32,System.Single)
		void Register_UnityEngine_AudioSource_SetAmbisonicDecoderFloat();
		Register_UnityEngine_AudioSource_SetAmbisonicDecoderFloat();

		//System.Boolean UnityEngine.AudioSource::SetSpatializerFloat(System.Int32,System.Single)
		void Register_UnityEngine_AudioSource_SetSpatializerFloat();
		Register_UnityEngine_AudioSource_SetSpatializerFloat();

		//System.Boolean UnityEngine.AudioSource::get_bypassEffects()
		void Register_UnityEngine_AudioSource_get_bypassEffects();
		Register_UnityEngine_AudioSource_get_bypassEffects();

		//System.Boolean UnityEngine.AudioSource::get_bypassListenerEffects()
		void Register_UnityEngine_AudioSource_get_bypassListenerEffects();
		Register_UnityEngine_AudioSource_get_bypassListenerEffects();

		//System.Boolean UnityEngine.AudioSource::get_bypassReverbZones()
		void Register_UnityEngine_AudioSource_get_bypassReverbZones();
		Register_UnityEngine_AudioSource_get_bypassReverbZones();

		//System.Boolean UnityEngine.AudioSource::get_ignoreListenerPause()
		void Register_UnityEngine_AudioSource_get_ignoreListenerPause();
		Register_UnityEngine_AudioSource_get_ignoreListenerPause();

		//System.Boolean UnityEngine.AudioSource::get_ignoreListenerVolume()
		void Register_UnityEngine_AudioSource_get_ignoreListenerVolume();
		Register_UnityEngine_AudioSource_get_ignoreListenerVolume();

		//System.Boolean UnityEngine.AudioSource::get_isPlaying()
		void Register_UnityEngine_AudioSource_get_isPlaying();
		Register_UnityEngine_AudioSource_get_isPlaying();

		//System.Boolean UnityEngine.AudioSource::get_isVirtual()
		void Register_UnityEngine_AudioSource_get_isVirtual();
		Register_UnityEngine_AudioSource_get_isVirtual();

		//System.Boolean UnityEngine.AudioSource::get_loop()
		void Register_UnityEngine_AudioSource_get_loop();
		Register_UnityEngine_AudioSource_get_loop();

		//System.Boolean UnityEngine.AudioSource::get_mute()
		void Register_UnityEngine_AudioSource_get_mute();
		Register_UnityEngine_AudioSource_get_mute();

		//System.Boolean UnityEngine.AudioSource::get_playOnAwake()
		void Register_UnityEngine_AudioSource_get_playOnAwake();
		Register_UnityEngine_AudioSource_get_playOnAwake();

		//System.Boolean UnityEngine.AudioSource::get_spatialize()
		void Register_UnityEngine_AudioSource_get_spatialize();
		Register_UnityEngine_AudioSource_get_spatialize();

		//System.Boolean UnityEngine.AudioSource::get_spatializePostEffects()
		void Register_UnityEngine_AudioSource_get_spatializePostEffects();
		Register_UnityEngine_AudioSource_get_spatializePostEffects();

		//System.Int32 UnityEngine.AudioSource::get_priority()
		void Register_UnityEngine_AudioSource_get_priority();
		Register_UnityEngine_AudioSource_get_priority();

		//System.Int32 UnityEngine.AudioSource::get_timeSamples()
		void Register_UnityEngine_AudioSource_get_timeSamples();
		Register_UnityEngine_AudioSource_get_timeSamples();

		//System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)
		void Register_UnityEngine_AudioSource_GetPitch();
		Register_UnityEngine_AudioSource_GetPitch();

		//System.Single UnityEngine.AudioSource::get_dopplerLevel()
		void Register_UnityEngine_AudioSource_get_dopplerLevel();
		Register_UnityEngine_AudioSource_get_dopplerLevel();

		//System.Single UnityEngine.AudioSource::get_maxDistance()
		void Register_UnityEngine_AudioSource_get_maxDistance();
		Register_UnityEngine_AudioSource_get_maxDistance();

		//System.Single UnityEngine.AudioSource::get_minDistance()
		void Register_UnityEngine_AudioSource_get_minDistance();
		Register_UnityEngine_AudioSource_get_minDistance();

		//System.Single UnityEngine.AudioSource::get_panStereo()
		void Register_UnityEngine_AudioSource_get_panStereo();
		Register_UnityEngine_AudioSource_get_panStereo();

		//System.Single UnityEngine.AudioSource::get_reverbZoneMix()
		void Register_UnityEngine_AudioSource_get_reverbZoneMix();
		Register_UnityEngine_AudioSource_get_reverbZoneMix();

		//System.Single UnityEngine.AudioSource::get_spatialBlend()
		void Register_UnityEngine_AudioSource_get_spatialBlend();
		Register_UnityEngine_AudioSource_get_spatialBlend();

		//System.Single UnityEngine.AudioSource::get_spread()
		void Register_UnityEngine_AudioSource_get_spread();
		Register_UnityEngine_AudioSource_get_spread();

		//System.Single UnityEngine.AudioSource::get_time()
		void Register_UnityEngine_AudioSource_get_time();
		Register_UnityEngine_AudioSource_get_time();

		//System.Single UnityEngine.AudioSource::get_volume()
		void Register_UnityEngine_AudioSource_get_volume();
		Register_UnityEngine_AudioSource_get_volume();

		//System.Void UnityEngine.AudioSource::GetOutputDataHelper(UnityEngine.AudioSource,System.Single[],System.Int32)
		void Register_UnityEngine_AudioSource_GetOutputDataHelper();
		Register_UnityEngine_AudioSource_GetOutputDataHelper();

		//System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(UnityEngine.AudioSource,System.Single[],System.Int32,UnityEngine.FFTWindow)
		void Register_UnityEngine_AudioSource_GetSpectrumDataHelper();
		Register_UnityEngine_AudioSource_GetSpectrumDataHelper();

		//System.Void UnityEngine.AudioSource::Pause()
		void Register_UnityEngine_AudioSource_Pause();
		Register_UnityEngine_AudioSource_Pause();

		//System.Void UnityEngine.AudioSource::Play(System.Double)
		void Register_UnityEngine_AudioSource_Play();
		Register_UnityEngine_AudioSource_Play();

		//System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
		void Register_UnityEngine_AudioSource_PlayHelper();
		Register_UnityEngine_AudioSource_PlayHelper();

		//System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioSource,UnityEngine.AudioClip,System.Single)
		void Register_UnityEngine_AudioSource_PlayOneShotHelper();
		Register_UnityEngine_AudioSource_PlayOneShotHelper();

		//System.Void UnityEngine.AudioSource::SetCustomCurveHelper(UnityEngine.AudioSource,UnityEngine.AudioSourceCurveType,UnityEngine.AnimationCurve)
		void Register_UnityEngine_AudioSource_SetCustomCurveHelper();
		Register_UnityEngine_AudioSource_SetCustomCurveHelper();

		//System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
		void Register_UnityEngine_AudioSource_SetPitch();
		Register_UnityEngine_AudioSource_SetPitch();

		//System.Void UnityEngine.AudioSource::SetScheduledEndTime(System.Double)
		void Register_UnityEngine_AudioSource_SetScheduledEndTime();
		Register_UnityEngine_AudioSource_SetScheduledEndTime();

		//System.Void UnityEngine.AudioSource::SetScheduledStartTime(System.Double)
		void Register_UnityEngine_AudioSource_SetScheduledStartTime();
		Register_UnityEngine_AudioSource_SetScheduledStartTime();

		//System.Void UnityEngine.AudioSource::Stop(System.Boolean)
		void Register_UnityEngine_AudioSource_Stop();
		Register_UnityEngine_AudioSource_Stop();

		//System.Void UnityEngine.AudioSource::UnPause()
		void Register_UnityEngine_AudioSource_UnPause();
		Register_UnityEngine_AudioSource_UnPause();

		//System.Void UnityEngine.AudioSource::set_bypassEffects(System.Boolean)
		void Register_UnityEngine_AudioSource_set_bypassEffects();
		Register_UnityEngine_AudioSource_set_bypassEffects();

		//System.Void UnityEngine.AudioSource::set_bypassListenerEffects(System.Boolean)
		void Register_UnityEngine_AudioSource_set_bypassListenerEffects();
		Register_UnityEngine_AudioSource_set_bypassListenerEffects();

		//System.Void UnityEngine.AudioSource::set_bypassReverbZones(System.Boolean)
		void Register_UnityEngine_AudioSource_set_bypassReverbZones();
		Register_UnityEngine_AudioSource_set_bypassReverbZones();

		//System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
		void Register_UnityEngine_AudioSource_set_clip();
		Register_UnityEngine_AudioSource_set_clip();

		//System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
		void Register_UnityEngine_AudioSource_set_dopplerLevel();
		Register_UnityEngine_AudioSource_set_dopplerLevel();

		//System.Void UnityEngine.AudioSource::set_ignoreListenerPause(System.Boolean)
		void Register_UnityEngine_AudioSource_set_ignoreListenerPause();
		Register_UnityEngine_AudioSource_set_ignoreListenerPause();

		//System.Void UnityEngine.AudioSource::set_ignoreListenerVolume(System.Boolean)
		void Register_UnityEngine_AudioSource_set_ignoreListenerVolume();
		Register_UnityEngine_AudioSource_set_ignoreListenerVolume();

		//System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
		void Register_UnityEngine_AudioSource_set_loop();
		Register_UnityEngine_AudioSource_set_loop();

		//System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
		void Register_UnityEngine_AudioSource_set_maxDistance();
		Register_UnityEngine_AudioSource_set_maxDistance();

		//System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
		void Register_UnityEngine_AudioSource_set_minDistance();
		Register_UnityEngine_AudioSource_set_minDistance();

		//System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
		void Register_UnityEngine_AudioSource_set_mute();
		Register_UnityEngine_AudioSource_set_mute();

		//System.Void UnityEngine.AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup)
		void Register_UnityEngine_AudioSource_set_outputAudioMixerGroup();
		Register_UnityEngine_AudioSource_set_outputAudioMixerGroup();

		//System.Void UnityEngine.AudioSource::set_panStereo(System.Single)
		void Register_UnityEngine_AudioSource_set_panStereo();
		Register_UnityEngine_AudioSource_set_panStereo();

		//System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
		void Register_UnityEngine_AudioSource_set_playOnAwake();
		Register_UnityEngine_AudioSource_set_playOnAwake();

		//System.Void UnityEngine.AudioSource::set_priority(System.Int32)
		void Register_UnityEngine_AudioSource_set_priority();
		Register_UnityEngine_AudioSource_set_priority();

		//System.Void UnityEngine.AudioSource::set_reverbZoneMix(System.Single)
		void Register_UnityEngine_AudioSource_set_reverbZoneMix();
		Register_UnityEngine_AudioSource_set_reverbZoneMix();

		//System.Void UnityEngine.AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
		void Register_UnityEngine_AudioSource_set_rolloffMode();
		Register_UnityEngine_AudioSource_set_rolloffMode();

		//System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
		void Register_UnityEngine_AudioSource_set_spatialBlend();
		Register_UnityEngine_AudioSource_set_spatialBlend();

		//System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
		void Register_UnityEngine_AudioSource_set_spatialize();
		Register_UnityEngine_AudioSource_set_spatialize();

		//System.Void UnityEngine.AudioSource::set_spatializePostEffects(System.Boolean)
		void Register_UnityEngine_AudioSource_set_spatializePostEffects();
		Register_UnityEngine_AudioSource_set_spatializePostEffects();

		//System.Void UnityEngine.AudioSource::set_spread(System.Single)
		void Register_UnityEngine_AudioSource_set_spread();
		Register_UnityEngine_AudioSource_set_spread();

		//System.Void UnityEngine.AudioSource::set_time(System.Single)
		void Register_UnityEngine_AudioSource_set_time();
		Register_UnityEngine_AudioSource_set_time();

		//System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
		void Register_UnityEngine_AudioSource_set_timeSamples();
		Register_UnityEngine_AudioSource_set_timeSamples();

		//System.Void UnityEngine.AudioSource::set_velocityUpdateMode(UnityEngine.AudioVelocityUpdateMode)
		void Register_UnityEngine_AudioSource_set_velocityUpdateMode();
		Register_UnityEngine_AudioSource_set_velocityUpdateMode();

		//System.Void UnityEngine.AudioSource::set_volume(System.Single)
		void Register_UnityEngine_AudioSource_set_volume();
		Register_UnityEngine_AudioSource_set_volume();

		//UnityEngine.AnimationCurve UnityEngine.AudioSource::GetCustomCurveHelper(UnityEngine.AudioSource,UnityEngine.AudioSourceCurveType)
		void Register_UnityEngine_AudioSource_GetCustomCurveHelper();
		Register_UnityEngine_AudioSource_GetCustomCurveHelper();

		//UnityEngine.Audio.AudioMixerGroup UnityEngine.AudioSource::get_outputAudioMixerGroup()
		void Register_UnityEngine_AudioSource_get_outputAudioMixerGroup();
		Register_UnityEngine_AudioSource_get_outputAudioMixerGroup();

		//UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
		void Register_UnityEngine_AudioSource_get_clip();
		Register_UnityEngine_AudioSource_get_clip();

		//UnityEngine.AudioRolloffMode UnityEngine.AudioSource::get_rolloffMode()
		void Register_UnityEngine_AudioSource_get_rolloffMode();
		Register_UnityEngine_AudioSource_get_rolloffMode();

		//UnityEngine.AudioVelocityUpdateMode UnityEngine.AudioSource::get_velocityUpdateMode()
		void Register_UnityEngine_AudioSource_get_velocityUpdateMode();
		Register_UnityEngine_AudioSource_get_velocityUpdateMode();

	//End Registrations for type : UnityEngine.AudioSource

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
		void Register_UnityEngine_Behaviour_get_isActiveAndEnabled();
		Register_UnityEngine_Behaviour_get_isActiveAndEnabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.BoxCollider

		//System.Void UnityEngine.BoxCollider::get_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_BoxCollider_get_center_Injected();
		Register_UnityEngine_BoxCollider_get_center_Injected();

		//System.Void UnityEngine.BoxCollider::get_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_BoxCollider_get_size_Injected();
		Register_UnityEngine_BoxCollider_get_size_Injected();

		//System.Void UnityEngine.BoxCollider::set_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_BoxCollider_set_center_Injected();
		Register_UnityEngine_BoxCollider_set_center_Injected();

		//System.Void UnityEngine.BoxCollider::set_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_BoxCollider_set_size_Injected();
		Register_UnityEngine_BoxCollider_set_size_Injected();

	//End Registrations for type : UnityEngine.BoxCollider

	//Start Registrations for type : UnityEngine.Cache

		//System.Boolean UnityEngine.Cache::Cache_IsValid(System.Int32)
		void Register_UnityEngine_Cache_Cache_IsValid();
		Register_UnityEngine_Cache_Cache_IsValid();

		//System.String UnityEngine.Cache::Cache_GetPath(System.Int32)
		void Register_UnityEngine_Cache_Cache_GetPath();
		Register_UnityEngine_Cache_Cache_GetPath();

		//System.Void UnityEngine.Cache::Cache_SetExpirationDelay(System.Int32,System.Int32)
		void Register_UnityEngine_Cache_Cache_SetExpirationDelay();
		Register_UnityEngine_Cache_Cache_SetExpirationDelay();

		//System.Void UnityEngine.Cache::Cache_SetMaximumDiskSpaceAvailable(System.Int32,System.Int64)
		void Register_UnityEngine_Cache_Cache_SetMaximumDiskSpaceAvailable();
		Register_UnityEngine_Cache_Cache_SetMaximumDiskSpaceAvailable();

	//End Registrations for type : UnityEngine.Cache

	//Start Registrations for type : UnityEngine.Caching

		//System.Boolean UnityEngine.Caching::ClearCachedVersionInternal_Injected(System.String,UnityEngine.Hash128&)
		void Register_UnityEngine_Caching_ClearCachedVersionInternal_Injected();
		Register_UnityEngine_Caching_ClearCachedVersionInternal_Injected();

		//System.Boolean UnityEngine.Caching::ClearCachedVersions_Injected(System.String,UnityEngine.Hash128&,System.Boolean)
		void Register_UnityEngine_Caching_ClearCachedVersions_Injected();
		Register_UnityEngine_Caching_ClearCachedVersions_Injected();

		//System.Boolean UnityEngine.Caching::IsVersionCached_Injected(System.String,System.String,UnityEngine.Hash128&)
		void Register_UnityEngine_Caching_IsVersionCached_Injected();
		Register_UnityEngine_Caching_IsVersionCached_Injected();

		//System.Boolean UnityEngine.Caching::get_ready()
		void Register_UnityEngine_Caching_get_ready();
		Register_UnityEngine_Caching_get_ready();

		//System.Void UnityEngine.Caching::AddCache_Injected(System.String,System.Boolean,UnityEngine.Cache&)
		void Register_UnityEngine_Caching_AddCache_Injected();
		Register_UnityEngine_Caching_AddCache_Injected();

		//System.Void UnityEngine.Caching::GetCacheByPath_Injected(System.String,UnityEngine.Cache&)
		void Register_UnityEngine_Caching_GetCacheByPath_Injected();
		Register_UnityEngine_Caching_GetCacheByPath_Injected();

		//System.Void UnityEngine.Caching::get_currentCacheForWriting_Injected(UnityEngine.Cache&)
		void Register_UnityEngine_Caching_get_currentCacheForWriting_Injected();
		Register_UnityEngine_Caching_get_currentCacheForWriting_Injected();

		//System.Void UnityEngine.Caching::get_defaultCache_Injected(UnityEngine.Cache&)
		void Register_UnityEngine_Caching_get_defaultCache_Injected();
		Register_UnityEngine_Caching_get_defaultCache_Injected();

		//System.Void UnityEngine.Caching::set_compressionEnabled(System.Boolean)
		void Register_UnityEngine_Caching_set_compressionEnabled();
		Register_UnityEngine_Caching_set_compressionEnabled();

		//System.Void UnityEngine.Caching::set_currentCacheForWriting_Injected(UnityEngine.Cache&)
		void Register_UnityEngine_Caching_set_currentCacheForWriting_Injected();
		Register_UnityEngine_Caching_set_currentCacheForWriting_Injected();

		//UnityEngine.Hash128[] UnityEngine.Caching::GetCachedVersions(System.String)
		void Register_UnityEngine_Caching_GetCachedVersions();
		Register_UnityEngine_Caching_GetCachedVersions();

	//End Registrations for type : UnityEngine.Caching

	//Start Registrations for type : UnityEngine.Camera

		//System.Boolean UnityEngine.Camera::GetCullingParameters_Internal(UnityEngine.Camera,System.Boolean,UnityEngine.Rendering.ScriptableCullingParameters&,System.Int32)
		void Register_UnityEngine_Camera_GetCullingParameters_Internal();
		Register_UnityEngine_Camera_GetCullingParameters_Internal();

		//System.Boolean UnityEngine.Camera::RenderToCubemapEyeImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.Camera/MonoOrStereoscopicEye)
		void Register_UnityEngine_Camera_RenderToCubemapEyeImpl();
		Register_UnityEngine_Camera_RenderToCubemapEyeImpl();

		//System.Boolean UnityEngine.Camera::RenderToCubemapImpl(UnityEngine.Texture,System.Int32)
		void Register_UnityEngine_Camera_RenderToCubemapImpl();
		Register_UnityEngine_Camera_RenderToCubemapImpl();

		//System.Boolean UnityEngine.Camera::get_allowDynamicResolution()
		void Register_UnityEngine_Camera_get_allowDynamicResolution();
		Register_UnityEngine_Camera_get_allowDynamicResolution();

		//System.Boolean UnityEngine.Camera::get_allowHDR()
		void Register_UnityEngine_Camera_get_allowHDR();
		Register_UnityEngine_Camera_get_allowHDR();

		//System.Boolean UnityEngine.Camera::get_allowMSAA()
		void Register_UnityEngine_Camera_get_allowMSAA();
		Register_UnityEngine_Camera_get_allowMSAA();

		//System.Boolean UnityEngine.Camera::get_areVRStereoViewMatricesWithinSingleCullTolerance()
		void Register_UnityEngine_Camera_get_areVRStereoViewMatricesWithinSingleCullTolerance();
		Register_UnityEngine_Camera_get_areVRStereoViewMatricesWithinSingleCullTolerance();

		//System.Boolean UnityEngine.Camera::get_clearStencilAfterLightingPass()
		void Register_UnityEngine_Camera_get_clearStencilAfterLightingPass();
		Register_UnityEngine_Camera_get_clearStencilAfterLightingPass();

		//System.Boolean UnityEngine.Camera::get_forceIntoRenderTexture()
		void Register_UnityEngine_Camera_get_forceIntoRenderTexture();
		Register_UnityEngine_Camera_get_forceIntoRenderTexture();

		//System.Boolean UnityEngine.Camera::get_layerCullSpherical()
		void Register_UnityEngine_Camera_get_layerCullSpherical();
		Register_UnityEngine_Camera_get_layerCullSpherical();

		//System.Boolean UnityEngine.Camera::get_orthographic()
		void Register_UnityEngine_Camera_get_orthographic();
		Register_UnityEngine_Camera_get_orthographic();

		//System.Boolean UnityEngine.Camera::get_stereoEnabled()
		void Register_UnityEngine_Camera_get_stereoEnabled();
		Register_UnityEngine_Camera_get_stereoEnabled();

		//System.Boolean UnityEngine.Camera::get_useJitteredProjectionMatrixForTransparentRendering()
		void Register_UnityEngine_Camera_get_useJitteredProjectionMatrixForTransparentRendering();
		Register_UnityEngine_Camera_get_useJitteredProjectionMatrixForTransparentRendering();

		//System.Boolean UnityEngine.Camera::get_useOcclusionCulling()
		void Register_UnityEngine_Camera_get_useOcclusionCulling();
		Register_UnityEngine_Camera_get_useOcclusionCulling();

		//System.Boolean UnityEngine.Camera::get_usePhysicalProperties()
		void Register_UnityEngine_Camera_get_usePhysicalProperties();
		Register_UnityEngine_Camera_get_usePhysicalProperties();

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl();
		Register_UnityEngine_Camera_GetAllCamerasImpl();

		//System.Int32 UnityEngine.Camera::get_PreviewCullingLayer()
		void Register_UnityEngine_Camera_get_PreviewCullingLayer();
		Register_UnityEngine_Camera_get_PreviewCullingLayer();

		//System.Int32 UnityEngine.Camera::get_commandBufferCount()
		void Register_UnityEngine_Camera_get_commandBufferCount();
		Register_UnityEngine_Camera_get_commandBufferCount();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_pixelHeight()
		void Register_UnityEngine_Camera_get_pixelHeight();
		Register_UnityEngine_Camera_get_pixelHeight();

		//System.Int32 UnityEngine.Camera::get_pixelWidth()
		void Register_UnityEngine_Camera_get_pixelWidth();
		Register_UnityEngine_Camera_get_pixelWidth();

		//System.Int32 UnityEngine.Camera::get_scaledPixelHeight()
		void Register_UnityEngine_Camera_get_scaledPixelHeight();
		Register_UnityEngine_Camera_get_scaledPixelHeight();

		//System.Int32 UnityEngine.Camera::get_scaledPixelWidth()
		void Register_UnityEngine_Camera_get_scaledPixelWidth();
		Register_UnityEngine_Camera_get_scaledPixelWidth();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::FieldOfViewToFocalLength(System.Single,System.Single)
		void Register_UnityEngine_Camera_FieldOfViewToFocalLength();
		Register_UnityEngine_Camera_FieldOfViewToFocalLength();

		//System.Single UnityEngine.Camera::FocalLengthToFieldOfView(System.Single,System.Single)
		void Register_UnityEngine_Camera_FocalLengthToFieldOfView();
		Register_UnityEngine_Camera_FocalLengthToFieldOfView();

		//System.Single UnityEngine.Camera::GetGateFittedFieldOfView()
		void Register_UnityEngine_Camera_GetGateFittedFieldOfView();
		Register_UnityEngine_Camera_GetGateFittedFieldOfView();

		//System.Single UnityEngine.Camera::HorizontalToVerticalFieldOfView(System.Single,System.Single)
		void Register_UnityEngine_Camera_HorizontalToVerticalFieldOfView();
		Register_UnityEngine_Camera_HorizontalToVerticalFieldOfView();

		//System.Single UnityEngine.Camera::VerticalToHorizontalFieldOfView(System.Single,System.Single)
		void Register_UnityEngine_Camera_VerticalToHorizontalFieldOfView();
		Register_UnityEngine_Camera_VerticalToHorizontalFieldOfView();

		//System.Single UnityEngine.Camera::get_aspect()
		void Register_UnityEngine_Camera_get_aspect();
		Register_UnityEngine_Camera_get_aspect();

		//System.Single UnityEngine.Camera::get_depth()
		void Register_UnityEngine_Camera_get_depth();
		Register_UnityEngine_Camera_get_depth();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_fieldOfView()
		void Register_UnityEngine_Camera_get_fieldOfView();
		Register_UnityEngine_Camera_get_fieldOfView();

		//System.Single UnityEngine.Camera::get_focalLength()
		void Register_UnityEngine_Camera_get_focalLength();
		Register_UnityEngine_Camera_get_focalLength();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Single UnityEngine.Camera::get_orthographicSize()
		void Register_UnityEngine_Camera_get_orthographicSize();
		Register_UnityEngine_Camera_get_orthographicSize();

		//System.Single UnityEngine.Camera::get_stereoConvergence()
		void Register_UnityEngine_Camera_get_stereoConvergence();
		Register_UnityEngine_Camera_get_stereoConvergence();

		//System.Single UnityEngine.Camera::get_stereoSeparation()
		void Register_UnityEngine_Camera_get_stereoSeparation();
		Register_UnityEngine_Camera_get_stereoSeparation();

		//System.Single[] UnityEngine.Camera::GetLayerCullDistances()
		void Register_UnityEngine_Camera_GetLayerCullDistances();
		Register_UnityEngine_Camera_GetLayerCullDistances();

		//System.String[] UnityEngine.Camera::GetCameraBufferWarnings()
		void Register_UnityEngine_Camera_GetCameraBufferWarnings();
		Register_UnityEngine_Camera_GetCameraBufferWarnings();

		//System.UInt64 UnityEngine.Camera::get_overrideSceneCullingMask()
		void Register_UnityEngine_Camera_get_overrideSceneCullingMask();
		Register_UnityEngine_Camera_get_overrideSceneCullingMask();

		//System.UInt64 UnityEngine.Camera::get_sceneCullingMask()
		void Register_UnityEngine_Camera_get_sceneCullingMask();
		Register_UnityEngine_Camera_get_sceneCullingMask();

		//System.Void UnityEngine.Camera::AddCommandBufferAsyncImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
		void Register_UnityEngine_Camera_AddCommandBufferAsyncImpl();
		Register_UnityEngine_Camera_AddCommandBufferAsyncImpl();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::CalculateFrustumCornersInternal_Injected(UnityEngine.Rect&,System.Single,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3[])
		void Register_UnityEngine_Camera_CalculateFrustumCornersInternal_Injected();
		Register_UnityEngine_Camera_CalculateFrustumCornersInternal_Injected();

		//System.Void UnityEngine.Camera::CalculateObliqueMatrix_Injected(UnityEngine.Vector4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_CalculateObliqueMatrix_Injected();
		Register_UnityEngine_Camera_CalculateObliqueMatrix_Injected();

		//System.Void UnityEngine.Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(UnityEngine.Matrix4x4&,System.Single,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Single,System.Single,UnityEngine.Camera/GateFitMode)
		void Register_UnityEngine_Camera_CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected();
		Register_UnityEngine_Camera_CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected();

		//System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
		void Register_UnityEngine_Camera_CopyFrom();
		Register_UnityEngine_Camera_CopyFrom();

		//System.Void UnityEngine.Camera::CopyStereoDeviceProjectionMatrixToNonJittered(UnityEngine.Camera/StereoscopicEye)
		void Register_UnityEngine_Camera_CopyStereoDeviceProjectionMatrixToNonJittered();
		Register_UnityEngine_Camera_CopyStereoDeviceProjectionMatrixToNonJittered();

		//System.Void UnityEngine.Camera::GetFrustumPlaneSizeAt_Injected(System.Single,UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_GetFrustumPlaneSizeAt_Injected();
		Register_UnityEngine_Camera_GetFrustumPlaneSizeAt_Injected();

		//System.Void UnityEngine.Camera::GetGateFittedLensShift_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_GetGateFittedLensShift_Injected();
		Register_UnityEngine_Camera_GetGateFittedLensShift_Injected();

		//System.Void UnityEngine.Camera::GetLocalSpaceAim_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_GetLocalSpaceAim_Injected();
		Register_UnityEngine_Camera_GetLocalSpaceAim_Injected();

		//System.Void UnityEngine.Camera::GetStereoNonJitteredProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_GetStereoNonJitteredProjectionMatrix_Injected();
		Register_UnityEngine_Camera_GetStereoNonJitteredProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::GetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_GetStereoProjectionMatrix_Injected();
		Register_UnityEngine_Camera_GetStereoProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::GetStereoViewMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_GetStereoViewMatrix_Injected();
		Register_UnityEngine_Camera_GetStereoViewMatrix_Injected();

		//System.Void UnityEngine.Camera::RemoveAllCommandBuffers()
		void Register_UnityEngine_Camera_RemoveAllCommandBuffers();
		Register_UnityEngine_Camera_RemoveAllCommandBuffers();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::RemoveCommandBuffers(UnityEngine.Rendering.CameraEvent)
		void Register_UnityEngine_Camera_RemoveCommandBuffers();
		Register_UnityEngine_Camera_RemoveCommandBuffers();

		//System.Void UnityEngine.Camera::Render()
		void Register_UnityEngine_Camera_Render();
		Register_UnityEngine_Camera_Render();

		//System.Void UnityEngine.Camera::RenderDontRestore()
		void Register_UnityEngine_Camera_RenderDontRestore();
		Register_UnityEngine_Camera_RenderDontRestore();

		//System.Void UnityEngine.Camera::RenderWithShader(UnityEngine.Shader,System.String)
		void Register_UnityEngine_Camera_RenderWithShader();
		Register_UnityEngine_Camera_RenderWithShader();

		//System.Void UnityEngine.Camera::Reset()
		void Register_UnityEngine_Camera_Reset();
		Register_UnityEngine_Camera_Reset();

		//System.Void UnityEngine.Camera::ResetAspect()
		void Register_UnityEngine_Camera_ResetAspect();
		Register_UnityEngine_Camera_ResetAspect();

		//System.Void UnityEngine.Camera::ResetCullingMatrix()
		void Register_UnityEngine_Camera_ResetCullingMatrix();
		Register_UnityEngine_Camera_ResetCullingMatrix();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ResetReplacementShader()
		void Register_UnityEngine_Camera_ResetReplacementShader();
		Register_UnityEngine_Camera_ResetReplacementShader();

		//System.Void UnityEngine.Camera::ResetStereoProjectionMatrices()
		void Register_UnityEngine_Camera_ResetStereoProjectionMatrices();
		Register_UnityEngine_Camera_ResetStereoProjectionMatrices();

		//System.Void UnityEngine.Camera::ResetStereoViewMatrices()
		void Register_UnityEngine_Camera_ResetStereoViewMatrices();
		Register_UnityEngine_Camera_ResetStereoViewMatrices();

		//System.Void UnityEngine.Camera::ResetTransparencySortSettings()
		void Register_UnityEngine_Camera_ResetTransparencySortSettings();
		Register_UnityEngine_Camera_ResetTransparencySortSettings();

		//System.Void UnityEngine.Camera::ResetWorldToCameraMatrix()
		void Register_UnityEngine_Camera_ResetWorldToCameraMatrix();
		Register_UnityEngine_Camera_ResetWorldToCameraMatrix();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::ScreenToViewportPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();
		Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();

		//System.Void UnityEngine.Camera::ScreenToWorldPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToWorldPoint_Injected();
		Register_UnityEngine_Camera_ScreenToWorldPoint_Injected();

		//System.Void UnityEngine.Camera::SetLayerCullDistances(System.Single[])
		void Register_UnityEngine_Camera_SetLayerCullDistances();
		Register_UnityEngine_Camera_SetLayerCullDistances();

		//System.Void UnityEngine.Camera::SetReplacementShader(UnityEngine.Shader,System.String)
		void Register_UnityEngine_Camera_SetReplacementShader();
		Register_UnityEngine_Camera_SetReplacementShader();

		//System.Void UnityEngine.Camera::SetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_SetStereoProjectionMatrix_Injected();
		Register_UnityEngine_Camera_SetStereoProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::SetStereoViewMatrix_Injected(UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_SetStereoViewMatrix_Injected();
		Register_UnityEngine_Camera_SetStereoViewMatrix_Injected();

		//System.Void UnityEngine.Camera::SetTargetBuffersImpl_Injected(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
		void Register_UnityEngine_Camera_SetTargetBuffersImpl_Injected();
		Register_UnityEngine_Camera_SetTargetBuffersImpl_Injected();

		//System.Void UnityEngine.Camera::SetTargetBuffersMRTImpl_Injected(UnityEngine.RenderBuffer[],UnityEngine.RenderBuffer&)
		void Register_UnityEngine_Camera_SetTargetBuffersMRTImpl_Injected();
		Register_UnityEngine_Camera_SetTargetBuffersMRTImpl_Injected();

		//System.Void UnityEngine.Camera::SetupCurrent(UnityEngine.Camera)
		void Register_UnityEngine_Camera_SetupCurrent();
		Register_UnityEngine_Camera_SetupCurrent();

		//System.Void UnityEngine.Camera::SubmitRenderRequestsInternal(System.Object)
		void Register_UnityEngine_Camera_SubmitRenderRequestsInternal();
		Register_UnityEngine_Camera_SubmitRenderRequestsInternal();

		//System.Void UnityEngine.Camera::ViewportPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ViewportPointToRay_Injected();
		Register_UnityEngine_Camera_ViewportPointToRay_Injected();

		//System.Void UnityEngine.Camera::ViewportToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ViewportToScreenPoint_Injected();
		Register_UnityEngine_Camera_ViewportToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::ViewportToWorldPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ViewportToWorldPoint_Injected();
		Register_UnityEngine_Camera_ViewportToWorldPoint_Injected();

		//System.Void UnityEngine.Camera::WorldToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_WorldToScreenPoint_Injected();
		Register_UnityEngine_Camera_WorldToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::WorldToViewportPoint_Injected(UnityEngine.Vector3&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_WorldToViewportPoint_Injected();
		Register_UnityEngine_Camera_WorldToViewportPoint_Injected();

		//System.Void UnityEngine.Camera::get_backgroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Camera_get_backgroundColor_Injected();
		Register_UnityEngine_Camera_get_backgroundColor_Injected();

		//System.Void UnityEngine.Camera::get_cameraToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_cameraToWorldMatrix_Injected();
		Register_UnityEngine_Camera_get_cameraToWorldMatrix_Injected();

		//System.Void UnityEngine.Camera::get_cullingMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_cullingMatrix_Injected();
		Register_UnityEngine_Camera_get_cullingMatrix_Injected();

		//System.Void UnityEngine.Camera::get_lensShift_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_get_lensShift_Injected();
		Register_UnityEngine_Camera_get_lensShift_Injected();

		//System.Void UnityEngine.Camera::get_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_nonJitteredProjectionMatrix_Injected();
		Register_UnityEngine_Camera_get_nonJitteredProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::get_previousViewProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_previousViewProjectionMatrix_Injected();
		Register_UnityEngine_Camera_get_previousViewProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_projectionMatrix_Injected();
		Register_UnityEngine_Camera_get_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_rect_Injected();
		Register_UnityEngine_Camera_get_rect_Injected();

		//System.Void UnityEngine.Camera::get_scene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_Camera_get_scene_Injected();
		Register_UnityEngine_Camera_get_scene_Injected();

		//System.Void UnityEngine.Camera::get_sensorSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_get_sensorSize_Injected();
		Register_UnityEngine_Camera_get_sensorSize_Injected();

		//System.Void UnityEngine.Camera::get_transparencySortAxis_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_get_transparencySortAxis_Injected();
		Register_UnityEngine_Camera_get_transparencySortAxis_Injected();

		//System.Void UnityEngine.Camera::get_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_get_velocity_Injected();
		Register_UnityEngine_Camera_get_velocity_Injected();

		//System.Void UnityEngine.Camera::get_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();

		//System.Void UnityEngine.Camera::set_allowDynamicResolution(System.Boolean)
		void Register_UnityEngine_Camera_set_allowDynamicResolution();
		Register_UnityEngine_Camera_set_allowDynamicResolution();

		//System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
		void Register_UnityEngine_Camera_set_allowHDR();
		Register_UnityEngine_Camera_set_allowHDR();

		//System.Void UnityEngine.Camera::set_allowMSAA(System.Boolean)
		void Register_UnityEngine_Camera_set_allowMSAA();
		Register_UnityEngine_Camera_set_allowMSAA();

		//System.Void UnityEngine.Camera::set_aspect(System.Single)
		void Register_UnityEngine_Camera_set_aspect();
		Register_UnityEngine_Camera_set_aspect();

		//System.Void UnityEngine.Camera::set_backgroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Camera_set_backgroundColor_Injected();
		Register_UnityEngine_Camera_set_backgroundColor_Injected();

		//System.Void UnityEngine.Camera::set_cameraType(UnityEngine.CameraType)
		void Register_UnityEngine_Camera_set_cameraType();
		Register_UnityEngine_Camera_set_cameraType();

		//System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
		void Register_UnityEngine_Camera_set_clearFlags();
		Register_UnityEngine_Camera_set_clearFlags();

		//System.Void UnityEngine.Camera::set_clearStencilAfterLightingPass(System.Boolean)
		void Register_UnityEngine_Camera_set_clearStencilAfterLightingPass();
		Register_UnityEngine_Camera_set_clearStencilAfterLightingPass();

		//System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
		void Register_UnityEngine_Camera_set_cullingMask();
		Register_UnityEngine_Camera_set_cullingMask();

		//System.Void UnityEngine.Camera::set_cullingMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_cullingMatrix_Injected();
		Register_UnityEngine_Camera_set_cullingMatrix_Injected();

		//System.Void UnityEngine.Camera::set_depth(System.Single)
		void Register_UnityEngine_Camera_set_depth();
		Register_UnityEngine_Camera_set_depth();

		//System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
		void Register_UnityEngine_Camera_set_depthTextureMode();
		Register_UnityEngine_Camera_set_depthTextureMode();

		//System.Void UnityEngine.Camera::set_eventMask(System.Int32)
		void Register_UnityEngine_Camera_set_eventMask();
		Register_UnityEngine_Camera_set_eventMask();

		//System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
		void Register_UnityEngine_Camera_set_farClipPlane();
		Register_UnityEngine_Camera_set_farClipPlane();

		//System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
		void Register_UnityEngine_Camera_set_fieldOfView();
		Register_UnityEngine_Camera_set_fieldOfView();

		//System.Void UnityEngine.Camera::set_focalLength(System.Single)
		void Register_UnityEngine_Camera_set_focalLength();
		Register_UnityEngine_Camera_set_focalLength();

		//System.Void UnityEngine.Camera::set_forceIntoRenderTexture(System.Boolean)
		void Register_UnityEngine_Camera_set_forceIntoRenderTexture();
		Register_UnityEngine_Camera_set_forceIntoRenderTexture();

		//System.Void UnityEngine.Camera::set_gateFit(UnityEngine.Camera/GateFitMode)
		void Register_UnityEngine_Camera_set_gateFit();
		Register_UnityEngine_Camera_set_gateFit();

		//System.Void UnityEngine.Camera::set_layerCullSpherical(System.Boolean)
		void Register_UnityEngine_Camera_set_layerCullSpherical();
		Register_UnityEngine_Camera_set_layerCullSpherical();

		//System.Void UnityEngine.Camera::set_lensShift_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_set_lensShift_Injected();
		Register_UnityEngine_Camera_set_lensShift_Injected();

		//System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
		void Register_UnityEngine_Camera_set_nearClipPlane();
		Register_UnityEngine_Camera_set_nearClipPlane();

		//System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_nonJitteredProjectionMatrix_Injected();
		Register_UnityEngine_Camera_set_nonJitteredProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_opaqueSortMode(UnityEngine.Rendering.OpaqueSortMode)
		void Register_UnityEngine_Camera_set_opaqueSortMode();
		Register_UnityEngine_Camera_set_opaqueSortMode();

		//System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
		void Register_UnityEngine_Camera_set_orthographic();
		Register_UnityEngine_Camera_set_orthographic();

		//System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
		void Register_UnityEngine_Camera_set_orthographicSize();
		Register_UnityEngine_Camera_set_orthographicSize();

		//System.Void UnityEngine.Camera::set_overrideSceneCullingMask(System.UInt64)
		void Register_UnityEngine_Camera_set_overrideSceneCullingMask();
		Register_UnityEngine_Camera_set_overrideSceneCullingMask();

		//System.Void UnityEngine.Camera::set_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_set_pixelRect_Injected();
		Register_UnityEngine_Camera_set_pixelRect_Injected();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_set_rect_Injected();
		Register_UnityEngine_Camera_set_rect_Injected();

		//System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
		void Register_UnityEngine_Camera_set_renderingPath();
		Register_UnityEngine_Camera_set_renderingPath();

		//System.Void UnityEngine.Camera::set_scene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_Camera_set_scene_Injected();
		Register_UnityEngine_Camera_set_scene_Injected();

		//System.Void UnityEngine.Camera::set_sensorSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Camera_set_sensorSize_Injected();
		Register_UnityEngine_Camera_set_sensorSize_Injected();

		//System.Void UnityEngine.Camera::set_stereoConvergence(System.Single)
		void Register_UnityEngine_Camera_set_stereoConvergence();
		Register_UnityEngine_Camera_set_stereoConvergence();

		//System.Void UnityEngine.Camera::set_stereoSeparation(System.Single)
		void Register_UnityEngine_Camera_set_stereoSeparation();
		Register_UnityEngine_Camera_set_stereoSeparation();

		//System.Void UnityEngine.Camera::set_stereoTargetEye(UnityEngine.StereoTargetEyeMask)
		void Register_UnityEngine_Camera_set_stereoTargetEye();
		Register_UnityEngine_Camera_set_stereoTargetEye();

		//System.Void UnityEngine.Camera::set_targetDisplay(System.Int32)
		void Register_UnityEngine_Camera_set_targetDisplay();
		Register_UnityEngine_Camera_set_targetDisplay();

		//System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
		void Register_UnityEngine_Camera_set_targetTexture();
		Register_UnityEngine_Camera_set_targetTexture();

		//System.Void UnityEngine.Camera::set_transparencySortAxis_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_set_transparencySortAxis_Injected();
		Register_UnityEngine_Camera_set_transparencySortAxis_Injected();

		//System.Void UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)
		void Register_UnityEngine_Camera_set_transparencySortMode();
		Register_UnityEngine_Camera_set_transparencySortMode();

		//System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
		void Register_UnityEngine_Camera_set_useJitteredProjectionMatrixForTransparentRendering();
		Register_UnityEngine_Camera_set_useJitteredProjectionMatrixForTransparentRendering();

		//System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
		void Register_UnityEngine_Camera_set_useOcclusionCulling();
		Register_UnityEngine_Camera_set_useOcclusionCulling();

		//System.Void UnityEngine.Camera::set_usePhysicalProperties(System.Boolean)
		void Register_UnityEngine_Camera_set_usePhysicalProperties();
		Register_UnityEngine_Camera_set_usePhysicalProperties();

		//System.Void UnityEngine.Camera::set_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_set_worldToCameraMatrix_Injected();

		//UnityEngine.Camera UnityEngine.Camera::get_current()
		void Register_UnityEngine_Camera_get_current();
		Register_UnityEngine_Camera_get_current();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.Camera/GateFitMode UnityEngine.Camera::get_gateFit()
		void Register_UnityEngine_Camera_get_gateFit();
		Register_UnityEngine_Camera_get_gateFit();

		//UnityEngine.Camera/MonoOrStereoscopicEye UnityEngine.Camera::get_stereoActiveEye()
		void Register_UnityEngine_Camera_get_stereoActiveEye();
		Register_UnityEngine_Camera_get_stereoActiveEye();

		//UnityEngine.Camera/ProjectionMatrixMode UnityEngine.Camera::get_projectionMatrixMode()
		void Register_UnityEngine_Camera_get_projectionMatrixMode();
		Register_UnityEngine_Camera_get_projectionMatrixMode();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
		void Register_UnityEngine_Camera_get_cameraType();
		Register_UnityEngine_Camera_get_cameraType();

		//UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
		void Register_UnityEngine_Camera_get_depthTextureMode();
		Register_UnityEngine_Camera_get_depthTextureMode();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_activeTexture()
		void Register_UnityEngine_Camera_get_activeTexture();
		Register_UnityEngine_Camera_get_activeTexture();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

		//UnityEngine.Rendering.CommandBuffer[] UnityEngine.Camera::GetCommandBuffers(UnityEngine.Rendering.CameraEvent)
		void Register_UnityEngine_Camera_GetCommandBuffers();
		Register_UnityEngine_Camera_GetCommandBuffers();

		//UnityEngine.Rendering.OpaqueSortMode UnityEngine.Camera::get_opaqueSortMode()
		void Register_UnityEngine_Camera_get_opaqueSortMode();
		Register_UnityEngine_Camera_get_opaqueSortMode();

		//UnityEngine.RenderingPath UnityEngine.Camera::get_actualRenderingPath()
		void Register_UnityEngine_Camera_get_actualRenderingPath();
		Register_UnityEngine_Camera_get_actualRenderingPath();

		//UnityEngine.RenderingPath UnityEngine.Camera::get_renderingPath()
		void Register_UnityEngine_Camera_get_renderingPath();
		Register_UnityEngine_Camera_get_renderingPath();

		//UnityEngine.StereoTargetEyeMask UnityEngine.Camera::get_stereoTargetEye()
		void Register_UnityEngine_Camera_get_stereoTargetEye();
		Register_UnityEngine_Camera_get_stereoTargetEye();

		//UnityEngine.TransparencySortMode UnityEngine.Camera::get_transparencySortMode()
		void Register_UnityEngine_Camera_get_transparencySortMode();
		Register_UnityEngine_Camera_get_transparencySortMode();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.CameraRaycastHelper

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();

	//End Registrations for type : UnityEngine.CameraRaycastHelper

	//Start Registrations for type : UnityEngine.Canvas

		//System.Boolean UnityEngine.Canvas::get_isRootCanvas()
		void Register_UnityEngine_Canvas_get_isRootCanvas();
		Register_UnityEngine_Canvas_get_isRootCanvas();

		//System.Boolean UnityEngine.Canvas::get_overridePixelPerfect()
		void Register_UnityEngine_Canvas_get_overridePixelPerfect();
		Register_UnityEngine_Canvas_get_overridePixelPerfect();

		//System.Boolean UnityEngine.Canvas::get_overrideSorting()
		void Register_UnityEngine_Canvas_get_overrideSorting();
		Register_UnityEngine_Canvas_get_overrideSorting();

		//System.Boolean UnityEngine.Canvas::get_pixelPerfect()
		void Register_UnityEngine_Canvas_get_pixelPerfect();
		Register_UnityEngine_Canvas_get_pixelPerfect();

		//System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
		void Register_UnityEngine_Canvas_get_cachedSortingLayerValue();
		Register_UnityEngine_Canvas_get_cachedSortingLayerValue();

		//System.Int32 UnityEngine.Canvas::get_renderOrder()
		void Register_UnityEngine_Canvas_get_renderOrder();
		Register_UnityEngine_Canvas_get_renderOrder();

		//System.Int32 UnityEngine.Canvas::get_sortingGridNormalizedSize()
		void Register_UnityEngine_Canvas_get_sortingGridNormalizedSize();
		Register_UnityEngine_Canvas_get_sortingGridNormalizedSize();

		//System.Int32 UnityEngine.Canvas::get_sortingLayerID()
		void Register_UnityEngine_Canvas_get_sortingLayerID();
		Register_UnityEngine_Canvas_get_sortingLayerID();

		//System.Int32 UnityEngine.Canvas::get_sortingOrder()
		void Register_UnityEngine_Canvas_get_sortingOrder();
		Register_UnityEngine_Canvas_get_sortingOrder();

		//System.Int32 UnityEngine.Canvas::get_targetDisplay()
		void Register_UnityEngine_Canvas_get_targetDisplay();
		Register_UnityEngine_Canvas_get_targetDisplay();

		//System.Single UnityEngine.Canvas::get_normalizedSortingGridSize()
		void Register_UnityEngine_Canvas_get_normalizedSortingGridSize();
		Register_UnityEngine_Canvas_get_normalizedSortingGridSize();

		//System.Single UnityEngine.Canvas::get_planeDistance()
		void Register_UnityEngine_Canvas_get_planeDistance();
		Register_UnityEngine_Canvas_get_planeDistance();

		//System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
		void Register_UnityEngine_Canvas_get_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_get_referencePixelsPerUnit();

		//System.Single UnityEngine.Canvas::get_scaleFactor()
		void Register_UnityEngine_Canvas_get_scaleFactor();
		Register_UnityEngine_Canvas_get_scaleFactor();

		//System.String UnityEngine.Canvas::get_sortingLayerName()
		void Register_UnityEngine_Canvas_get_sortingLayerName();
		Register_UnityEngine_Canvas_get_sortingLayerName();

		//System.Void UnityEngine.Canvas::UpdateCanvasRectTransform(System.Boolean)
		void Register_UnityEngine_Canvas_UpdateCanvasRectTransform();
		Register_UnityEngine_Canvas_UpdateCanvasRectTransform();

		//System.Void UnityEngine.Canvas::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Canvas_get_pixelRect_Injected();
		Register_UnityEngine_Canvas_get_pixelRect_Injected();

		//System.Void UnityEngine.Canvas::get_renderingDisplaySize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Canvas_get_renderingDisplaySize_Injected();
		Register_UnityEngine_Canvas_get_renderingDisplaySize_Injected();

		//System.Void UnityEngine.Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels)
		void Register_UnityEngine_Canvas_set_additionalShaderChannels();
		Register_UnityEngine_Canvas_set_additionalShaderChannels();

		//System.Void UnityEngine.Canvas::set_normalizedSortingGridSize(System.Single)
		void Register_UnityEngine_Canvas_set_normalizedSortingGridSize();
		Register_UnityEngine_Canvas_set_normalizedSortingGridSize();

		//System.Void UnityEngine.Canvas::set_overridePixelPerfect(System.Boolean)
		void Register_UnityEngine_Canvas_set_overridePixelPerfect();
		Register_UnityEngine_Canvas_set_overridePixelPerfect();

		//System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
		void Register_UnityEngine_Canvas_set_overrideSorting();
		Register_UnityEngine_Canvas_set_overrideSorting();

		//System.Void UnityEngine.Canvas::set_pixelPerfect(System.Boolean)
		void Register_UnityEngine_Canvas_set_pixelPerfect();
		Register_UnityEngine_Canvas_set_pixelPerfect();

		//System.Void UnityEngine.Canvas::set_planeDistance(System.Single)
		void Register_UnityEngine_Canvas_set_planeDistance();
		Register_UnityEngine_Canvas_set_planeDistance();

		//System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
		void Register_UnityEngine_Canvas_set_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_set_referencePixelsPerUnit();

		//System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
		void Register_UnityEngine_Canvas_set_renderMode();
		Register_UnityEngine_Canvas_set_renderMode();

		//System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
		void Register_UnityEngine_Canvas_set_scaleFactor();
		Register_UnityEngine_Canvas_set_scaleFactor();

		//System.Void UnityEngine.Canvas::set_sortingGridNormalizedSize(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingGridNormalizedSize();
		Register_UnityEngine_Canvas_set_sortingGridNormalizedSize();

		//System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingLayerID();
		Register_UnityEngine_Canvas_set_sortingLayerID();

		//System.Void UnityEngine.Canvas::set_sortingLayerName(System.String)
		void Register_UnityEngine_Canvas_set_sortingLayerName();
		Register_UnityEngine_Canvas_set_sortingLayerName();

		//System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingOrder();
		Register_UnityEngine_Canvas_set_sortingOrder();

		//System.Void UnityEngine.Canvas::set_targetDisplay(System.Int32)
		void Register_UnityEngine_Canvas_set_targetDisplay();
		Register_UnityEngine_Canvas_set_targetDisplay();

		//System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
		void Register_UnityEngine_Canvas_set_worldCamera();
		Register_UnityEngine_Canvas_set_worldCamera();

		//UnityEngine.AdditionalCanvasShaderChannels UnityEngine.Canvas::get_additionalShaderChannels()
		void Register_UnityEngine_Canvas_get_additionalShaderChannels();
		Register_UnityEngine_Canvas_get_additionalShaderChannels();

		//UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
		void Register_UnityEngine_Canvas_get_worldCamera();
		Register_UnityEngine_Canvas_get_worldCamera();

		//UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
		void Register_UnityEngine_Canvas_get_rootCanvas();
		Register_UnityEngine_Canvas_get_rootCanvas();

		//UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
		void Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();
		Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();

		//UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
		void Register_UnityEngine_Canvas_GetDefaultCanvasTextMaterial();
		Register_UnityEngine_Canvas_GetDefaultCanvasTextMaterial();

		//UnityEngine.Material UnityEngine.Canvas::GetETC1SupportedCanvasMaterial()
		void Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();
		Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();

		//UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
		void Register_UnityEngine_Canvas_get_renderMode();
		Register_UnityEngine_Canvas_get_renderMode();

	//End Registrations for type : UnityEngine.Canvas

	//Start Registrations for type : UnityEngine.CanvasGroup

		//System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
		void Register_UnityEngine_CanvasGroup_get_blocksRaycasts();
		Register_UnityEngine_CanvasGroup_get_blocksRaycasts();

		//System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
		void Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();
		Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();

		//System.Boolean UnityEngine.CanvasGroup::get_interactable()
		void Register_UnityEngine_CanvasGroup_get_interactable();
		Register_UnityEngine_CanvasGroup_get_interactable();

		//System.Single UnityEngine.CanvasGroup::get_alpha()
		void Register_UnityEngine_CanvasGroup_get_alpha();
		Register_UnityEngine_CanvasGroup_get_alpha();

		//System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
		void Register_UnityEngine_CanvasGroup_set_alpha();
		Register_UnityEngine_CanvasGroup_set_alpha();

		//System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
		void Register_UnityEngine_CanvasGroup_set_blocksRaycasts();
		Register_UnityEngine_CanvasGroup_set_blocksRaycasts();

		//System.Void UnityEngine.CanvasGroup::set_ignoreParentGroups(System.Boolean)
		void Register_UnityEngine_CanvasGroup_set_ignoreParentGroups();
		Register_UnityEngine_CanvasGroup_set_ignoreParentGroups();

		//System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
		void Register_UnityEngine_CanvasGroup_set_interactable();
		Register_UnityEngine_CanvasGroup_set_interactable();

	//End Registrations for type : UnityEngine.CanvasGroup

	//Start Registrations for type : UnityEngine.CanvasRenderer

		//System.Boolean UnityEngine.CanvasRenderer::get_cull()
		void Register_UnityEngine_CanvasRenderer_get_cull();
		Register_UnityEngine_CanvasRenderer_get_cull();

		//System.Boolean UnityEngine.CanvasRenderer::get_cullTransparentMesh()
		void Register_UnityEngine_CanvasRenderer_get_cullTransparentMesh();
		Register_UnityEngine_CanvasRenderer_get_cullTransparentMesh();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
		void Register_UnityEngine_CanvasRenderer_get_hasMoved();
		Register_UnityEngine_CanvasRenderer_get_hasMoved();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasPopInstruction()
		void Register_UnityEngine_CanvasRenderer_get_hasPopInstruction();
		Register_UnityEngine_CanvasRenderer_get_hasPopInstruction();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasRectClipping()
		void Register_UnityEngine_CanvasRenderer_get_hasRectClipping();
		Register_UnityEngine_CanvasRenderer_get_hasRectClipping();

		//System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
		void Register_UnityEngine_CanvasRenderer_get_absoluteDepth();
		Register_UnityEngine_CanvasRenderer_get_absoluteDepth();

		//System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
		void Register_UnityEngine_CanvasRenderer_get_materialCount();
		Register_UnityEngine_CanvasRenderer_get_materialCount();

		//System.Int32 UnityEngine.CanvasRenderer::get_popMaterialCount()
		void Register_UnityEngine_CanvasRenderer_get_popMaterialCount();
		Register_UnityEngine_CanvasRenderer_get_popMaterialCount();

		//System.Int32 UnityEngine.CanvasRenderer::get_relativeDepth()
		void Register_UnityEngine_CanvasRenderer_get_relativeDepth();
		Register_UnityEngine_CanvasRenderer_get_relativeDepth();

		//System.Single UnityEngine.CanvasRenderer::GetInheritedAlpha()
		void Register_UnityEngine_CanvasRenderer_GetInheritedAlpha();
		Register_UnityEngine_CanvasRenderer_GetInheritedAlpha();

		//System.Void UnityEngine.CanvasRenderer::Clear()
		void Register_UnityEngine_CanvasRenderer_Clear();
		Register_UnityEngine_CanvasRenderer_Clear();

		//System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();
		Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();

		//System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
		void Register_UnityEngine_CanvasRenderer_DisableRectClipping();
		Register_UnityEngine_CanvasRenderer_DisableRectClipping();

		//System.Void UnityEngine.CanvasRenderer::EnableRectClipping_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();
		Register_UnityEngine_CanvasRenderer_EnableRectClipping_Injected();

		//System.Void UnityEngine.CanvasRenderer::GetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_GetColor_Injected();
		Register_UnityEngine_CanvasRenderer_GetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetAlphaTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetAlphaTexture();
		Register_UnityEngine_CanvasRenderer_SetAlphaTexture();

		//System.Void UnityEngine.CanvasRenderer::SetColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_SetColor_Injected();
		Register_UnityEngine_CanvasRenderer_SetColor_Injected();

		//System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetMaterial();
		Register_UnityEngine_CanvasRenderer_SetMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
		void Register_UnityEngine_CanvasRenderer_SetMesh();
		Register_UnityEngine_CanvasRenderer_SetMesh();

		//System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetPopMaterial();
		Register_UnityEngine_CanvasRenderer_SetPopMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetTexture();
		Register_UnityEngine_CanvasRenderer_SetTexture();

		//System.Void UnityEngine.CanvasRenderer::SplitIndicesStreamsInternal(System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::get_clippingSoftness_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_CanvasRenderer_get_clippingSoftness_Injected();
		Register_UnityEngine_CanvasRenderer_get_clippingSoftness_Injected();

		//System.Void UnityEngine.CanvasRenderer::set_clippingSoftness_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_CanvasRenderer_set_clippingSoftness_Injected();
		Register_UnityEngine_CanvasRenderer_set_clippingSoftness_Injected();

		//System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_cull();
		Register_UnityEngine_CanvasRenderer_set_cull();

		//System.Void UnityEngine.CanvasRenderer::set_cullTransparentMesh(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_cullTransparentMesh();
		Register_UnityEngine_CanvasRenderer_set_cullTransparentMesh();

		//System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();
		Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();

		//System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_materialCount();
		Register_UnityEngine_CanvasRenderer_set_materialCount();

		//System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_popMaterialCount();
		Register_UnityEngine_CanvasRenderer_set_popMaterialCount();

		//UnityEngine.Material UnityEngine.CanvasRenderer::GetMaterial(System.Int32)
		void Register_UnityEngine_CanvasRenderer_GetMaterial();
		Register_UnityEngine_CanvasRenderer_GetMaterial();

		//UnityEngine.Material UnityEngine.CanvasRenderer::GetPopMaterial(System.Int32)
		void Register_UnityEngine_CanvasRenderer_GetPopMaterial();
		Register_UnityEngine_CanvasRenderer_GetPopMaterial();

	//End Registrations for type : UnityEngine.CanvasRenderer

	//Start Registrations for type : UnityEngine.CapsuleCollider

		//System.Int32 UnityEngine.CapsuleCollider::get_direction()
		void Register_UnityEngine_CapsuleCollider_get_direction();
		Register_UnityEngine_CapsuleCollider_get_direction();

		//System.Single UnityEngine.CapsuleCollider::get_height()
		void Register_UnityEngine_CapsuleCollider_get_height();
		Register_UnityEngine_CapsuleCollider_get_height();

		//System.Single UnityEngine.CapsuleCollider::get_radius()
		void Register_UnityEngine_CapsuleCollider_get_radius();
		Register_UnityEngine_CapsuleCollider_get_radius();

		//System.Void UnityEngine.CapsuleCollider::CalculateTransform_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_CapsuleCollider_CalculateTransform_Injected();
		Register_UnityEngine_CapsuleCollider_CalculateTransform_Injected();

		//System.Void UnityEngine.CapsuleCollider::GetGlobalExtents_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_CapsuleCollider_GetGlobalExtents_Injected();
		Register_UnityEngine_CapsuleCollider_GetGlobalExtents_Injected();

		//System.Void UnityEngine.CapsuleCollider::get_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_CapsuleCollider_get_center_Injected();
		Register_UnityEngine_CapsuleCollider_get_center_Injected();

		//System.Void UnityEngine.CapsuleCollider::set_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_CapsuleCollider_set_center_Injected();
		Register_UnityEngine_CapsuleCollider_set_center_Injected();

		//System.Void UnityEngine.CapsuleCollider::set_direction(System.Int32)
		void Register_UnityEngine_CapsuleCollider_set_direction();
		Register_UnityEngine_CapsuleCollider_set_direction();

		//System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
		void Register_UnityEngine_CapsuleCollider_set_height();
		Register_UnityEngine_CapsuleCollider_set_height();

		//System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
		void Register_UnityEngine_CapsuleCollider_set_radius();
		Register_UnityEngine_CapsuleCollider_set_radius();

	//End Registrations for type : UnityEngine.CapsuleCollider

	//Start Registrations for type : UnityEngine.CharacterController

		//System.Void UnityEngine.CharacterController::get_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_CharacterController_get_velocity_Injected();
		Register_UnityEngine_CharacterController_get_velocity_Injected();

		//UnityEngine.CollisionFlags UnityEngine.CharacterController::Move_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_CharacterController_Move_Injected();
		Register_UnityEngine_CharacterController_Move_Injected();

	//End Registrations for type : UnityEngine.CharacterController

	//Start Registrations for type : UnityEngine.Collider

		//System.Boolean UnityEngine.Collider::get_enabled()
		void Register_UnityEngine_Collider_get_enabled();
		Register_UnityEngine_Collider_get_enabled();

		//System.Void UnityEngine.Collider::ClosestPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Collider_ClosestPoint_Injected();
		Register_UnityEngine_Collider_ClosestPoint_Injected();

		//System.Void UnityEngine.Collider::Raycast_Injected(UnityEngine.Ray&,System.Single,System.Boolean&,UnityEngine.RaycastHit&)
		void Register_UnityEngine_Collider_Raycast_Injected();
		Register_UnityEngine_Collider_Raycast_Injected();

		//System.Void UnityEngine.Collider::set_enabled(System.Boolean)
		void Register_UnityEngine_Collider_set_enabled();
		Register_UnityEngine_Collider_set_enabled();

		//UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
		void Register_UnityEngine_Collider_get_attachedRigidbody();
		Register_UnityEngine_Collider_get_attachedRigidbody();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Collider2D

		//System.Void UnityEngine.Collider2D::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Collider2D_get_bounds_Injected();
		Register_UnityEngine_Collider2D_get_bounds_Injected();

	//End Registrations for type : UnityEngine.Collider2D

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_Component_BroadcastMessage();
		Register_UnityEngine_Component_BroadcastMessage();

		//System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_Component_GetComponentFastPath();
		Register_UnityEngine_Component_GetComponentFastPath();

		//System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
		void Register_UnityEngine_Component_GetComponentsForListInternal();
		Register_UnityEngine_Component_GetComponentsForListInternal();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeBuffer

		//System.Int32 UnityEngine.ComputeBuffer::get_count()
		void Register_UnityEngine_ComputeBuffer_get_count();
		Register_UnityEngine_ComputeBuffer_get_count();

		//System.Int32 UnityEngine.ComputeBuffer::get_stride()
		void Register_UnityEngine_ComputeBuffer_get_stride();
		Register_UnityEngine_ComputeBuffer_get_stride();

		//System.IntPtr UnityEngine.ComputeBuffer::InitBuffer(System.Int32,System.Int32,UnityEngine.ComputeBufferType,UnityEngine.ComputeBufferMode)
		void Register_UnityEngine_ComputeBuffer_InitBuffer();
		Register_UnityEngine_ComputeBuffer_InitBuffer();

		//System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeBuffer_DestroyBuffer();
		Register_UnityEngine_ComputeBuffer_DestroyBuffer();

		//System.Void UnityEngine.ComputeBuffer::SetName(System.String)
		void Register_UnityEngine_ComputeBuffer_SetName();
		Register_UnityEngine_ComputeBuffer_SetName();

	//End Registrations for type : UnityEngine.ComputeBuffer

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Boolean UnityEngine.ComputeShader::HasKernel(System.String)
		void Register_UnityEngine_ComputeShader_HasKernel();
		Register_UnityEngine_ComputeShader_HasKernel();

		//System.Boolean UnityEngine.ComputeShader::IsKeywordEnabled(System.String)
		void Register_UnityEngine_ComputeShader_IsKeywordEnabled();
		Register_UnityEngine_ComputeShader_IsKeywordEnabled();

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

		//System.String[] UnityEngine.ComputeShader::GetShaderKeywords()
		void Register_UnityEngine_ComputeShader_GetShaderKeywords();
		Register_UnityEngine_ComputeShader_GetShaderKeywords();

		//System.Void UnityEngine.ComputeShader::DisableKeyword(System.String)
		void Register_UnityEngine_ComputeShader_DisableKeyword();
		Register_UnityEngine_ComputeShader_DisableKeyword();

		//System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_Dispatch();
		Register_UnityEngine_ComputeShader_Dispatch();

		//System.Void UnityEngine.ComputeShader::EnableKeyword(System.String)
		void Register_UnityEngine_ComputeShader_EnableKeyword();
		Register_UnityEngine_ComputeShader_EnableKeyword();

		//System.Void UnityEngine.ComputeShader::GetKernelThreadGroupSizes(System.Int32,System.UInt32&,System.UInt32&,System.UInt32&)
		void Register_UnityEngine_ComputeShader_GetKernelThreadGroupSizes();
		Register_UnityEngine_ComputeShader_GetKernelThreadGroupSizes();

		//System.Void UnityEngine.ComputeShader::Internal_DispatchIndirect(System.Int32,UnityEngine.ComputeBuffer,System.UInt32)
		void Register_UnityEngine_ComputeShader_Internal_DispatchIndirect();
		Register_UnityEngine_ComputeShader_Internal_DispatchIndirect();

		//System.Void UnityEngine.ComputeShader::Internal_DispatchIndirectGraphicsBuffer(System.Int32,UnityEngine.GraphicsBuffer,System.UInt32)
		void Register_UnityEngine_ComputeShader_Internal_DispatchIndirectGraphicsBuffer();
		Register_UnityEngine_ComputeShader_Internal_DispatchIndirectGraphicsBuffer();

		//System.Void UnityEngine.ComputeShader::Internal_SetBuffer(System.Int32,System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeShader_Internal_SetBuffer();
		Register_UnityEngine_ComputeShader_Internal_SetBuffer();

		//System.Void UnityEngine.ComputeShader::Internal_SetGraphicsBuffer(System.Int32,System.Int32,UnityEngine.GraphicsBuffer)
		void Register_UnityEngine_ComputeShader_Internal_SetGraphicsBuffer();
		Register_UnityEngine_ComputeShader_Internal_SetGraphicsBuffer();

		//System.Void UnityEngine.ComputeShader::SetConstantComputeBuffer(System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_SetConstantComputeBuffer();
		Register_UnityEngine_ComputeShader_SetConstantComputeBuffer();

		//System.Void UnityEngine.ComputeShader::SetConstantGraphicsBuffer(System.Int32,UnityEngine.GraphicsBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_SetConstantGraphicsBuffer();
		Register_UnityEngine_ComputeShader_SetConstantGraphicsBuffer();

		//System.Void UnityEngine.ComputeShader::SetFloat(System.Int32,System.Single)
		void Register_UnityEngine_ComputeShader_SetFloat();
		Register_UnityEngine_ComputeShader_SetFloat();

		//System.Void UnityEngine.ComputeShader::SetFloatArray(System.Int32,System.Single[])
		void Register_UnityEngine_ComputeShader_SetFloatArray();
		Register_UnityEngine_ComputeShader_SetFloatArray();

		//System.Void UnityEngine.ComputeShader::SetInt(System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_SetInt();
		Register_UnityEngine_ComputeShader_SetInt();

		//System.Void UnityEngine.ComputeShader::SetIntArray(System.Int32,System.Int32[])
		void Register_UnityEngine_ComputeShader_SetIntArray();
		Register_UnityEngine_ComputeShader_SetIntArray();

		//System.Void UnityEngine.ComputeShader::SetMatrixArray(System.Int32,UnityEngine.Matrix4x4[])
		void Register_UnityEngine_ComputeShader_SetMatrixArray();
		Register_UnityEngine_ComputeShader_SetMatrixArray();

		//System.Void UnityEngine.ComputeShader::SetMatrix_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_ComputeShader_SetMatrix_Injected();
		Register_UnityEngine_ComputeShader_SetMatrix_Injected();

		//System.Void UnityEngine.ComputeShader::SetRenderTexture(System.Int32,System.Int32,UnityEngine.RenderTexture,System.Int32,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_ComputeShader_SetRenderTexture();
		Register_UnityEngine_ComputeShader_SetRenderTexture();

		//System.Void UnityEngine.ComputeShader::SetShaderKeywords(System.String[])
		void Register_UnityEngine_ComputeShader_SetShaderKeywords();
		Register_UnityEngine_ComputeShader_SetShaderKeywords();

		//System.Void UnityEngine.ComputeShader::SetTexture(System.Int32,System.Int32,UnityEngine.Texture,System.Int32)
		void Register_UnityEngine_ComputeShader_SetTexture();
		Register_UnityEngine_ComputeShader_SetTexture();

		//System.Void UnityEngine.ComputeShader::SetTextureFromGlobal(System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_SetTextureFromGlobal();
		Register_UnityEngine_ComputeShader_SetTextureFromGlobal();

		//System.Void UnityEngine.ComputeShader::SetVectorArray(System.Int32,UnityEngine.Vector4[])
		void Register_UnityEngine_ComputeShader_SetVectorArray();
		Register_UnityEngine_ComputeShader_SetVectorArray();

		//System.Void UnityEngine.ComputeShader::SetVector_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_ComputeShader_SetVector_Injected();
		Register_UnityEngine_ComputeShader_SetVector_Injected();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.ContactFilter2D

		//System.Void UnityEngine.ContactFilter2D::CheckConsistency_Injected(UnityEngine.ContactFilter2D&)
		void Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();
		Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();

	//End Registrations for type : UnityEngine.ContactFilter2D

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

		//System.Boolean UnityEngine.Cubemap::get_isReadable()
		void Register_UnityEngine_Cubemap_get_isReadable();
		Register_UnityEngine_Cubemap_get_isReadable();

		//System.Void UnityEngine.Cubemap::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Cubemap_ApplyImpl();
		Register_UnityEngine_Cubemap_ApplyImpl();

		//System.Void UnityEngine.Cubemap::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Cubemap_SetPixelImpl_Injected();
		Register_UnityEngine_Cubemap_SetPixelImpl_Injected();

		//System.Void UnityEngine.Cubemap::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Cubemap_UpdateExternalTexture();
		Register_UnityEngine_Cubemap_UpdateExternalTexture();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.CubemapArray::get_isReadable()
		void Register_UnityEngine_CubemapArray_get_isReadable();
		Register_UnityEngine_CubemapArray_get_isReadable();

		//System.Void UnityEngine.CubemapArray::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_CubemapArray_ApplyImpl();
		Register_UnityEngine_CubemapArray_ApplyImpl();

		//System.Void UnityEngine.CubemapArray::SetPixels(UnityEngine.Color[],UnityEngine.CubemapFace,System.Int32,System.Int32)
		void Register_UnityEngine_CubemapArray_SetPixels();
		Register_UnityEngine_CubemapArray_SetPixels();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.Cursor

		//System.Void UnityEngine.Cursor::set_visible(System.Boolean)
		void Register_UnityEngine_Cursor_set_visible();
		Register_UnityEngine_Cursor_set_visible();

		//UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
		void Register_UnityEngine_Cursor_get_lockState();
		Register_UnityEngine_Cursor_get_lockState();

	//End Registrations for type : UnityEngine.Cursor

	//Start Registrations for type : UnityEngine.Debug

		//System.Boolean UnityEngine.Debug::get_isDebugBuild()
		void Register_UnityEngine_Debug_get_isDebugBuild();
		Register_UnityEngine_Debug_get_isDebugBuild();

		//System.Int32 UnityEngine.Debug::ExtractStackTraceNoAlloc(System.Byte*,System.Int32,System.String)
		void Register_UnityEngine_Debug_ExtractStackTraceNoAlloc();
		Register_UnityEngine_Debug_ExtractStackTraceNoAlloc();

	//End Registrations for type : UnityEngine.Debug

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,UnityEngine.LogOption,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Boolean UnityEngine.Display::RequiresSrgbBlitToBackbufferImpl(System.IntPtr)
		void Register_UnityEngine_Display_RequiresSrgbBlitToBackbufferImpl();
		Register_UnityEngine_Display_RequiresSrgbBlitToBackbufferImpl();

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
		void Register_UnityEngine_Display_GetRenderingBuffersImpl();
		Register_UnityEngine_Display_GetRenderingBuffersImpl();

		//System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetRenderingExtImpl();
		Register_UnityEngine_Display_GetRenderingExtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
		void Register_UnityEngine_Event_PopEvent();
		Register_UnityEngine_Event_PopEvent();

		//System.Char UnityEngine.Event::get_character()
		void Register_UnityEngine_Event_get_character();
		Register_UnityEngine_Event_get_character();

		//System.Int32 UnityEngine.Event::get_clickCount()
		void Register_UnityEngine_Event_get_clickCount();
		Register_UnityEngine_Event_get_clickCount();

		//System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
		void Register_UnityEngine_Event_Internal_Create();
		Register_UnityEngine_Event_Internal_Create();

		//System.String UnityEngine.Event::get_commandName()
		void Register_UnityEngine_Event_get_commandName();
		Register_UnityEngine_Event_get_commandName();

		//System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_Event_Internal_Destroy();
		Register_UnityEngine_Event_Internal_Destroy();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::Internal_Use()
		void Register_UnityEngine_Event_Internal_Use();
		Register_UnityEngine_Event_Internal_Use();

		//System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_mousePosition_Injected();
		Register_UnityEngine_Event_get_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_character(System.Char)
		void Register_UnityEngine_Event_set_character();
		Register_UnityEngine_Event_set_character();

		//System.Void UnityEngine.Event::set_displayIndex(System.Int32)
		void Register_UnityEngine_Event_set_displayIndex();
		Register_UnityEngine_Event_set_displayIndex();

		//System.Void UnityEngine.Event::set_keyCode(UnityEngine.KeyCode)
		void Register_UnityEngine_Event_set_keyCode();
		Register_UnityEngine_Event_set_keyCode();

		//System.Void UnityEngine.Event::set_modifiers(UnityEngine.EventModifiers)
		void Register_UnityEngine_Event_set_modifiers();
		Register_UnityEngine_Event_set_modifiers();

		//System.Void UnityEngine.Event::set_type(UnityEngine.EventType)
		void Register_UnityEngine_Event_set_type();
		Register_UnityEngine_Event_set_type();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
		void Register_UnityEngine_Event_get_modifiers();
		Register_UnityEngine_Event_get_modifiers();

		//UnityEngine.EventType UnityEngine.Event::get_rawType()
		void Register_UnityEngine_Event_get_rawType();
		Register_UnityEngine_Event_get_rawType();

		//UnityEngine.EventType UnityEngine.Event::get_type()
		void Register_UnityEngine_Event_get_type();
		Register_UnityEngine_Event_get_type();

		//UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
		void Register_UnityEngine_Event_get_keyCode();
		Register_UnityEngine_Event_get_keyCode();

		//UnityEngine.PointerType UnityEngine.Event::get_pointerType()
		void Register_UnityEngine_Event_get_pointerType();
		Register_UnityEngine_Event_get_pointerType();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetFormat(UnityEngine.Texture)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

		//UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetRenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetRenderTextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.Flare

		//System.Void UnityEngine.Flare::Internal_Create(UnityEngine.Flare)
		void Register_UnityEngine_Flare_Internal_Create();
		Register_UnityEngine_Flare_Internal_Create();

	//End Registrations for type : UnityEngine.Flare

	//Start Registrations for type : UnityEngine.Font

		//System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
		void Register_UnityEngine_Font_GetCharacterInfo();
		Register_UnityEngine_Font_GetCharacterInfo();

		//System.Boolean UnityEngine.Font::HasCharacter(System.Int32)
		void Register_UnityEngine_Font_HasCharacter();
		Register_UnityEngine_Font_HasCharacter();

		//System.Boolean UnityEngine.Font::get_dynamic()
		void Register_UnityEngine_Font_get_dynamic();
		Register_UnityEngine_Font_get_dynamic();

		//System.Int32 UnityEngine.Font::get_ascent()
		void Register_UnityEngine_Font_get_ascent();
		Register_UnityEngine_Font_get_ascent();

		//System.Int32 UnityEngine.Font::get_fontSize()
		void Register_UnityEngine_Font_get_fontSize();
		Register_UnityEngine_Font_get_fontSize();

		//System.Int32 UnityEngine.Font::get_lineHeight()
		void Register_UnityEngine_Font_get_lineHeight();
		Register_UnityEngine_Font_get_lineHeight();

		//System.String[] UnityEngine.Font::GetOSInstalledFontNames()
		void Register_UnityEngine_Font_GetOSInstalledFontNames();
		Register_UnityEngine_Font_GetOSInstalledFontNames();

		//System.String[] UnityEngine.Font::GetPathsToOSFonts()
		void Register_UnityEngine_Font_GetPathsToOSFonts();
		Register_UnityEngine_Font_GetPathsToOSFonts();

		//System.String[] UnityEngine.Font::get_fontNames()
		void Register_UnityEngine_Font_get_fontNames();
		Register_UnityEngine_Font_get_fontNames();

		//System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
		void Register_UnityEngine_Font_Internal_CreateDynamicFont();
		Register_UnityEngine_Font_Internal_CreateDynamicFont();

		//System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
		void Register_UnityEngine_Font_Internal_CreateFont();
		Register_UnityEngine_Font_Internal_CreateFont();

		//System.Void UnityEngine.Font::Internal_CreateFontFromPath(UnityEngine.Font,System.String)
		void Register_UnityEngine_Font_Internal_CreateFontFromPath();
		Register_UnityEngine_Font_Internal_CreateFontFromPath();

		//System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
		void Register_UnityEngine_Font_RequestCharactersInTexture();
		Register_UnityEngine_Font_RequestCharactersInTexture();

		//System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
		void Register_UnityEngine_Font_set_characterInfo();
		Register_UnityEngine_Font_set_characterInfo();

		//System.Void UnityEngine.Font::set_fontNames(System.String[])
		void Register_UnityEngine_Font_set_fontNames();
		Register_UnityEngine_Font_set_fontNames();

		//System.Void UnityEngine.Font::set_material(UnityEngine.Material)
		void Register_UnityEngine_Font_set_material();
		Register_UnityEngine_Font_set_material();

		//UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
		void Register_UnityEngine_Font_get_characterInfo();
		Register_UnityEngine_Font_get_characterInfo();

		//UnityEngine.Font UnityEngine.Font::GetDefault()
		void Register_UnityEngine_Font_GetDefault();
		Register_UnityEngine_Font_GetDefault();

		//UnityEngine.Material UnityEngine.Font::get_material()
		void Register_UnityEngine_Font_get_material();
		Register_UnityEngine_Font_get_material();

	//End Registrations for type : UnityEngine.Font

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Boolean UnityEngine.GameObject::CompareTag(System.String)
		void Register_UnityEngine_GameObject_CompareTag();
		Register_UnityEngine_GameObject_CompareTag();

		//System.Boolean UnityEngine.GameObject::get_active()
		void Register_UnityEngine_GameObject_get_active();
		Register_UnityEngine_GameObject_get_active();

		//System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
		void Register_UnityEngine_GameObject_get_activeInHierarchy();
		Register_UnityEngine_GameObject_get_activeInHierarchy();

		//System.Boolean UnityEngine.GameObject::get_activeSelf()
		void Register_UnityEngine_GameObject_get_activeSelf();
		Register_UnityEngine_GameObject_get_activeSelf();

		//System.Boolean UnityEngine.GameObject::get_isStatic()
		void Register_UnityEngine_GameObject_get_isStatic();
		Register_UnityEngine_GameObject_get_isStatic();

		//System.Boolean UnityEngine.GameObject::get_isStaticBatchable()
		void Register_UnityEngine_GameObject_get_isStaticBatchable();
		Register_UnityEngine_GameObject_get_isStaticBatchable();

		//System.Int32 UnityEngine.GameObject::get_layer()
		void Register_UnityEngine_GameObject_get_layer();
		Register_UnityEngine_GameObject_get_layer();

		//System.String UnityEngine.GameObject::get_tag()
		void Register_UnityEngine_GameObject_get_tag();
		Register_UnityEngine_GameObject_get_tag();

		//System.UInt64 UnityEngine.GameObject::get_sceneCullingMask()
		void Register_UnityEngine_GameObject_get_sceneCullingMask();
		Register_UnityEngine_GameObject_get_sceneCullingMask();

		//System.Void UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_BroadcastMessage();
		Register_UnityEngine_GameObject_BroadcastMessage();

		//System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_GetComponentFastPath();
		Register_UnityEngine_GameObject_GetComponentFastPath();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SendMessageUpwards(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessageUpwards();
		Register_UnityEngine_GameObject_SendMessageUpwards();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::SetActiveRecursively(System.Boolean)
		void Register_UnityEngine_GameObject_SetActiveRecursively();
		Register_UnityEngine_GameObject_SetActiveRecursively();

		//System.Void UnityEngine.GameObject::TryGetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_TryGetComponentFastPath();
		Register_UnityEngine_GameObject_TryGetComponentFastPath();

		//System.Void UnityEngine.GameObject::get_scene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_GameObject_get_scene_Injected();
		Register_UnityEngine_GameObject_get_scene_Injected();

		//System.Void UnityEngine.GameObject::set_active(System.Boolean)
		void Register_UnityEngine_GameObject_set_active();
		Register_UnityEngine_GameObject_set_active();

		//System.Void UnityEngine.GameObject::set_isStatic(System.Boolean)
		void Register_UnityEngine_GameObject_set_isStatic();
		Register_UnityEngine_GameObject_set_isStatic();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//System.Void UnityEngine.GameObject::set_tag(System.String)
		void Register_UnityEngine_GameObject_set_tag();
		Register_UnityEngine_GameObject_set_tag();

		//UnityEngine.Component UnityEngine.GameObject::AddComponentInternal(System.String)
		void Register_UnityEngine_GameObject_AddComponentInternal();
		Register_UnityEngine_GameObject_AddComponentInternal();

		//UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
		void Register_UnityEngine_GameObject_GetComponent();
		Register_UnityEngine_GameObject_GetComponent();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
		void Register_UnityEngine_GameObject_GetComponentByName();
		Register_UnityEngine_GameObject_GetComponentByName();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInChildren();
		Register_UnityEngine_GameObject_GetComponentInChildren();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInParent();
		Register_UnityEngine_GameObject_GetComponentInParent();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.Component UnityEngine.GameObject::TryGetComponentInternal(System.Type)
		void Register_UnityEngine_GameObject_TryGetComponentInternal();
		Register_UnityEngine_GameObject_TryGetComponentInternal();

		//UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
		void Register_UnityEngine_GameObject_CreatePrimitive();
		Register_UnityEngine_GameObject_CreatePrimitive();

		//UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
		void Register_UnityEngine_GameObject_Find();
		Register_UnityEngine_GameObject_Find();

		//UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
		void Register_UnityEngine_GameObject_FindGameObjectWithTag();
		Register_UnityEngine_GameObject_FindGameObjectWithTag();

		//UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
		void Register_UnityEngine_GameObject_FindGameObjectsWithTag();
		Register_UnityEngine_GameObject_FindGameObjectsWithTag();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gizmos

		//System.Void UnityEngine.Gizmos::DrawCube_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawCube_Injected();
		Register_UnityEngine_Gizmos_DrawCube_Injected();

		//System.Void UnityEngine.Gizmos::DrawIcon_Injected(UnityEngine.Vector3&,System.String,System.Boolean,UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_DrawIcon_Injected();
		Register_UnityEngine_Gizmos_DrawIcon_Injected();

		//System.Void UnityEngine.Gizmos::DrawMesh_Injected(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawMesh_Injected();
		Register_UnityEngine_Gizmos_DrawMesh_Injected();

		//System.Void UnityEngine.Gizmos::DrawSphere_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Gizmos_DrawSphere_Injected();
		Register_UnityEngine_Gizmos_DrawSphere_Injected();

		//System.Void UnityEngine.Gizmos::DrawWireCube_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawWireCube_Injected();
		Register_UnityEngine_Gizmos_DrawWireCube_Injected();

		//System.Void UnityEngine.Gizmos::DrawWireMesh_Injected(UnityEngine.Mesh,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawWireMesh_Injected();
		Register_UnityEngine_Gizmos_DrawWireMesh_Injected();

		//System.Void UnityEngine.Gizmos::DrawWireSphere_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Gizmos_DrawWireSphere_Injected();
		Register_UnityEngine_Gizmos_DrawWireSphere_Injected();

		//System.Void UnityEngine.Gizmos::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_set_color_Injected();
		Register_UnityEngine_Gizmos_set_color_Injected();

		//System.Void UnityEngine.Gizmos::set_matrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Gizmos_set_matrix_Injected();
		Register_UnityEngine_Gizmos_set_matrix_Injected();

	//End Registrations for type : UnityEngine.Gizmos

	//Start Registrations for type : UnityEngine.GL

		//System.Void UnityEngine.GL::Begin(System.Int32)
		void Register_UnityEngine_GL_Begin();
		Register_UnityEngine_GL_Begin();

		//System.Void UnityEngine.GL::End()
		void Register_UnityEngine_GL_End();
		Register_UnityEngine_GL_End();

		//System.Void UnityEngine.GL::GLClear_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_GL_GLClear_Injected();
		Register_UnityEngine_GL_GLClear_Injected();

		//System.Void UnityEngine.GL::GetGPUProjectionMatrix_Injected(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GL_GetGPUProjectionMatrix_Injected();
		Register_UnityEngine_GL_GetGPUProjectionMatrix_Injected();

		//System.Void UnityEngine.GL::ImmediateColor(System.Single,System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_ImmediateColor();
		Register_UnityEngine_GL_ImmediateColor();

		//System.Void UnityEngine.GL::LoadIdentity()
		void Register_UnityEngine_GL_LoadIdentity();
		Register_UnityEngine_GL_LoadIdentity();

		//System.Void UnityEngine.GL::LoadOrtho()
		void Register_UnityEngine_GL_LoadOrtho();
		Register_UnityEngine_GL_LoadOrtho();

		//System.Void UnityEngine.GL::PopMatrix()
		void Register_UnityEngine_GL_PopMatrix();
		Register_UnityEngine_GL_PopMatrix();

		//System.Void UnityEngine.GL::PushMatrix()
		void Register_UnityEngine_GL_PushMatrix();
		Register_UnityEngine_GL_PushMatrix();

		//System.Void UnityEngine.GL::TexCoord3(System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_TexCoord3();
		Register_UnityEngine_GL_TexCoord3();

		//System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_Vertex3();
		Register_UnityEngine_GL_Vertex3();

	//End Registrations for type : UnityEngine.GL

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals();
		Register_UnityEngine_Gradient_Internal_Equals();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

		//System.Void UnityEngine.Gradient::Evaluate_Injected(System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Gradient_Evaluate_Injected();
		Register_UnityEngine_Gradient_Evaluate_Injected();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.Graphics

		//System.Boolean UnityEngine.Graphics::GetPreserveFramebufferAlpha()
		void Register_UnityEngine_Graphics_GetPreserveFramebufferAlpha();
		Register_UnityEngine_Graphics_GetPreserveFramebufferAlpha();

		//System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
		void Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();
		Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();

		//System.Void UnityEngine.Graphics::Blit2(UnityEngine.Texture,UnityEngine.RenderTexture)
		void Register_UnityEngine_Graphics_Blit2();
		Register_UnityEngine_Graphics_Blit2();

		//System.Void UnityEngine.Graphics::CopyTexture_Slice(UnityEngine.Texture,System.Int32,System.Int32,UnityEngine.Texture,System.Int32,System.Int32)
		void Register_UnityEngine_Graphics_CopyTexture_Slice();
		Register_UnityEngine_Graphics_CopyTexture_Slice();

		//System.Void UnityEngine.Graphics::Internal_BlitMaterial5(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
		void Register_UnityEngine_Graphics_Internal_BlitMaterial5();
		Register_UnityEngine_Graphics_Internal_BlitMaterial5();

		//System.Void UnityEngine.Graphics::Internal_BlitMultiTap4(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
		void Register_UnityEngine_Graphics_Internal_BlitMultiTap4();
		Register_UnityEngine_Graphics_Internal_BlitMultiTap4();

		//System.Void UnityEngine.Graphics::Internal_DrawTexture(UnityEngine.Internal_DrawTextureArguments&)
		void Register_UnityEngine_Graphics_Internal_DrawTexture();
		Register_UnityEngine_Graphics_Internal_DrawTexture();

		//System.Void UnityEngine.Graphics::Internal_SetNullRT()
		void Register_UnityEngine_Graphics_Internal_SetNullRT();
		Register_UnityEngine_Graphics_Internal_SetNullRT();

		//System.Void UnityEngine.Graphics::Internal_SetRTSimple_Injected(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
		void Register_UnityEngine_Graphics_Internal_SetRTSimple_Injected();
		Register_UnityEngine_Graphics_Internal_SetRTSimple_Injected();

		//System.Void UnityEngine.Graphics::set_activeTier(UnityEngine.Rendering.GraphicsTier)
		void Register_UnityEngine_Graphics_set_activeTier();
		Register_UnityEngine_Graphics_set_activeTier();

		//UnityEngine.Rendering.GraphicsTier UnityEngine.Graphics::get_activeTier()
		void Register_UnityEngine_Graphics_get_activeTier();
		Register_UnityEngine_Graphics_get_activeTier();

		//UnityEngine.Rendering.OpenGLESVersion UnityEngine.Graphics::GetMinOpenGLESVersion()
		void Register_UnityEngine_Graphics_GetMinOpenGLESVersion();
		Register_UnityEngine_Graphics_GetMinOpenGLESVersion();

	//End Registrations for type : UnityEngine.Graphics

	//Start Registrations for type : UnityEngine.GUI

		//System.Boolean UnityEngine.GUI::HasMouseControl(System.Int32)
		void Register_UnityEngine_GUI_HasMouseControl();
		Register_UnityEngine_GUI_HasMouseControl();

		//System.Void UnityEngine.GUI::GrabMouseControl(System.Int32)
		void Register_UnityEngine_GUI_GrabMouseControl();
		Register_UnityEngine_GUI_GrabMouseControl();

		//System.Void UnityEngine.GUI::ReleaseMouseControl()
		void Register_UnityEngine_GUI_ReleaseMouseControl();
		Register_UnityEngine_GUI_ReleaseMouseControl();

		//System.Void UnityEngine.GUI::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUI_get_color_Injected();
		Register_UnityEngine_GUI_get_color_Injected();

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

		//UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
		void Register_UnityEngine_GUI_get_blendMaterial();
		Register_UnityEngine_GUI_get_blendMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
		void Register_UnityEngine_GUI_get_blitMaterial();
		Register_UnityEngine_GUI_get_blitMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_roundedRectMaterial()
		void Register_UnityEngine_GUI_get_roundedRectMaterial();
		Register_UnityEngine_GUI_get_roundedRectMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_roundedRectWithColorPerBorderMaterial()
		void Register_UnityEngine_GUI_get_roundedRectWithColorPerBorderMaterial();
		Register_UnityEngine_GUI_get_roundedRectWithColorPerBorderMaterial();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUIClip

		//System.Void UnityEngine.GUIClip::SetMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_GUIClip_SetMatrix_Injected();
		Register_UnityEngine_GUIClip_SetMatrix_Injected();

		//System.Void UnityEngine.GUIClip::UnclipToWindow_Vector2_Injected(UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIClip_UnclipToWindow_Vector2_Injected();
		Register_UnityEngine_GUIClip_UnclipToWindow_Vector2_Injected();

		//System.Void UnityEngine.GUIClip::get_visibleRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_GUIClip_get_visibleRect_Injected();
		Register_UnityEngine_GUIClip_get_visibleRect_Injected();

	//End Registrations for type : UnityEngine.GUIClip

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();

		//System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUISettings

		//System.Single UnityEngine.GUISettings::Internal_GetCursorFlashSpeed()
		void Register_UnityEngine_GUISettings_Internal_GetCursorFlashSpeed();
		Register_UnityEngine_GUISettings_Internal_GetCursorFlashSpeed();

	//End Registrations for type : UnityEngine.GUISettings

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
		void Register_UnityEngine_GUIStyle_get_stretchHeight();
		Register_UnityEngine_GUIStyle_get_stretchHeight();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
		void Register_UnityEngine_GUIStyle_get_stretchWidth();
		Register_UnityEngine_GUIStyle_get_stretchWidth();

		//System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetCursorStringIndex_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetCursorStringIndex_Injected();

		//System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetRectOffsetPtr();
		Register_UnityEngine_GUIStyle_GetRectOffsetPtr();

		//System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetStyleStatePtr();
		Register_UnityEngine_GUIStyle_GetStyleStatePtr();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Create();
		Register_UnityEngine_GUIStyle_Internal_Create();

		//System.Single UnityEngine.GUIStyle::Internal_CalcHeight(UnityEngine.GUIContent,System.Single)
		void Register_UnityEngine_GUIStyle_Internal_CalcHeight();
		Register_UnityEngine_GUIStyle_Internal_CalcHeight();

		//System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
		void Register_UnityEngine_GUIStyle_Internal_GetCursorFlashOffset();
		Register_UnityEngine_GUIStyle_Internal_GetCursorFlashOffset();

		//System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_GetLineHeight();
		Register_UnityEngine_GUIStyle_Internal_GetLineHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight()
		void Register_UnityEngine_GUIStyle_get_fixedHeight();
		Register_UnityEngine_GUIStyle_get_fixedHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth()
		void Register_UnityEngine_GUIStyle_get_fixedWidth();
		Register_UnityEngine_GUIStyle_get_fixedWidth();

		//System.String UnityEngine.GUIStyle::Internal_GetSelectedRenderedText_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Int32)
		void Register_UnityEngine_GUIStyle_Internal_GetSelectedRenderedText_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetSelectedRenderedText_Injected();

		//System.String UnityEngine.GUIStyle::get_rawName()
		void Register_UnityEngine_GUIStyle_get_rawName();
		Register_UnityEngine_GUIStyle_get_rawName();

		//System.Void UnityEngine.GUIStyle::Internal_CalcSize_Injected(UnityEngine.GUIContent,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_CalcSize_Injected();
		Register_UnityEngine_GUIStyle_Internal_CalcSize_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Destroy();
		Register_UnityEngine_GUIStyle_Internal_Destroy();

		//System.Void UnityEngine.GUIStyle::Internal_Draw2_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw2_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_DrawCursor_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_GUIStyle_Internal_DrawCursor_Injected();
		Register_UnityEngine_GUIStyle_Internal_DrawCursor_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.Color&,UnityEngine.Color&)
		void Register_UnityEngine_GUIStyle_Internal_DrawWithTextSelection_Injected();
		Register_UnityEngine_GUIStyle_Internal_DrawWithTextSelection_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_Draw_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_GUIStyle_Internal_Draw_Injected();
		Register_UnityEngine_GUIStyle_Internal_Draw_Injected();

		//System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition_Injected(UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_Internal_GetCursorPixelPosition_Injected();
		Register_UnityEngine_GUIStyle_Internal_GetCursorPixelPosition_Injected();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_SetDefaultFont();
		Register_UnityEngine_GUIStyle_SetDefaultFont();

		//System.Void UnityEngine.GUIStyle::SetMouseTooltip_Injected(System.String,UnityEngine.Rect&)
		void Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();
		Register_UnityEngine_GUIStyle_SetMouseTooltip_Injected();

		//System.Void UnityEngine.GUIStyle::get_contentOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_get_contentOffset_Injected();
		Register_UnityEngine_GUIStyle_get_contentOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_Internal_clipOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_set_Internal_clipOffset_Injected();
		Register_UnityEngine_GUIStyle_set_Internal_clipOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_contentOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_set_contentOffset_Injected();
		Register_UnityEngine_GUIStyle_set_contentOffset_Injected();

		//System.Void UnityEngine.GUIStyle::set_rawName(System.String)
		void Register_UnityEngine_GUIStyle_set_rawName();
		Register_UnityEngine_GUIStyle_set_rawName();

		//System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchHeight();
		Register_UnityEngine_GUIStyle_set_stretchHeight();

		//UnityEngine.Font UnityEngine.GUIStyle::get_font()
		void Register_UnityEngine_GUIStyle_get_font();
		Register_UnityEngine_GUIStyle_get_font();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.IntPtr UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

		//System.Void UnityEngine.GUIStyleState::Cleanup()
		void Register_UnityEngine_GUIStyleState_Cleanup();
		Register_UnityEngine_GUIStyleState_Cleanup();

		//System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_set_textColor_Injected();
		Register_UnityEngine_GUIStyleState_set_textColor_Injected();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Int32 UnityEngine.GUIUtility::GetControlID_Injected(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
		void Register_UnityEngine_GUIUtility_GetControlID_Injected();
		Register_UnityEngine_GUIUtility_GetControlID_Injected();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
		void Register_UnityEngine_GUIUtility_Internal_GetHotControl();
		Register_UnityEngine_GUIUtility_Internal_GetHotControl();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetKeyboardControl()
		void Register_UnityEngine_GUIUtility_Internal_GetKeyboardControl();
		Register_UnityEngine_GUIUtility_Internal_GetKeyboardControl();

		//System.Int32 UnityEngine.GUIUtility::get_guiDepth()
		void Register_UnityEngine_GUIUtility_get_guiDepth();
		Register_UnityEngine_GUIUtility_get_guiDepth();

		//System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

		//System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
		void Register_UnityEngine_GUIUtility_get_pixelsPerPoint();
		Register_UnityEngine_GUIUtility_get_pixelsPerPoint();

		//System.String UnityEngine.GUIUtility::get_compositionString()
		void Register_UnityEngine_GUIUtility_get_compositionString();
		Register_UnityEngine_GUIUtility_get_compositionString();

		//System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
		void Register_UnityEngine_GUIUtility_get_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_get_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

		//System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_SetHotControl();
		Register_UnityEngine_GUIUtility_Internal_SetHotControl();

		//System.Void UnityEngine.GUIUtility::Internal_SetKeyboardControl(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_SetKeyboardControl();
		Register_UnityEngine_GUIUtility_Internal_SetKeyboardControl();

		//System.Void UnityEngine.GUIUtility::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUIUtility_set_compositionCursorPos_Injected();
		Register_UnityEngine_GUIUtility_set_compositionCursorPos_Injected();

		//System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
		void Register_UnityEngine_GUIUtility_set_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_set_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::set_textFieldInput(System.Boolean)
		void Register_UnityEngine_GUIUtility_set_textFieldInput();
		Register_UnityEngine_GUIUtility_set_textFieldInput();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Gyroscope

		//System.Void UnityEngine.Gyroscope::gravity_Internal_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_Gyroscope_gravity_Internal_Injected();
		Register_UnityEngine_Gyroscope_gravity_Internal_Injected();

		//System.Void UnityEngine.Gyroscope::setEnabled_Internal(System.Int32,System.Boolean)
		void Register_UnityEngine_Gyroscope_setEnabled_Internal();
		Register_UnityEngine_Gyroscope_setEnabled_Internal();

	//End Registrations for type : UnityEngine.Gyroscope

	//Start Registrations for type : UnityEngine.Hash128

		//System.String UnityEngine.Hash128::Hash128ToStringImpl_Injected(UnityEngine.Hash128&)
		void Register_UnityEngine_Hash128_Hash128ToStringImpl_Injected();
		Register_UnityEngine_Hash128_Hash128ToStringImpl_Injected();

		//System.Void UnityEngine.Hash128::ComputeFromString(System.String,UnityEngine.Hash128&)
		void Register_UnityEngine_Hash128_ComputeFromString();
		Register_UnityEngine_Hash128_ComputeFromString();

		//System.Void UnityEngine.Hash128::Parse_Injected(System.String,UnityEngine.Hash128&)
		void Register_UnityEngine_Hash128_Parse_Injected();
		Register_UnityEngine_Hash128_Parse_Injected();

	//End Registrations for type : UnityEngine.Hash128

	//Start Registrations for type : UnityEngine.HumanTrait

		//System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
		void Register_UnityEngine_HumanTrait_GetBoneIndexFromMono();
		Register_UnityEngine_HumanTrait_GetBoneIndexFromMono();

	//End Registrations for type : UnityEngine.HumanTrait

	//Start Registrations for type : UnityEngine.ImageConversion

		//System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
		void Register_UnityEngine_ImageConversion_EncodeToJPG();
		Register_UnityEngine_ImageConversion_EncodeToJPG();

		//System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
		void Register_UnityEngine_ImageConversion_EncodeToPNG();
		Register_UnityEngine_ImageConversion_EncodeToPNG();

	//End Registrations for type : UnityEngine.ImageConversion

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::GetButton(System.String)
		void Register_UnityEngine_Input_GetButton();
		Register_UnityEngine_Input_GetButton();

		//System.Boolean UnityEngine.Input::GetButtonDown(System.String)
		void Register_UnityEngine_Input_GetButtonDown();
		Register_UnityEngine_Input_GetButtonDown();

		//System.Boolean UnityEngine.Input::GetButtonUp(System.String)
		void Register_UnityEngine_Input_GetButtonUp();
		Register_UnityEngine_Input_GetButtonUp();

		//System.Boolean UnityEngine.Input::GetKeyDownInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyDownInt();
		Register_UnityEngine_Input_GetKeyDownInt();

		//System.Boolean UnityEngine.Input::GetKeyInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyInt();
		Register_UnityEngine_Input_GetKeyInt();

		//System.Boolean UnityEngine.Input::GetKeyUpInt(UnityEngine.KeyCode)
		void Register_UnityEngine_Input_GetKeyUpInt();
		Register_UnityEngine_Input_GetKeyUpInt();

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonUp();
		Register_UnityEngine_Input_GetMouseButtonUp();

		//System.Boolean UnityEngine.Input::get_mousePresent()
		void Register_UnityEngine_Input_get_mousePresent();
		Register_UnityEngine_Input_get_mousePresent();

		//System.Boolean UnityEngine.Input::get_touchSupported()
		void Register_UnityEngine_Input_get_touchSupported();
		Register_UnityEngine_Input_get_touchSupported();

		//System.Int32 UnityEngine.Input::GetGyroInternal()
		void Register_UnityEngine_Input_GetGyroInternal();
		Register_UnityEngine_Input_GetGyroInternal();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Single UnityEngine.Input::GetAxis(System.String)
		void Register_UnityEngine_Input_GetAxis();
		Register_UnityEngine_Input_GetAxis();

		//System.Single UnityEngine.Input::GetAxisRaw(System.String)
		void Register_UnityEngine_Input_GetAxisRaw();
		Register_UnityEngine_Input_GetAxisRaw();

		//System.String UnityEngine.Input::get_compositionString()
		void Register_UnityEngine_Input_get_compositionString();
		Register_UnityEngine_Input_get_compositionString();

		//System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&)
		void Register_UnityEngine_Input_GetTouch_Injected();
		Register_UnityEngine_Input_GetTouch_Injected();

		//System.Void UnityEngine.Input::get_acceleration_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_acceleration_Injected();
		Register_UnityEngine_Input_get_acceleration_Injected();

		//System.Void UnityEngine.Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_compositionCursorPos_Injected();
		Register_UnityEngine_Input_get_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_mousePosition_Injected();
		Register_UnityEngine_Input_get_mousePosition_Injected();

		//System.Void UnityEngine.Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_get_mouseScrollDelta_Injected();
		Register_UnityEngine_Input_get_mouseScrollDelta_Injected();

		//System.Void UnityEngine.Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_set_compositionCursorPos_Injected();
		Register_UnityEngine_Input_set_compositionCursorPos_Injected();

		//System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
		void Register_UnityEngine_Input_set_imeCompositionMode();
		Register_UnityEngine_Input_set_imeCompositionMode();

		//UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
		void Register_UnityEngine_Input_get_imeCompositionMode();
		Register_UnityEngine_Input_get_imeCompositionMode();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.IntegratedSubsystem

		//System.Boolean UnityEngine.IntegratedSubsystem::IsRunning()
		void Register_UnityEngine_IntegratedSubsystem_IsRunning();
		Register_UnityEngine_IntegratedSubsystem_IsRunning();

		//System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
		void Register_UnityEngine_IntegratedSubsystem_SetHandle();
		Register_UnityEngine_IntegratedSubsystem_SetHandle();

		//System.Void UnityEngine.IntegratedSubsystem::Start()
		void Register_UnityEngine_IntegratedSubsystem_Start();
		Register_UnityEngine_IntegratedSubsystem_Start();

		//System.Void UnityEngine.IntegratedSubsystem::Stop()
		void Register_UnityEngine_IntegratedSubsystem_Stop();
		Register_UnityEngine_IntegratedSubsystem_Stop();

	//End Registrations for type : UnityEngine.IntegratedSubsystem

	//Start Registrations for type : UnityEngine.JsonUtility

		//System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
		void Register_UnityEngine_JsonUtility_FromJsonInternal();
		Register_UnityEngine_JsonUtility_FromJsonInternal();

		//System.String UnityEngine.JsonUtility::ToJsonInternal(System.Object,System.Boolean)
		void Register_UnityEngine_JsonUtility_ToJsonInternal();
		Register_UnityEngine_JsonUtility_ToJsonInternal();

	//End Registrations for type : UnityEngine.JsonUtility

	//Start Registrations for type : UnityEngine.Light

		//System.Boolean UnityEngine.Light::get_useBoundingSphereOverride()
		void Register_UnityEngine_Light_get_useBoundingSphereOverride();
		Register_UnityEngine_Light_get_useBoundingSphereOverride();

		//System.Boolean UnityEngine.Light::get_useColorTemperature()
		void Register_UnityEngine_Light_get_useColorTemperature();
		Register_UnityEngine_Light_get_useColorTemperature();

		//System.Boolean UnityEngine.Light::get_useShadowMatrixOverride()
		void Register_UnityEngine_Light_get_useShadowMatrixOverride();
		Register_UnityEngine_Light_get_useShadowMatrixOverride();

		//System.Boolean UnityEngine.Light::get_useViewFrustumForShadowCasterCull()
		void Register_UnityEngine_Light_get_useViewFrustumForShadowCasterCull();
		Register_UnityEngine_Light_get_useViewFrustumForShadowCasterCull();

		//System.Int32 UnityEngine.Light::get_commandBufferCount()
		void Register_UnityEngine_Light_get_commandBufferCount();
		Register_UnityEngine_Light_get_commandBufferCount();

		//System.Int32 UnityEngine.Light::get_cullingMask()
		void Register_UnityEngine_Light_get_cullingMask();
		Register_UnityEngine_Light_get_cullingMask();

		//System.Int32 UnityEngine.Light::get_renderingLayerMask()
		void Register_UnityEngine_Light_get_renderingLayerMask();
		Register_UnityEngine_Light_get_renderingLayerMask();

		//System.Int32 UnityEngine.Light::get_shadowCustomResolution()
		void Register_UnityEngine_Light_get_shadowCustomResolution();
		Register_UnityEngine_Light_get_shadowCustomResolution();

		//System.Single UnityEngine.Light::get_bounceIntensity()
		void Register_UnityEngine_Light_get_bounceIntensity();
		Register_UnityEngine_Light_get_bounceIntensity();

		//System.Single UnityEngine.Light::get_colorTemperature()
		void Register_UnityEngine_Light_get_colorTemperature();
		Register_UnityEngine_Light_get_colorTemperature();

		//System.Single UnityEngine.Light::get_cookieSize()
		void Register_UnityEngine_Light_get_cookieSize();
		Register_UnityEngine_Light_get_cookieSize();

		//System.Single UnityEngine.Light::get_innerSpotAngle()
		void Register_UnityEngine_Light_get_innerSpotAngle();
		Register_UnityEngine_Light_get_innerSpotAngle();

		//System.Single UnityEngine.Light::get_intensity()
		void Register_UnityEngine_Light_get_intensity();
		Register_UnityEngine_Light_get_intensity();

		//System.Single UnityEngine.Light::get_range()
		void Register_UnityEngine_Light_get_range();
		Register_UnityEngine_Light_get_range();

		//System.Single UnityEngine.Light::get_shadowBias()
		void Register_UnityEngine_Light_get_shadowBias();
		Register_UnityEngine_Light_get_shadowBias();

		//System.Single UnityEngine.Light::get_shadowNearPlane()
		void Register_UnityEngine_Light_get_shadowNearPlane();
		Register_UnityEngine_Light_get_shadowNearPlane();

		//System.Single UnityEngine.Light::get_shadowNormalBias()
		void Register_UnityEngine_Light_get_shadowNormalBias();
		Register_UnityEngine_Light_get_shadowNormalBias();

		//System.Single UnityEngine.Light::get_shadowStrength()
		void Register_UnityEngine_Light_get_shadowStrength();
		Register_UnityEngine_Light_get_shadowStrength();

		//System.Single UnityEngine.Light::get_spotAngle()
		void Register_UnityEngine_Light_get_spotAngle();
		Register_UnityEngine_Light_get_spotAngle();

		//System.Single[] UnityEngine.Light::get_layerShadowCullDistances()
		void Register_UnityEngine_Light_get_layerShadowCullDistances();
		Register_UnityEngine_Light_get_layerShadowCullDistances();

		//System.Void UnityEngine.Light::AddCommandBuffer(UnityEngine.Rendering.LightEvent,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ShadowMapPass)
		void Register_UnityEngine_Light_AddCommandBuffer();
		Register_UnityEngine_Light_AddCommandBuffer();

		//System.Void UnityEngine.Light::AddCommandBufferAsync(UnityEngine.Rendering.LightEvent,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ShadowMapPass,UnityEngine.Rendering.ComputeQueueType)
		void Register_UnityEngine_Light_AddCommandBufferAsync();
		Register_UnityEngine_Light_AddCommandBufferAsync();

		//System.Void UnityEngine.Light::RemoveAllCommandBuffers()
		void Register_UnityEngine_Light_RemoveAllCommandBuffers();
		Register_UnityEngine_Light_RemoveAllCommandBuffers();

		//System.Void UnityEngine.Light::RemoveCommandBuffer(UnityEngine.Rendering.LightEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Light_RemoveCommandBuffer();
		Register_UnityEngine_Light_RemoveCommandBuffer();

		//System.Void UnityEngine.Light::RemoveCommandBuffers(UnityEngine.Rendering.LightEvent)
		void Register_UnityEngine_Light_RemoveCommandBuffers();
		Register_UnityEngine_Light_RemoveCommandBuffers();

		//System.Void UnityEngine.Light::Reset()
		void Register_UnityEngine_Light_Reset();
		Register_UnityEngine_Light_Reset();

		//System.Void UnityEngine.Light::get_bakingOutput_Injected(UnityEngine.LightBakingOutput&)
		void Register_UnityEngine_Light_get_bakingOutput_Injected();
		Register_UnityEngine_Light_get_bakingOutput_Injected();

		//System.Void UnityEngine.Light::get_boundingSphereOverride_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Light_get_boundingSphereOverride_Injected();
		Register_UnityEngine_Light_get_boundingSphereOverride_Injected();

		//System.Void UnityEngine.Light::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_get_color_Injected();
		Register_UnityEngine_Light_get_color_Injected();

		//System.Void UnityEngine.Light::get_shadowMatrixOverride_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Light_get_shadowMatrixOverride_Injected();
		Register_UnityEngine_Light_get_shadowMatrixOverride_Injected();

		//System.Void UnityEngine.Light::set_bakingOutput_Injected(UnityEngine.LightBakingOutput&)
		void Register_UnityEngine_Light_set_bakingOutput_Injected();
		Register_UnityEngine_Light_set_bakingOutput_Injected();

		//System.Void UnityEngine.Light::set_bounceIntensity(System.Single)
		void Register_UnityEngine_Light_set_bounceIntensity();
		Register_UnityEngine_Light_set_bounceIntensity();

		//System.Void UnityEngine.Light::set_boundingSphereOverride_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Light_set_boundingSphereOverride_Injected();
		Register_UnityEngine_Light_set_boundingSphereOverride_Injected();

		//System.Void UnityEngine.Light::set_colorTemperature(System.Single)
		void Register_UnityEngine_Light_set_colorTemperature();
		Register_UnityEngine_Light_set_colorTemperature();

		//System.Void UnityEngine.Light::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_set_color_Injected();
		Register_UnityEngine_Light_set_color_Injected();

		//System.Void UnityEngine.Light::set_cookie(UnityEngine.Texture)
		void Register_UnityEngine_Light_set_cookie();
		Register_UnityEngine_Light_set_cookie();

		//System.Void UnityEngine.Light::set_cookieSize(System.Single)
		void Register_UnityEngine_Light_set_cookieSize();
		Register_UnityEngine_Light_set_cookieSize();

		//System.Void UnityEngine.Light::set_cullingMask(System.Int32)
		void Register_UnityEngine_Light_set_cullingMask();
		Register_UnityEngine_Light_set_cullingMask();

		//System.Void UnityEngine.Light::set_flare(UnityEngine.Flare)
		void Register_UnityEngine_Light_set_flare();
		Register_UnityEngine_Light_set_flare();

		//System.Void UnityEngine.Light::set_innerSpotAngle(System.Single)
		void Register_UnityEngine_Light_set_innerSpotAngle();
		Register_UnityEngine_Light_set_innerSpotAngle();

		//System.Void UnityEngine.Light::set_intensity(System.Single)
		void Register_UnityEngine_Light_set_intensity();
		Register_UnityEngine_Light_set_intensity();

		//System.Void UnityEngine.Light::set_layerShadowCullDistances(System.Single[])
		void Register_UnityEngine_Light_set_layerShadowCullDistances();
		Register_UnityEngine_Light_set_layerShadowCullDistances();

		//System.Void UnityEngine.Light::set_lightShadowCasterMode(UnityEngine.LightShadowCasterMode)
		void Register_UnityEngine_Light_set_lightShadowCasterMode();
		Register_UnityEngine_Light_set_lightShadowCasterMode();

		//System.Void UnityEngine.Light::set_range(System.Single)
		void Register_UnityEngine_Light_set_range();
		Register_UnityEngine_Light_set_range();

		//System.Void UnityEngine.Light::set_renderMode(UnityEngine.LightRenderMode)
		void Register_UnityEngine_Light_set_renderMode();
		Register_UnityEngine_Light_set_renderMode();

		//System.Void UnityEngine.Light::set_renderingLayerMask(System.Int32)
		void Register_UnityEngine_Light_set_renderingLayerMask();
		Register_UnityEngine_Light_set_renderingLayerMask();

		//System.Void UnityEngine.Light::set_shadowBias(System.Single)
		void Register_UnityEngine_Light_set_shadowBias();
		Register_UnityEngine_Light_set_shadowBias();

		//System.Void UnityEngine.Light::set_shadowCustomResolution(System.Int32)
		void Register_UnityEngine_Light_set_shadowCustomResolution();
		Register_UnityEngine_Light_set_shadowCustomResolution();

		//System.Void UnityEngine.Light::set_shadowMatrixOverride_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Light_set_shadowMatrixOverride_Injected();
		Register_UnityEngine_Light_set_shadowMatrixOverride_Injected();

		//System.Void UnityEngine.Light::set_shadowNearPlane(System.Single)
		void Register_UnityEngine_Light_set_shadowNearPlane();
		Register_UnityEngine_Light_set_shadowNearPlane();

		//System.Void UnityEngine.Light::set_shadowNormalBias(System.Single)
		void Register_UnityEngine_Light_set_shadowNormalBias();
		Register_UnityEngine_Light_set_shadowNormalBias();

		//System.Void UnityEngine.Light::set_shadowResolution(UnityEngine.Rendering.LightShadowResolution)
		void Register_UnityEngine_Light_set_shadowResolution();
		Register_UnityEngine_Light_set_shadowResolution();

		//System.Void UnityEngine.Light::set_shadowStrength(System.Single)
		void Register_UnityEngine_Light_set_shadowStrength();
		Register_UnityEngine_Light_set_shadowStrength();

		//System.Void UnityEngine.Light::set_shadows(UnityEngine.LightShadows)
		void Register_UnityEngine_Light_set_shadows();
		Register_UnityEngine_Light_set_shadows();

		//System.Void UnityEngine.Light::set_shape(UnityEngine.LightShape)
		void Register_UnityEngine_Light_set_shape();
		Register_UnityEngine_Light_set_shape();

		//System.Void UnityEngine.Light::set_spotAngle(System.Single)
		void Register_UnityEngine_Light_set_spotAngle();
		Register_UnityEngine_Light_set_spotAngle();

		//System.Void UnityEngine.Light::set_type(UnityEngine.LightType)
		void Register_UnityEngine_Light_set_type();
		Register_UnityEngine_Light_set_type();

		//System.Void UnityEngine.Light::set_useBoundingSphereOverride(System.Boolean)
		void Register_UnityEngine_Light_set_useBoundingSphereOverride();
		Register_UnityEngine_Light_set_useBoundingSphereOverride();

		//System.Void UnityEngine.Light::set_useColorTemperature(System.Boolean)
		void Register_UnityEngine_Light_set_useColorTemperature();
		Register_UnityEngine_Light_set_useColorTemperature();

		//System.Void UnityEngine.Light::set_useShadowMatrixOverride(System.Boolean)
		void Register_UnityEngine_Light_set_useShadowMatrixOverride();
		Register_UnityEngine_Light_set_useShadowMatrixOverride();

		//System.Void UnityEngine.Light::set_useViewFrustumForShadowCasterCull(System.Boolean)
		void Register_UnityEngine_Light_set_useViewFrustumForShadowCasterCull();
		Register_UnityEngine_Light_set_useViewFrustumForShadowCasterCull();

		//UnityEngine.Flare UnityEngine.Light::get_flare()
		void Register_UnityEngine_Light_get_flare();
		Register_UnityEngine_Light_get_flare();

		//UnityEngine.LightRenderMode UnityEngine.Light::get_renderMode()
		void Register_UnityEngine_Light_get_renderMode();
		Register_UnityEngine_Light_get_renderMode();

		//UnityEngine.LightShadowCasterMode UnityEngine.Light::get_lightShadowCasterMode()
		void Register_UnityEngine_Light_get_lightShadowCasterMode();
		Register_UnityEngine_Light_get_lightShadowCasterMode();

		//UnityEngine.LightShadows UnityEngine.Light::get_shadows()
		void Register_UnityEngine_Light_get_shadows();
		Register_UnityEngine_Light_get_shadows();

		//UnityEngine.LightShape UnityEngine.Light::get_shape()
		void Register_UnityEngine_Light_get_shape();
		Register_UnityEngine_Light_get_shape();

		//UnityEngine.LightType UnityEngine.Light::get_type()
		void Register_UnityEngine_Light_get_type();
		Register_UnityEngine_Light_get_type();

		//UnityEngine.Light[] UnityEngine.Light::GetLights(UnityEngine.LightType,System.Int32)
		void Register_UnityEngine_Light_GetLights();
		Register_UnityEngine_Light_GetLights();

		//UnityEngine.Rendering.CommandBuffer[] UnityEngine.Light::GetCommandBuffers(UnityEngine.Rendering.LightEvent)
		void Register_UnityEngine_Light_GetCommandBuffers();
		Register_UnityEngine_Light_GetCommandBuffers();

		//UnityEngine.Rendering.LightShadowResolution UnityEngine.Light::get_shadowResolution()
		void Register_UnityEngine_Light_get_shadowResolution();
		Register_UnityEngine_Light_get_shadowResolution();

		//UnityEngine.Texture UnityEngine.Light::get_cookie()
		void Register_UnityEngine_Light_get_cookie();
		Register_UnityEngine_Light_get_cookie();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.LightingSettings

		//System.Boolean UnityEngine.LightingSettings::get_bakedGI()
		void Register_UnityEngine_LightingSettings_get_bakedGI();
		Register_UnityEngine_LightingSettings_get_bakedGI();

		//System.Boolean UnityEngine.LightingSettings::get_realtimeEnvironmentLighting()
		void Register_UnityEngine_LightingSettings_get_realtimeEnvironmentLighting();
		Register_UnityEngine_LightingSettings_get_realtimeEnvironmentLighting();

		//System.Boolean UnityEngine.LightingSettings::get_realtimeGI()
		void Register_UnityEngine_LightingSettings_get_realtimeGI();
		Register_UnityEngine_LightingSettings_get_realtimeGI();

		//System.Void UnityEngine.LightingSettings::Internal_Create(UnityEngine.LightingSettings)
		void Register_UnityEngine_LightingSettings_Internal_Create();
		Register_UnityEngine_LightingSettings_Internal_Create();

		//System.Void UnityEngine.LightingSettings::set_bakedGI(System.Boolean)
		void Register_UnityEngine_LightingSettings_set_bakedGI();
		Register_UnityEngine_LightingSettings_set_bakedGI();

		//System.Void UnityEngine.LightingSettings::set_realtimeEnvironmentLighting(System.Boolean)
		void Register_UnityEngine_LightingSettings_set_realtimeEnvironmentLighting();
		Register_UnityEngine_LightingSettings_set_realtimeEnvironmentLighting();

		//System.Void UnityEngine.LightingSettings::set_realtimeGI(System.Boolean)
		void Register_UnityEngine_LightingSettings_set_realtimeGI();
		Register_UnityEngine_LightingSettings_set_realtimeGI();

	//End Registrations for type : UnityEngine.LightingSettings

	//Start Registrations for type : UnityEngine.LightmapSettings

		//System.Void UnityEngine.LightmapSettings::Reset()
		void Register_UnityEngine_LightmapSettings_Reset();
		Register_UnityEngine_LightmapSettings_Reset();

		//System.Void UnityEngine.LightmapSettings::set_lightProbes(UnityEngine.LightProbes)
		void Register_UnityEngine_LightmapSettings_set_lightProbes();
		Register_UnityEngine_LightmapSettings_set_lightProbes();

		//System.Void UnityEngine.LightmapSettings::set_lightmaps(UnityEngine.LightmapData[])
		void Register_UnityEngine_LightmapSettings_set_lightmaps();
		Register_UnityEngine_LightmapSettings_set_lightmaps();

		//System.Void UnityEngine.LightmapSettings::set_lightmapsMode(UnityEngine.LightmapsMode)
		void Register_UnityEngine_LightmapSettings_set_lightmapsMode();
		Register_UnityEngine_LightmapSettings_set_lightmapsMode();

		//UnityEngine.LightProbes UnityEngine.LightmapSettings::get_lightProbes()
		void Register_UnityEngine_LightmapSettings_get_lightProbes();
		Register_UnityEngine_LightmapSettings_get_lightProbes();

		//UnityEngine.LightmapData[] UnityEngine.LightmapSettings::get_lightmaps()
		void Register_UnityEngine_LightmapSettings_get_lightmaps();
		Register_UnityEngine_LightmapSettings_get_lightmaps();

		//UnityEngine.LightmapsMode UnityEngine.LightmapSettings::get_lightmapsMode()
		void Register_UnityEngine_LightmapSettings_get_lightmapsMode();
		Register_UnityEngine_LightmapSettings_get_lightmapsMode();

	//End Registrations for type : UnityEngine.LightmapSettings

	//Start Registrations for type : UnityEngine.LightProbes

		//System.Boolean UnityEngine.LightProbes::AreLightProbesAllowed(UnityEngine.Renderer)
		void Register_UnityEngine_LightProbes_AreLightProbesAllowed();
		Register_UnityEngine_LightProbes_AreLightProbesAllowed();

		//System.Int32 UnityEngine.LightProbes::GetCount()
		void Register_UnityEngine_LightProbes_GetCount();
		Register_UnityEngine_LightProbes_GetCount();

		//System.Int32 UnityEngine.LightProbes::get_cellCount()
		void Register_UnityEngine_LightProbes_get_cellCount();
		Register_UnityEngine_LightProbes_get_cellCount();

		//System.Int32 UnityEngine.LightProbes::get_count()
		void Register_UnityEngine_LightProbes_get_count();
		Register_UnityEngine_LightProbes_get_count();

		//System.Void UnityEngine.LightProbes::CalculateInterpolatedLightAndOcclusionProbes_Internal(UnityEngine.Vector3[],System.Int32,UnityEngine.Rendering.SphericalHarmonicsL2[],UnityEngine.Vector4[])
		void Register_UnityEngine_LightProbes_CalculateInterpolatedLightAndOcclusionProbes_Internal();
		Register_UnityEngine_LightProbes_CalculateInterpolatedLightAndOcclusionProbes_Internal();

		//System.Void UnityEngine.LightProbes::GetInterpolatedProbe_Injected(UnityEngine.Vector3&,UnityEngine.Renderer,UnityEngine.Rendering.SphericalHarmonicsL2&)
		void Register_UnityEngine_LightProbes_GetInterpolatedProbe_Injected();
		Register_UnityEngine_LightProbes_GetInterpolatedProbe_Injected();

		//System.Void UnityEngine.LightProbes::Tetrahedralize()
		void Register_UnityEngine_LightProbes_Tetrahedralize();
		Register_UnityEngine_LightProbes_Tetrahedralize();

		//System.Void UnityEngine.LightProbes::TetrahedralizeAsync()
		void Register_UnityEngine_LightProbes_TetrahedralizeAsync();
		Register_UnityEngine_LightProbes_TetrahedralizeAsync();

		//System.Void UnityEngine.LightProbes::set_bakedProbes(UnityEngine.Rendering.SphericalHarmonicsL2[])
		void Register_UnityEngine_LightProbes_set_bakedProbes();
		Register_UnityEngine_LightProbes_set_bakedProbes();

		//UnityEngine.Rendering.SphericalHarmonicsL2[] UnityEngine.LightProbes::get_bakedProbes()
		void Register_UnityEngine_LightProbes_get_bakedProbes();
		Register_UnityEngine_LightProbes_get_bakedProbes();

		//UnityEngine.Vector3[] UnityEngine.LightProbes::get_positions()
		void Register_UnityEngine_LightProbes_get_positions();
		Register_UnityEngine_LightProbes_get_positions();

	//End Registrations for type : UnityEngine.LightProbes

	//Start Registrations for type : UnityEngine.LineRenderer

		//System.Boolean UnityEngine.LineRenderer::get_generateLightingData()
		void Register_UnityEngine_LineRenderer_get_generateLightingData();
		Register_UnityEngine_LineRenderer_get_generateLightingData();

		//System.Boolean UnityEngine.LineRenderer::get_loop()
		void Register_UnityEngine_LineRenderer_get_loop();
		Register_UnityEngine_LineRenderer_get_loop();

		//System.Boolean UnityEngine.LineRenderer::get_useWorldSpace()
		void Register_UnityEngine_LineRenderer_get_useWorldSpace();
		Register_UnityEngine_LineRenderer_get_useWorldSpace();

		//System.Int32 UnityEngine.LineRenderer::GetPositions(UnityEngine.Vector3[])
		void Register_UnityEngine_LineRenderer_GetPositions();
		Register_UnityEngine_LineRenderer_GetPositions();

		//System.Int32 UnityEngine.LineRenderer::GetPositionsWithNativeContainer(System.IntPtr,System.Int32)
		void Register_UnityEngine_LineRenderer_GetPositionsWithNativeContainer();
		Register_UnityEngine_LineRenderer_GetPositionsWithNativeContainer();

		//System.Int32 UnityEngine.LineRenderer::get_numCapVertices()
		void Register_UnityEngine_LineRenderer_get_numCapVertices();
		Register_UnityEngine_LineRenderer_get_numCapVertices();

		//System.Int32 UnityEngine.LineRenderer::get_numCornerVertices()
		void Register_UnityEngine_LineRenderer_get_numCornerVertices();
		Register_UnityEngine_LineRenderer_get_numCornerVertices();

		//System.Int32 UnityEngine.LineRenderer::get_positionCount()
		void Register_UnityEngine_LineRenderer_get_positionCount();
		Register_UnityEngine_LineRenderer_get_positionCount();

		//System.Single UnityEngine.LineRenderer::get_endWidth()
		void Register_UnityEngine_LineRenderer_get_endWidth();
		Register_UnityEngine_LineRenderer_get_endWidth();

		//System.Single UnityEngine.LineRenderer::get_shadowBias()
		void Register_UnityEngine_LineRenderer_get_shadowBias();
		Register_UnityEngine_LineRenderer_get_shadowBias();

		//System.Single UnityEngine.LineRenderer::get_startWidth()
		void Register_UnityEngine_LineRenderer_get_startWidth();
		Register_UnityEngine_LineRenderer_get_startWidth();

		//System.Single UnityEngine.LineRenderer::get_widthMultiplier()
		void Register_UnityEngine_LineRenderer_get_widthMultiplier();
		Register_UnityEngine_LineRenderer_get_widthMultiplier();

		//System.Void UnityEngine.LineRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
		void Register_UnityEngine_LineRenderer_BakeMesh();
		Register_UnityEngine_LineRenderer_BakeMesh();

		//System.Void UnityEngine.LineRenderer::GetPosition_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_LineRenderer_GetPosition_Injected();
		Register_UnityEngine_LineRenderer_GetPosition_Injected();

		//System.Void UnityEngine.LineRenderer::SetColorGradient(UnityEngine.Gradient)
		void Register_UnityEngine_LineRenderer_SetColorGradient();
		Register_UnityEngine_LineRenderer_SetColorGradient();

		//System.Void UnityEngine.LineRenderer::SetPosition_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_LineRenderer_SetPosition_Injected();
		Register_UnityEngine_LineRenderer_SetPosition_Injected();

		//System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
		void Register_UnityEngine_LineRenderer_SetPositions();
		Register_UnityEngine_LineRenderer_SetPositions();

		//System.Void UnityEngine.LineRenderer::SetPositionsWithNativeContainer(System.IntPtr,System.Int32)
		void Register_UnityEngine_LineRenderer_SetPositionsWithNativeContainer();
		Register_UnityEngine_LineRenderer_SetPositionsWithNativeContainer();

		//System.Void UnityEngine.LineRenderer::SetWidthCurve(UnityEngine.AnimationCurve)
		void Register_UnityEngine_LineRenderer_SetWidthCurve();
		Register_UnityEngine_LineRenderer_SetWidthCurve();

		//System.Void UnityEngine.LineRenderer::Simplify(System.Single)
		void Register_UnityEngine_LineRenderer_Simplify();
		Register_UnityEngine_LineRenderer_Simplify();

		//System.Void UnityEngine.LineRenderer::get_endColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_LineRenderer_get_endColor_Injected();
		Register_UnityEngine_LineRenderer_get_endColor_Injected();

		//System.Void UnityEngine.LineRenderer::get_startColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_LineRenderer_get_startColor_Injected();
		Register_UnityEngine_LineRenderer_get_startColor_Injected();

		//System.Void UnityEngine.LineRenderer::set_alignment(UnityEngine.LineAlignment)
		void Register_UnityEngine_LineRenderer_set_alignment();
		Register_UnityEngine_LineRenderer_set_alignment();

		//System.Void UnityEngine.LineRenderer::set_endColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_LineRenderer_set_endColor_Injected();
		Register_UnityEngine_LineRenderer_set_endColor_Injected();

		//System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
		void Register_UnityEngine_LineRenderer_set_endWidth();
		Register_UnityEngine_LineRenderer_set_endWidth();

		//System.Void UnityEngine.LineRenderer::set_generateLightingData(System.Boolean)
		void Register_UnityEngine_LineRenderer_set_generateLightingData();
		Register_UnityEngine_LineRenderer_set_generateLightingData();

		//System.Void UnityEngine.LineRenderer::set_loop(System.Boolean)
		void Register_UnityEngine_LineRenderer_set_loop();
		Register_UnityEngine_LineRenderer_set_loop();

		//System.Void UnityEngine.LineRenderer::set_numCapVertices(System.Int32)
		void Register_UnityEngine_LineRenderer_set_numCapVertices();
		Register_UnityEngine_LineRenderer_set_numCapVertices();

		//System.Void UnityEngine.LineRenderer::set_numCornerVertices(System.Int32)
		void Register_UnityEngine_LineRenderer_set_numCornerVertices();
		Register_UnityEngine_LineRenderer_set_numCornerVertices();

		//System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
		void Register_UnityEngine_LineRenderer_set_positionCount();
		Register_UnityEngine_LineRenderer_set_positionCount();

		//System.Void UnityEngine.LineRenderer::set_shadowBias(System.Single)
		void Register_UnityEngine_LineRenderer_set_shadowBias();
		Register_UnityEngine_LineRenderer_set_shadowBias();

		//System.Void UnityEngine.LineRenderer::set_startColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_LineRenderer_set_startColor_Injected();
		Register_UnityEngine_LineRenderer_set_startColor_Injected();

		//System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
		void Register_UnityEngine_LineRenderer_set_startWidth();
		Register_UnityEngine_LineRenderer_set_startWidth();

		//System.Void UnityEngine.LineRenderer::set_textureMode(UnityEngine.LineTextureMode)
		void Register_UnityEngine_LineRenderer_set_textureMode();
		Register_UnityEngine_LineRenderer_set_textureMode();

		//System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
		void Register_UnityEngine_LineRenderer_set_useWorldSpace();
		Register_UnityEngine_LineRenderer_set_useWorldSpace();

		//System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
		void Register_UnityEngine_LineRenderer_set_widthMultiplier();
		Register_UnityEngine_LineRenderer_set_widthMultiplier();

		//UnityEngine.AnimationCurve UnityEngine.LineRenderer::GetWidthCurveCopy()
		void Register_UnityEngine_LineRenderer_GetWidthCurveCopy();
		Register_UnityEngine_LineRenderer_GetWidthCurveCopy();

		//UnityEngine.Gradient UnityEngine.LineRenderer::GetColorGradientCopy()
		void Register_UnityEngine_LineRenderer_GetColorGradientCopy();
		Register_UnityEngine_LineRenderer_GetColorGradientCopy();

		//UnityEngine.LineAlignment UnityEngine.LineRenderer::get_alignment()
		void Register_UnityEngine_LineRenderer_get_alignment();
		Register_UnityEngine_LineRenderer_get_alignment();

		//UnityEngine.LineTextureMode UnityEngine.LineRenderer::get_textureMode()
		void Register_UnityEngine_LineRenderer_get_textureMode();
		Register_UnityEngine_LineRenderer_get_textureMode();

	//End Registrations for type : UnityEngine.LineRenderer

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::GetShaderPassEnabled(System.String)
		void Register_UnityEngine_Material_GetShaderPassEnabled();
		Register_UnityEngine_Material_GetShaderPassEnabled();

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
		void Register_UnityEngine_Material_IsKeywordEnabled();
		Register_UnityEngine_Material_IsKeywordEnabled();

		//System.Boolean UnityEngine.Material::SetPass(System.Int32)
		void Register_UnityEngine_Material_SetPass();
		Register_UnityEngine_Material_SetPass();

		//System.Boolean UnityEngine.Material::get_doubleSidedGI()
		void Register_UnityEngine_Material_get_doubleSidedGI();
		Register_UnityEngine_Material_get_doubleSidedGI();

		//System.Boolean UnityEngine.Material::get_enableInstancing()
		void Register_UnityEngine_Material_get_enableInstancing();
		Register_UnityEngine_Material_get_enableInstancing();

		//System.Int32 UnityEngine.Material::ComputeCRC()
		void Register_UnityEngine_Material_ComputeCRC();
		Register_UnityEngine_Material_ComputeCRC();

		//System.Int32 UnityEngine.Material::FindPass(System.String)
		void Register_UnityEngine_Material_FindPass();
		Register_UnityEngine_Material_FindPass();

		//System.Int32 UnityEngine.Material::GetColorArrayCountImpl(System.Int32)
		void Register_UnityEngine_Material_GetColorArrayCountImpl();
		Register_UnityEngine_Material_GetColorArrayCountImpl();

		//System.Int32 UnityEngine.Material::GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags)
		void Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();
		Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();

		//System.Int32 UnityEngine.Material::GetFloatArrayCountImpl(System.Int32)
		void Register_UnityEngine_Material_GetFloatArrayCountImpl();
		Register_UnityEngine_Material_GetFloatArrayCountImpl();

		//System.Int32 UnityEngine.Material::GetMatrixArrayCountImpl(System.Int32)
		void Register_UnityEngine_Material_GetMatrixArrayCountImpl();
		Register_UnityEngine_Material_GetMatrixArrayCountImpl();

		//System.Int32 UnityEngine.Material::GetVectorArrayCountImpl(System.Int32)
		void Register_UnityEngine_Material_GetVectorArrayCountImpl();
		Register_UnityEngine_Material_GetVectorArrayCountImpl();

		//System.Int32 UnityEngine.Material::get_passCount()
		void Register_UnityEngine_Material_get_passCount();
		Register_UnityEngine_Material_get_passCount();

		//System.Int32 UnityEngine.Material::get_rawRenderQueue()
		void Register_UnityEngine_Material_get_rawRenderQueue();
		Register_UnityEngine_Material_get_rawRenderQueue();

		//System.Int32 UnityEngine.Material::get_renderQueue()
		void Register_UnityEngine_Material_get_renderQueue();
		Register_UnityEngine_Material_get_renderQueue();

		//System.Int32[] UnityEngine.Material::GetTexturePropertyNameIDs()
		void Register_UnityEngine_Material_GetTexturePropertyNameIDs();
		Register_UnityEngine_Material_GetTexturePropertyNameIDs();

		//System.Single UnityEngine.Material::GetFloatImpl(System.Int32)
		void Register_UnityEngine_Material_GetFloatImpl();
		Register_UnityEngine_Material_GetFloatImpl();

		//System.Single[] UnityEngine.Material::GetFloatArrayImpl(System.Int32)
		void Register_UnityEngine_Material_GetFloatArrayImpl();
		Register_UnityEngine_Material_GetFloatArrayImpl();

		//System.String UnityEngine.Material::GetPassName(System.Int32)
		void Register_UnityEngine_Material_GetPassName();
		Register_UnityEngine_Material_GetPassName();

		//System.String UnityEngine.Material::GetTagImpl(System.String,System.Boolean,System.String)
		void Register_UnityEngine_Material_GetTagImpl();
		Register_UnityEngine_Material_GetTagImpl();

		//System.String[] UnityEngine.Material::GetShaderKeywords()
		void Register_UnityEngine_Material_GetShaderKeywords();
		Register_UnityEngine_Material_GetShaderKeywords();

		//System.String[] UnityEngine.Material::GetTexturePropertyNames()
		void Register_UnityEngine_Material_GetTexturePropertyNames();
		Register_UnityEngine_Material_GetTexturePropertyNames();

		//System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
		void Register_UnityEngine_Material_CopyPropertiesFromMaterial();
		Register_UnityEngine_Material_CopyPropertiesFromMaterial();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::CreateWithString(UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithString();
		Register_UnityEngine_Material_CreateWithString();

		//System.Void UnityEngine.Material::DisableKeyword(System.String)
		void Register_UnityEngine_Material_DisableKeyword();
		Register_UnityEngine_Material_DisableKeyword();

		//System.Void UnityEngine.Material::EnableKeyword(System.String)
		void Register_UnityEngine_Material_EnableKeyword();
		Register_UnityEngine_Material_EnableKeyword();

		//System.Void UnityEngine.Material::ExtractColorArrayImpl(System.Int32,UnityEngine.Color[])
		void Register_UnityEngine_Material_ExtractColorArrayImpl();
		Register_UnityEngine_Material_ExtractColorArrayImpl();

		//System.Void UnityEngine.Material::ExtractFloatArrayImpl(System.Int32,System.Single[])
		void Register_UnityEngine_Material_ExtractFloatArrayImpl();
		Register_UnityEngine_Material_ExtractFloatArrayImpl();

		//System.Void UnityEngine.Material::ExtractMatrixArrayImpl(System.Int32,UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Material_ExtractMatrixArrayImpl();
		Register_UnityEngine_Material_ExtractMatrixArrayImpl();

		//System.Void UnityEngine.Material::ExtractVectorArrayImpl(System.Int32,UnityEngine.Vector4[])
		void Register_UnityEngine_Material_ExtractVectorArrayImpl();
		Register_UnityEngine_Material_ExtractVectorArrayImpl();

		//System.Void UnityEngine.Material::GetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_GetColorImpl_Injected();
		Register_UnityEngine_Material_GetColorImpl_Injected();

		//System.Void UnityEngine.Material::GetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_GetMatrixImpl_Injected();
		Register_UnityEngine_Material_GetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::GetTexturePropertyNameIDsInternal(System.Object)
		void Register_UnityEngine_Material_GetTexturePropertyNameIDsInternal();
		Register_UnityEngine_Material_GetTexturePropertyNameIDsInternal();

		//System.Void UnityEngine.Material::GetTexturePropertyNamesInternal(System.Object)
		void Register_UnityEngine_Material_GetTexturePropertyNamesInternal();
		Register_UnityEngine_Material_GetTexturePropertyNamesInternal();

		//System.Void UnityEngine.Material::GetTextureScaleAndOffsetImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Material_GetTextureScaleAndOffsetImpl_Injected();
		Register_UnityEngine_Material_GetTextureScaleAndOffsetImpl_Injected();

		//System.Void UnityEngine.Material::Lerp(UnityEngine.Material,UnityEngine.Material,System.Single)
		void Register_UnityEngine_Material_Lerp();
		Register_UnityEngine_Material_Lerp();

		//System.Void UnityEngine.Material::SetBufferImpl(System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Material_SetBufferImpl();
		Register_UnityEngine_Material_SetBufferImpl();

		//System.Void UnityEngine.Material::SetColorArrayImpl(System.Int32,UnityEngine.Color[],System.Int32)
		void Register_UnityEngine_Material_SetColorArrayImpl();
		Register_UnityEngine_Material_SetColorArrayImpl();

		//System.Void UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_SetColorImpl_Injected();
		Register_UnityEngine_Material_SetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetConstantBufferImpl(System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Material_SetConstantBufferImpl();
		Register_UnityEngine_Material_SetConstantBufferImpl();

		//System.Void UnityEngine.Material::SetConstantGraphicsBufferImpl(System.Int32,UnityEngine.GraphicsBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Material_SetConstantGraphicsBufferImpl();
		Register_UnityEngine_Material_SetConstantGraphicsBufferImpl();

		//System.Void UnityEngine.Material::SetFloatArrayImpl(System.Int32,System.Single[],System.Int32)
		void Register_UnityEngine_Material_SetFloatArrayImpl();
		Register_UnityEngine_Material_SetFloatArrayImpl();

		//System.Void UnityEngine.Material::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Material_SetFloatImpl();
		Register_UnityEngine_Material_SetFloatImpl();

		//System.Void UnityEngine.Material::SetGraphicsBufferImpl(System.Int32,UnityEngine.GraphicsBuffer)
		void Register_UnityEngine_Material_SetGraphicsBufferImpl();
		Register_UnityEngine_Material_SetGraphicsBufferImpl();

		//System.Void UnityEngine.Material::SetMatrixArrayImpl(System.Int32,UnityEngine.Matrix4x4[],System.Int32)
		void Register_UnityEngine_Material_SetMatrixArrayImpl();
		Register_UnityEngine_Material_SetMatrixArrayImpl();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
		void Register_UnityEngine_Material_SetOverrideTag();
		Register_UnityEngine_Material_SetOverrideTag();

		//System.Void UnityEngine.Material::SetRenderTextureImpl(System.Int32,UnityEngine.RenderTexture,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_Material_SetRenderTextureImpl();
		Register_UnityEngine_Material_SetRenderTextureImpl();

		//System.Void UnityEngine.Material::SetShaderKeywords(System.String[])
		void Register_UnityEngine_Material_SetShaderKeywords();
		Register_UnityEngine_Material_SetShaderKeywords();

		//System.Void UnityEngine.Material::SetShaderPassEnabled(System.String,System.Boolean)
		void Register_UnityEngine_Material_SetShaderPassEnabled();
		Register_UnityEngine_Material_SetShaderPassEnabled();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//System.Void UnityEngine.Material::SetTextureOffsetImpl_Injected(System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_Material_SetTextureOffsetImpl_Injected();
		Register_UnityEngine_Material_SetTextureOffsetImpl_Injected();

		//System.Void UnityEngine.Material::SetTextureScaleImpl_Injected(System.Int32,UnityEngine.Vector2&)
		void Register_UnityEngine_Material_SetTextureScaleImpl_Injected();
		Register_UnityEngine_Material_SetTextureScaleImpl_Injected();

		//System.Void UnityEngine.Material::SetVectorArrayImpl(System.Int32,UnityEngine.Vector4[],System.Int32)
		void Register_UnityEngine_Material_SetVectorArrayImpl();
		Register_UnityEngine_Material_SetVectorArrayImpl();

		//System.Void UnityEngine.Material::set_doubleSidedGI(System.Boolean)
		void Register_UnityEngine_Material_set_doubleSidedGI();
		Register_UnityEngine_Material_set_doubleSidedGI();

		//System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
		void Register_UnityEngine_Material_set_enableInstancing();
		Register_UnityEngine_Material_set_enableInstancing();

		//System.Void UnityEngine.Material::set_globalIlluminationFlags(UnityEngine.MaterialGlobalIlluminationFlags)
		void Register_UnityEngine_Material_set_globalIlluminationFlags();
		Register_UnityEngine_Material_set_globalIlluminationFlags();

		//System.Void UnityEngine.Material::set_renderQueue(System.Int32)
		void Register_UnityEngine_Material_set_renderQueue();
		Register_UnityEngine_Material_set_renderQueue();

		//System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
		void Register_UnityEngine_Material_set_shader();
		Register_UnityEngine_Material_set_shader();

		//UnityEngine.Color[] UnityEngine.Material::GetColorArrayImpl(System.Int32)
		void Register_UnityEngine_Material_GetColorArrayImpl();
		Register_UnityEngine_Material_GetColorArrayImpl();

		//UnityEngine.Material UnityEngine.Material::GetDefaultLineMaterial()
		void Register_UnityEngine_Material_GetDefaultLineMaterial();
		Register_UnityEngine_Material_GetDefaultLineMaterial();

		//UnityEngine.Material UnityEngine.Material::GetDefaultMaterial()
		void Register_UnityEngine_Material_GetDefaultMaterial();
		Register_UnityEngine_Material_GetDefaultMaterial();

		//UnityEngine.Material UnityEngine.Material::GetDefaultParticleMaterial()
		void Register_UnityEngine_Material_GetDefaultParticleMaterial();
		Register_UnityEngine_Material_GetDefaultParticleMaterial();

		//UnityEngine.MaterialGlobalIlluminationFlags UnityEngine.Material::get_globalIlluminationFlags()
		void Register_UnityEngine_Material_get_globalIlluminationFlags();
		Register_UnityEngine_Material_get_globalIlluminationFlags();

		//UnityEngine.Matrix4x4[] UnityEngine.Material::GetMatrixArrayImpl(System.Int32)
		void Register_UnityEngine_Material_GetMatrixArrayImpl();
		Register_UnityEngine_Material_GetMatrixArrayImpl();

		//UnityEngine.Shader UnityEngine.Material::get_shader()
		void Register_UnityEngine_Material_get_shader();
		Register_UnityEngine_Material_get_shader();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

		//UnityEngine.Vector4[] UnityEngine.Material::GetVectorArrayImpl(System.Int32)
		void Register_UnityEngine_Material_GetVectorArrayImpl();
		Register_UnityEngine_Material_GetVectorArrayImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.MaterialPropertyBlock

		//System.IntPtr UnityEngine.MaterialPropertyBlock::CreateImpl()
		void Register_UnityEngine_MaterialPropertyBlock_CreateImpl();
		Register_UnityEngine_MaterialPropertyBlock_CreateImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::Clear(System.Boolean)
		void Register_UnityEngine_MaterialPropertyBlock_Clear();
		Register_UnityEngine_MaterialPropertyBlock_Clear();

		//System.Void UnityEngine.MaterialPropertyBlock::DestroyImpl(System.IntPtr)
		void Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();
		Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetBufferImpl(System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_MaterialPropertyBlock_SetBufferImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetBufferImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();

		//System.Void UnityEngine.MaterialPropertyBlock::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetFloatImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_MaterialPropertyBlock_SetMatrixImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetMatrixImpl_Injected();

		//System.Void UnityEngine.MaterialPropertyBlock::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();
		Register_UnityEngine_MaterialPropertyBlock_SetTextureImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetVectorImpl_Injected();

	//End Registrations for type : UnityEngine.MaterialPropertyBlock

	//Start Registrations for type : UnityEngine.Mathf

		//System.Int32 UnityEngine.Mathf::ClosestPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_ClosestPowerOfTwo();
		Register_UnityEngine_Mathf_ClosestPowerOfTwo();

		//System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
		void Register_UnityEngine_Mathf_NextPowerOfTwo();
		Register_UnityEngine_Mathf_NextPowerOfTwo();

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

		//System.Single UnityEngine.Mathf::LinearToGammaSpace(System.Single)
		void Register_UnityEngine_Mathf_LinearToGammaSpace();
		Register_UnityEngine_Mathf_LinearToGammaSpace();

		//System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
		void Register_UnityEngine_Mathf_PerlinNoise();
		Register_UnityEngine_Mathf_PerlinNoise();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Matrix4x4

		//System.Void UnityEngine.Matrix4x4::DecomposeProjection_Injected(UnityEngine.Matrix4x4&,UnityEngine.FrustumPlanes&)
		void Register_UnityEngine_Matrix4x4_DecomposeProjection_Injected();
		Register_UnityEngine_Matrix4x4_DecomposeProjection_Injected();

		//System.Void UnityEngine.Matrix4x4::Frustum_Injected(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Frustum_Injected();
		Register_UnityEngine_Matrix4x4_Frustum_Injected();

		//System.Void UnityEngine.Matrix4x4::GetLossyScale_Injected(UnityEngine.Matrix4x4&,UnityEngine.Vector3&)
		void Register_UnityEngine_Matrix4x4_GetLossyScale_Injected();
		Register_UnityEngine_Matrix4x4_GetLossyScale_Injected();

		//System.Void UnityEngine.Matrix4x4::Inverse_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Inverse_Injected();
		Register_UnityEngine_Matrix4x4_Inverse_Injected();

		//System.Void UnityEngine.Matrix4x4::Ortho_Injected(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Ortho_Injected();
		Register_UnityEngine_Matrix4x4_Ortho_Injected();

		//System.Void UnityEngine.Matrix4x4::TRS_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_TRS_Injected();
		Register_UnityEngine_Matrix4x4_TRS_Injected();

	//End Registrations for type : UnityEngine.Matrix4x4

	//Start Registrations for type : UnityEngine.Mesh

		//System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32)
		void Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();

		//System.Array UnityEngine.Mesh::GetVertexAttributesAlloc()
		void Register_UnityEngine_Mesh_GetVertexAttributesAlloc();
		Register_UnityEngine_Mesh_GetVertexAttributesAlloc();

		//System.Boolean UnityEngine.Mesh::HasBoneWeights()
		void Register_UnityEngine_Mesh_HasBoneWeights();
		Register_UnityEngine_Mesh_HasBoneWeights();

		//System.Boolean UnityEngine.Mesh::HasVertexAttribute(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_HasVertexAttribute();
		Register_UnityEngine_Mesh_HasVertexAttribute();

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Boolean UnityEngine.Mesh::get_isReadable()
		void Register_UnityEngine_Mesh_get_isReadable();
		Register_UnityEngine_Mesh_get_isReadable();

		//System.Int32 UnityEngine.Mesh::GetAllBoneWeightsArraySize()
		void Register_UnityEngine_Mesh_GetAllBoneWeightsArraySize();
		Register_UnityEngine_Mesh_GetAllBoneWeightsArraySize();

		//System.Int32 UnityEngine.Mesh::GetBindposeCount()
		void Register_UnityEngine_Mesh_GetBindposeCount();
		Register_UnityEngine_Mesh_GetBindposeCount();

		//System.Int32 UnityEngine.Mesh::GetBlendShapeFrameCount(System.Int32)
		void Register_UnityEngine_Mesh_GetBlendShapeFrameCount();
		Register_UnityEngine_Mesh_GetBlendShapeFrameCount();

		//System.Int32 UnityEngine.Mesh::GetBlendShapeIndex(System.String)
		void Register_UnityEngine_Mesh_GetBlendShapeIndex();
		Register_UnityEngine_Mesh_GetBlendShapeIndex();

		//System.Int32 UnityEngine.Mesh::GetVertexAttributeCountImpl()
		void Register_UnityEngine_Mesh_GetVertexAttributeCountImpl();
		Register_UnityEngine_Mesh_GetVertexAttributeCountImpl();

		//System.Int32 UnityEngine.Mesh::GetVertexAttributeDimension(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_GetVertexAttributeDimension();
		Register_UnityEngine_Mesh_GetVertexAttributeDimension();

		//System.Int32 UnityEngine.Mesh::GetVertexAttributesArray(UnityEngine.Rendering.VertexAttributeDescriptor[])
		void Register_UnityEngine_Mesh_GetVertexAttributesArray();
		Register_UnityEngine_Mesh_GetVertexAttributesArray();

		//System.Int32 UnityEngine.Mesh::GetVertexAttributesList(System.Collections.Generic.List`1<UnityEngine.Rendering.VertexAttributeDescriptor>)
		void Register_UnityEngine_Mesh_GetVertexAttributesList();
		Register_UnityEngine_Mesh_GetVertexAttributesList();

		//System.Int32 UnityEngine.Mesh::get_blendShapeCount()
		void Register_UnityEngine_Mesh_get_blendShapeCount();
		Register_UnityEngine_Mesh_get_blendShapeCount();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Int32 UnityEngine.Mesh::get_vertexBufferCount()
		void Register_UnityEngine_Mesh_get_vertexBufferCount();
		Register_UnityEngine_Mesh_get_vertexBufferCount();

		//System.Int32 UnityEngine.Mesh::get_vertexCount()
		void Register_UnityEngine_Mesh_get_vertexCount();
		Register_UnityEngine_Mesh_get_vertexCount();

		//System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesImpl();
		Register_UnityEngine_Mesh_GetIndicesImpl();

		//System.Int32[] UnityEngine.Mesh::GetTrianglesImpl(System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetTrianglesImpl();
		Register_UnityEngine_Mesh_GetTrianglesImpl();

		//System.IntPtr UnityEngine.Mesh::GetAllBoneWeightsArray()
		void Register_UnityEngine_Mesh_GetAllBoneWeightsArray();
		Register_UnityEngine_Mesh_GetAllBoneWeightsArray();

		//System.IntPtr UnityEngine.Mesh::GetBonesPerVertexArray()
		void Register_UnityEngine_Mesh_GetBonesPerVertexArray();
		Register_UnityEngine_Mesh_GetBonesPerVertexArray();

		//System.IntPtr UnityEngine.Mesh::GetNativeIndexBufferPtr()
		void Register_UnityEngine_Mesh_GetNativeIndexBufferPtr();
		Register_UnityEngine_Mesh_GetNativeIndexBufferPtr();

		//System.IntPtr UnityEngine.Mesh::GetNativeVertexBufferPtr(System.Int32)
		void Register_UnityEngine_Mesh_GetNativeVertexBufferPtr();
		Register_UnityEngine_Mesh_GetNativeVertexBufferPtr();

		//System.Single UnityEngine.Mesh::GetBlendShapeFrameWeight(System.Int32,System.Int32)
		void Register_UnityEngine_Mesh_GetBlendShapeFrameWeight();
		Register_UnityEngine_Mesh_GetBlendShapeFrameWeight();

		//System.Single UnityEngine.Mesh::GetUVDistributionMetric(System.Int32)
		void Register_UnityEngine_Mesh_GetUVDistributionMetric();
		Register_UnityEngine_Mesh_GetUVDistributionMetric();

		//System.String UnityEngine.Mesh::GetBlendShapeName(System.Int32)
		void Register_UnityEngine_Mesh_GetBlendShapeName();
		Register_UnityEngine_Mesh_GetBlendShapeName();

		//System.UInt32 UnityEngine.Mesh::GetBaseVertexImpl(System.Int32)
		void Register_UnityEngine_Mesh_GetBaseVertexImpl();
		Register_UnityEngine_Mesh_GetBaseVertexImpl();

		//System.UInt32 UnityEngine.Mesh::GetIndexCountImpl(System.Int32)
		void Register_UnityEngine_Mesh_GetIndexCountImpl();
		Register_UnityEngine_Mesh_GetIndexCountImpl();

		//System.UInt32 UnityEngine.Mesh::GetIndexStartImpl(System.Int32)
		void Register_UnityEngine_Mesh_GetIndexStartImpl();
		Register_UnityEngine_Mesh_GetIndexStartImpl();

		//System.UInt32 UnityEngine.Mesh::GetTotalIndexCount()
		void Register_UnityEngine_Mesh_GetTotalIndexCount();
		Register_UnityEngine_Mesh_GetTotalIndexCount();

		//System.UInt32 UnityEngine.Mesh::GetTrianglesCountImpl(System.Int32)
		void Register_UnityEngine_Mesh_GetTrianglesCountImpl();
		Register_UnityEngine_Mesh_GetTrianglesCountImpl();

		//System.Void UnityEngine.Mesh::AddBlendShapeFrame(System.String,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[])
		void Register_UnityEngine_Mesh_AddBlendShapeFrame();
		Register_UnityEngine_Mesh_AddBlendShapeFrame();

		//System.Void UnityEngine.Mesh::ClearBlendShapes()
		void Register_UnityEngine_Mesh_ClearBlendShapes();
		Register_UnityEngine_Mesh_ClearBlendShapes();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::CombineMeshesImpl(UnityEngine.CombineInstance[],System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_Mesh_CombineMeshesImpl();
		Register_UnityEngine_Mesh_CombineMeshesImpl();

		//System.Void UnityEngine.Mesh::GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array)
		void Register_UnityEngine_Mesh_GetArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetArrayFromChannelImpl();

		//System.Void UnityEngine.Mesh::GetBindposesNonAllocImpl(UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Mesh_GetBindposesNonAllocImpl();
		Register_UnityEngine_Mesh_GetBindposesNonAllocImpl();

		//System.Void UnityEngine.Mesh::GetBlendShapeFrameVertices(System.Int32,System.Int32,UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[])
		void Register_UnityEngine_Mesh_GetBlendShapeFrameVertices();
		Register_UnityEngine_Mesh_GetBlendShapeFrameVertices();

		//System.Void UnityEngine.Mesh::GetBoneWeightsNonAllocImpl(UnityEngine.BoneWeight[])
		void Register_UnityEngine_Mesh_GetBoneWeightsNonAllocImpl();
		Register_UnityEngine_Mesh_GetBoneWeightsNonAllocImpl();

		//System.Void UnityEngine.Mesh::GetIndicesNonAllocImpl(System.Int32[],System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesNonAllocImpl();
		Register_UnityEngine_Mesh_GetIndicesNonAllocImpl();

		//System.Void UnityEngine.Mesh::GetIndicesNonAllocImpl16(System.UInt16[],System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesNonAllocImpl16();
		Register_UnityEngine_Mesh_GetIndicesNonAllocImpl16();

		//System.Void UnityEngine.Mesh::GetSubMesh_Injected(System.Int32,UnityEngine.Rendering.SubMeshDescriptor&)
		void Register_UnityEngine_Mesh_GetSubMesh_Injected();
		Register_UnityEngine_Mesh_GetSubMesh_Injected();

		//System.Void UnityEngine.Mesh::GetTrianglesNonAllocImpl(System.Int32[],System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetTrianglesNonAllocImpl();
		Register_UnityEngine_Mesh_GetTrianglesNonAllocImpl();

		//System.Void UnityEngine.Mesh::GetTrianglesNonAllocImpl16(System.UInt16[],System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetTrianglesNonAllocImpl16();
		Register_UnityEngine_Mesh_GetTrianglesNonAllocImpl16();

		//System.Void UnityEngine.Mesh::GetVertexAttribute_Injected(System.Int32,UnityEngine.Rendering.VertexAttributeDescriptor&)
		void Register_UnityEngine_Mesh_GetVertexAttribute_Injected();
		Register_UnityEngine_Mesh_GetVertexAttribute_Injected();

		//System.Void UnityEngine.Mesh::InternalSetBoneWeights(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
		void Register_UnityEngine_Mesh_InternalSetBoneWeights();
		Register_UnityEngine_Mesh_InternalSetBoneWeights();

		//System.Void UnityEngine.Mesh::InternalSetIndexBufferData(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_InternalSetIndexBufferData();
		Register_UnityEngine_Mesh_InternalSetIndexBufferData();

		//System.Void UnityEngine.Mesh::InternalSetIndexBufferDataFromArray(System.Array,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_InternalSetIndexBufferDataFromArray();
		Register_UnityEngine_Mesh_InternalSetIndexBufferDataFromArray();

		//System.Void UnityEngine.Mesh::InternalSetVertexBufferData(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_InternalSetVertexBufferData();
		Register_UnityEngine_Mesh_InternalSetVertexBufferData();

		//System.Void UnityEngine.Mesh::InternalSetVertexBufferDataFromArray(System.Int32,System.Array,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_InternalSetVertexBufferDataFromArray();
		Register_UnityEngine_Mesh_InternalSetVertexBufferDataFromArray();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::MarkDynamicImpl()
		void Register_UnityEngine_Mesh_MarkDynamicImpl();
		Register_UnityEngine_Mesh_MarkDynamicImpl();

		//System.Void UnityEngine.Mesh::MarkModified()
		void Register_UnityEngine_Mesh_MarkModified();
		Register_UnityEngine_Mesh_MarkModified();

		//System.Void UnityEngine.Mesh::OptimizeImpl()
		void Register_UnityEngine_Mesh_OptimizeImpl();
		Register_UnityEngine_Mesh_OptimizeImpl();

		//System.Void UnityEngine.Mesh::OptimizeIndexBuffersImpl()
		void Register_UnityEngine_Mesh_OptimizeIndexBuffersImpl();
		Register_UnityEngine_Mesh_OptimizeIndexBuffersImpl();

		//System.Void UnityEngine.Mesh::OptimizeReorderVertexBufferImpl()
		void Register_UnityEngine_Mesh_OptimizeReorderVertexBufferImpl();
		Register_UnityEngine_Mesh_OptimizeReorderVertexBufferImpl();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::RecalculateBoundsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateBoundsImpl();
		Register_UnityEngine_Mesh_RecalculateBoundsImpl();

		//System.Void UnityEngine.Mesh::RecalculateNormalsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateNormalsImpl();
		Register_UnityEngine_Mesh_RecalculateNormalsImpl();

		//System.Void UnityEngine.Mesh::RecalculateTangentsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateTangentsImpl();
		Register_UnityEngine_Mesh_RecalculateTangentsImpl();

		//System.Void UnityEngine.Mesh::RecalculateUVDistributionMetricImpl(System.Int32,System.Single)
		void Register_UnityEngine_Mesh_RecalculateUVDistributionMetricImpl();
		Register_UnityEngine_Mesh_RecalculateUVDistributionMetricImpl();

		//System.Void UnityEngine.Mesh::RecalculateUVDistributionMetricsImpl(System.Single)
		void Register_UnityEngine_Mesh_RecalculateUVDistributionMetricsImpl();
		Register_UnityEngine_Mesh_RecalculateUVDistributionMetricsImpl();

		//System.Void UnityEngine.Mesh::SetAllSubMeshesAtOnceFromArray(UnityEngine.Rendering.SubMeshDescriptor[],System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetAllSubMeshesAtOnceFromArray();
		Register_UnityEngine_Mesh_SetAllSubMeshesAtOnceFromArray();

		//System.Void UnityEngine.Mesh::SetAllSubMeshesAtOnceFromNativeArray(System.IntPtr,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetAllSubMeshesAtOnceFromNativeArray();
		Register_UnityEngine_Mesh_SetAllSubMeshesAtOnceFromNativeArray();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetBoneWeightsImpl(UnityEngine.BoneWeight[])
		void Register_UnityEngine_Mesh_SetBoneWeightsImpl();
		Register_UnityEngine_Mesh_SetBoneWeightsImpl();

		//System.Void UnityEngine.Mesh::SetIndexBufferParams(System.Int32,UnityEngine.Rendering.IndexFormat)
		void Register_UnityEngine_Mesh_SetIndexBufferParams();
		Register_UnityEngine_Mesh_SetIndexBufferParams();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.Array,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

		//System.Void UnityEngine.Mesh::SetIndicesNativeArrayImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesNativeArrayImpl();
		Register_UnityEngine_Mesh_SetIndicesNativeArrayImpl();

		//System.Void UnityEngine.Mesh::SetNativeArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetNativeArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetNativeArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetSubMesh_Injected(System.Int32,UnityEngine.Rendering.SubMeshDescriptor&,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetSubMesh_Injected();
		Register_UnityEngine_Mesh_SetSubMesh_Injected();

		//System.Void UnityEngine.Mesh::SetVertexBufferParamsFromArray(System.Int32,UnityEngine.Rendering.VertexAttributeDescriptor[])
		void Register_UnityEngine_Mesh_SetVertexBufferParamsFromArray();
		Register_UnityEngine_Mesh_SetVertexBufferParamsFromArray();

		//System.Void UnityEngine.Mesh::SetVertexBufferParamsFromPtr(System.Int32,System.IntPtr,System.Int32)
		void Register_UnityEngine_Mesh_SetVertexBufferParamsFromPtr();
		Register_UnityEngine_Mesh_SetVertexBufferParamsFromPtr();

		//System.Void UnityEngine.Mesh::UploadMeshDataImpl(System.Boolean)
		void Register_UnityEngine_Mesh_UploadMeshDataImpl();
		Register_UnityEngine_Mesh_UploadMeshDataImpl();

		//System.Void UnityEngine.Mesh::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Mesh_get_bounds_Injected();
		Register_UnityEngine_Mesh_get_bounds_Injected();

		//System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Mesh_set_bindposes();
		Register_UnityEngine_Mesh_set_bindposes();

		//System.Void UnityEngine.Mesh::set_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Mesh_set_bounds_Injected();
		Register_UnityEngine_Mesh_set_bounds_Injected();

		//System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
		void Register_UnityEngine_Mesh_set_indexFormat();
		Register_UnityEngine_Mesh_set_indexFormat();

		//System.Void UnityEngine.Mesh::set_subMeshCount(System.Int32)
		void Register_UnityEngine_Mesh_set_subMeshCount();
		Register_UnityEngine_Mesh_set_subMeshCount();

		//UnityEngine.BoneWeight[] UnityEngine.Mesh::GetBoneWeightsImpl()
		void Register_UnityEngine_Mesh_GetBoneWeightsImpl();
		Register_UnityEngine_Mesh_GetBoneWeightsImpl();

		//UnityEngine.Matrix4x4[] UnityEngine.Mesh::get_bindposes()
		void Register_UnityEngine_Mesh_get_bindposes();
		Register_UnityEngine_Mesh_get_bindposes();

		//UnityEngine.Mesh UnityEngine.Mesh::FromInstanceID(System.Int32)
		void Register_UnityEngine_Mesh_FromInstanceID();
		Register_UnityEngine_Mesh_FromInstanceID();

		//UnityEngine.MeshTopology UnityEngine.Mesh::GetTopologyImpl(System.Int32)
		void Register_UnityEngine_Mesh_GetTopologyImpl();
		Register_UnityEngine_Mesh_GetTopologyImpl();

		//UnityEngine.Rendering.IndexFormat UnityEngine.Mesh::get_indexFormat()
		void Register_UnityEngine_Mesh_get_indexFormat();
		Register_UnityEngine_Mesh_get_indexFormat();

		//UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Mesh::GetVertexAttributeFormat(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_GetVertexAttributeFormat();
		Register_UnityEngine_Mesh_GetVertexAttributeFormat();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.Mesh/MeshDataArray

		//System.Void UnityEngine.Mesh/MeshDataArray::AcquireReadOnlyMeshData(UnityEngine.Mesh,System.IntPtr*)
		void Register_UnityEngine_Mesh_MeshDataArray_AcquireReadOnlyMeshData();
		Register_UnityEngine_Mesh_MeshDataArray_AcquireReadOnlyMeshData();

		//System.Void UnityEngine.Mesh/MeshDataArray::AcquireReadOnlyMeshDatas(UnityEngine.Mesh[],System.IntPtr*,System.Int32)
		void Register_UnityEngine_Mesh_MeshDataArray_AcquireReadOnlyMeshDatas();
		Register_UnityEngine_Mesh_MeshDataArray_AcquireReadOnlyMeshDatas();

		//System.Void UnityEngine.Mesh/MeshDataArray::ApplyToMeshImpl(UnityEngine.Mesh,System.IntPtr,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_MeshDataArray_ApplyToMeshImpl();
		Register_UnityEngine_Mesh_MeshDataArray_ApplyToMeshImpl();

		//System.Void UnityEngine.Mesh/MeshDataArray::ApplyToMeshesImpl(UnityEngine.Mesh[],System.IntPtr*,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_MeshDataArray_ApplyToMeshesImpl();
		Register_UnityEngine_Mesh_MeshDataArray_ApplyToMeshesImpl();

		//System.Void UnityEngine.Mesh/MeshDataArray::CreateNewMeshDatas(System.IntPtr*,System.Int32)
		void Register_UnityEngine_Mesh_MeshDataArray_CreateNewMeshDatas();
		Register_UnityEngine_Mesh_MeshDataArray_CreateNewMeshDatas();

		//System.Void UnityEngine.Mesh/MeshDataArray::ReleaseMeshDatas(System.IntPtr*,System.Int32)
		void Register_UnityEngine_Mesh_MeshDataArray_ReleaseMeshDatas();
		Register_UnityEngine_Mesh_MeshDataArray_ReleaseMeshDatas();

	//End Registrations for type : UnityEngine.Mesh/MeshDataArray

	//Start Registrations for type : UnityEngine.MeshCollider

		//System.Boolean UnityEngine.MeshCollider::get_convex()
		void Register_UnityEngine_MeshCollider_get_convex();
		Register_UnityEngine_MeshCollider_get_convex();

		//System.Void UnityEngine.MeshCollider::set_convex(System.Boolean)
		void Register_UnityEngine_MeshCollider_set_convex();
		Register_UnityEngine_MeshCollider_set_convex();

		//System.Void UnityEngine.MeshCollider::set_cookingOptions(UnityEngine.MeshColliderCookingOptions)
		void Register_UnityEngine_MeshCollider_set_cookingOptions();
		Register_UnityEngine_MeshCollider_set_cookingOptions();

		//System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshCollider_set_sharedMesh();
		Register_UnityEngine_MeshCollider_set_sharedMesh();

		//UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
		void Register_UnityEngine_MeshCollider_get_sharedMesh();
		Register_UnityEngine_MeshCollider_get_sharedMesh();

		//UnityEngine.MeshColliderCookingOptions UnityEngine.MeshCollider::get_cookingOptions()
		void Register_UnityEngine_MeshCollider_get_cookingOptions();
		Register_UnityEngine_MeshCollider_get_cookingOptions();

	//End Registrations for type : UnityEngine.MeshCollider

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_mesh();
		Register_UnityEngine_MeshFilter_set_mesh();

		//System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_sharedMesh();
		Register_UnityEngine_MeshFilter_set_sharedMesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
		void Register_UnityEngine_MeshFilter_get_mesh();
		Register_UnityEngine_MeshFilter_get_mesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
		void Register_UnityEngine_MeshFilter_get_sharedMesh();
		Register_UnityEngine_MeshFilter_get_sharedMesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.MeshRenderer

		//System.Int32 UnityEngine.MeshRenderer::get_subMeshStartIndex()
		void Register_UnityEngine_MeshRenderer_get_subMeshStartIndex();
		Register_UnityEngine_MeshRenderer_get_subMeshStartIndex();

		//System.Void UnityEngine.MeshRenderer::set_additionalVertexStreams(UnityEngine.Mesh)
		void Register_UnityEngine_MeshRenderer_set_additionalVertexStreams();
		Register_UnityEngine_MeshRenderer_set_additionalVertexStreams();

		//System.Void UnityEngine.MeshRenderer::set_enlightenVertexStream(UnityEngine.Mesh)
		void Register_UnityEngine_MeshRenderer_set_enlightenVertexStream();
		Register_UnityEngine_MeshRenderer_set_enlightenVertexStream();

		//UnityEngine.Mesh UnityEngine.MeshRenderer::get_additionalVertexStreams()
		void Register_UnityEngine_MeshRenderer_get_additionalVertexStreams();
		Register_UnityEngine_MeshRenderer_get_additionalVertexStreams();

		//UnityEngine.Mesh UnityEngine.MeshRenderer::get_enlightenVertexStream()
		void Register_UnityEngine_MeshRenderer_get_enlightenVertexStream();
		Register_UnityEngine_MeshRenderer_get_enlightenVertexStream();

	//End Registrations for type : UnityEngine.MeshRenderer

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.Networking.CertificateHandler

		//System.Void UnityEngine.Networking.CertificateHandler::Release()
		void Register_UnityEngine_Networking_CertificateHandler_Release();
		Register_UnityEngine_Networking_CertificateHandler_Release();

	//End Registrations for type : UnityEngine.Networking.CertificateHandler

	//Start Registrations for type : UnityEngine.Networking.ConnectionConfigInternal

		//System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
		void Register_UnityEngine_Networking_ConnectionConfigInternal_MakeChannelsSharedOrder();
		Register_UnityEngine_Networking_ConnectionConfigInternal_MakeChannelsSharedOrder();

		//System.Boolean UnityEngine.Networking.ConnectionConfigInternal::SetPacketSize(System.UInt16)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_SetPacketSize();
		Register_UnityEngine_Networking_ConnectionConfigInternal_SetPacketSize();

		//System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(System.Int32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_AddChannel();
		Register_UnityEngine_Networking_ConnectionConfigInternal_AddChannel();

		//System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCAFilePath(System.String)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_SetSSLCAFilePath();
		Register_UnityEngine_Networking_ConnectionConfigInternal_SetSSLCAFilePath();

		//System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLCertFilePath(System.String)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_SetSSLCertFilePath();
		Register_UnityEngine_Networking_ConnectionConfigInternal_SetSSLCertFilePath();

		//System.Int32 UnityEngine.Networking.ConnectionConfigInternal::SetSSLPrivateKeyFilePath(System.String)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_SetSSLPrivateKeyFilePath();
		Register_UnityEngine_Networking_ConnectionConfigInternal_SetSSLPrivateKeyFilePath();

		//System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::InternalCreate()
		void Register_UnityEngine_Networking_ConnectionConfigInternal_InternalCreate();
		Register_UnityEngine_Networking_ConnectionConfigInternal_InternalCreate();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_InternalDestroy();
		Register_UnityEngine_Networking_ConnectionConfigInternal_InternalDestroy();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AckDelay(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_AckDelay();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_AckDelay();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AcksType(System.Byte)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_AcksType();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_AcksType();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_AllCostTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_AllCostTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_AllCostTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_BandwidthPeakFactor(System.Single)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_BandwidthPeakFactor();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_BandwidthPeakFactor();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ConnectTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_ConnectTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_ConnectTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_DisconnectTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_DisconnectTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_DisconnectTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_FragmentSize(System.UInt16)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_FragmentSize();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_FragmentSize();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_InitialBandwidth(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_InitialBandwidth();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_InitialBandwidth();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageCount(System.UInt16)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxCombinedReliableMessageCount();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxCombinedReliableMessageCount();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxCombinedReliableMessageSize(System.UInt16)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxCombinedReliableMessageSize();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxCombinedReliableMessageSize();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxConnectionAttempt(System.Byte)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxConnectionAttempt();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxConnectionAttempt();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MaxSentMessageQueueSize(System.UInt16)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxSentMessageQueueSize();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_MaxSentMessageQueueSize();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_MinUpdateTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_MinUpdateTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_MinUpdateTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_NetworkDropThreshold(System.Byte)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_NetworkDropThreshold();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_NetworkDropThreshold();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_OverflowDropThreshold(System.Byte)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_OverflowDropThreshold();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_OverflowDropThreshold();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_PingTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_PingTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_PingTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ReducedPingTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_ReducedPingTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_ReducedPingTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_ResendTimeout(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_ResendTimeout();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_ResendTimeout();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_SendDelay(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_SendDelay();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_SendDelay();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UdpSocketReceiveBufferMaxSize(System.UInt32)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_UdpSocketReceiveBufferMaxSize();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_UsePlatformSpecificProtocols(System.Boolean)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_UsePlatformSpecificProtocols();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_UsePlatformSpecificProtocols();

		//System.Void UnityEngine.Networking.ConnectionConfigInternal::set_WebSocketReceiveBufferMaxSize(System.UInt16)
		void Register_UnityEngine_Networking_ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize();
		Register_UnityEngine_Networking_ConnectionConfigInternal_set_WebSocketReceiveBufferMaxSize();

	//End Registrations for type : UnityEngine.Networking.ConnectionConfigInternal

	//Start Registrations for type : UnityEngine.Networking.ConnectionSimulatorConfigInternal

		//System.IntPtr UnityEngine.Networking.ConnectionSimulatorConfigInternal::InternalCreate(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
		void Register_UnityEngine_Networking_ConnectionSimulatorConfigInternal_InternalCreate();
		Register_UnityEngine_Networking_ConnectionSimulatorConfigInternal_InternalCreate();

		//System.Void UnityEngine.Networking.ConnectionSimulatorConfigInternal::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_Networking_ConnectionSimulatorConfigInternal_InternalDestroy();
		Register_UnityEngine_Networking_ConnectionSimulatorConfigInternal_InternalDestroy();

	//End Registrations for type : UnityEngine.Networking.ConnectionSimulatorConfigInternal

	//Start Registrations for type : UnityEngine.Networking.DownloadHandler

		//System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();
		Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();

		//System.String UnityEngine.Networking.DownloadHandler::GetContentType()
		void Register_UnityEngine_Networking_DownloadHandler_GetContentType();
		Register_UnityEngine_Networking_DownloadHandler_GetContentType();

		//System.Void UnityEngine.Networking.DownloadHandler::Release()
		void Register_UnityEngine_Networking_DownloadHandler_Release();
		Register_UnityEngine_Networking_DownloadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.DownloadHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerAssetBundle

		//System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::Create(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.UInt32)
		void Register_UnityEngine_Networking_DownloadHandlerAssetBundle_Create();
		Register_UnityEngine_Networking_DownloadHandlerAssetBundle_Create();

		//System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32)
		void Register_UnityEngine_Networking_DownloadHandlerAssetBundle_CreateCached_Injected();
		Register_UnityEngine_Networking_DownloadHandlerAssetBundle_CreateCached_Injected();

		//UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()
		void Register_UnityEngine_Networking_DownloadHandlerAssetBundle_get_assetBundle();
		Register_UnityEngine_Networking_DownloadHandlerAssetBundle_get_assetBundle();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerAssetBundle

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

		//System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
		void Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();
		Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

	//Start Registrations for type : UnityEngine.Networking.GlobalConfigInternal

		//System.IntPtr UnityEngine.Networking.GlobalConfigInternal::InternalCreate()
		void Register_UnityEngine_Networking_GlobalConfigInternal_InternalCreate();
		Register_UnityEngine_Networking_GlobalConfigInternal_InternalCreate();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_Networking_GlobalConfigInternal_InternalDestroy();
		Register_UnityEngine_Networking_GlobalConfigInternal_InternalDestroy();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxHosts(System.UInt16)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxHosts();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxHosts();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxNetSimulatorTimeout(System.UInt32)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxNetSimulatorTimeout();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxNetSimulatorTimeout();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxPacketSize(System.UInt16)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxPacketSize();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxPacketSize();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_MaxTimerTimeout(System.UInt32)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxTimerTimeout();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_MaxTimerTimeout();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_MinNetSimulatorTimeout(System.UInt32)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_MinNetSimulatorTimeout();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_MinNetSimulatorTimeout();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_MinTimerTimeout(System.UInt32)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_MinTimerTimeout();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_MinTimerTimeout();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumReceivedMessages(System.UInt16)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_ReactorMaximumReceivedMessages();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_ReactorMaximumReceivedMessages();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorMaximumSentMessages(System.UInt16)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_ReactorMaximumSentMessages();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_ReactorMaximumSentMessages();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_ReactorModel(System.Byte)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_ReactorModel();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_ReactorModel();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_ThreadAwakeTimeout(System.UInt32)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_ThreadAwakeTimeout();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_ThreadAwakeTimeout();

		//System.Void UnityEngine.Networking.GlobalConfigInternal::set_ThreadPoolSize(System.Byte)
		void Register_UnityEngine_Networking_GlobalConfigInternal_set_ThreadPoolSize();
		Register_UnityEngine_Networking_GlobalConfigInternal_set_ThreadPoolSize();

	//End Registrations for type : UnityEngine.Networking.GlobalConfigInternal

	//Start Registrations for type : UnityEngine.Networking.HostTopologyInternal

		//System.IntPtr UnityEngine.Networking.HostTopologyInternal::InternalCreate(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
		void Register_UnityEngine_Networking_HostTopologyInternal_InternalCreate();
		Register_UnityEngine_Networking_HostTopologyInternal_InternalCreate();

		//System.UInt16 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
		void Register_UnityEngine_Networking_HostTopologyInternal_AddSpecialConnectionConfig();
		Register_UnityEngine_Networking_HostTopologyInternal_AddSpecialConnectionConfig();

		//System.Void UnityEngine.Networking.HostTopologyInternal::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_Networking_HostTopologyInternal_InternalDestroy();
		Register_UnityEngine_Networking_HostTopologyInternal_InternalDestroy();

		//System.Void UnityEngine.Networking.HostTopologyInternal::set_MessagePoolSizeGrowthFactor(System.Single)
		void Register_UnityEngine_Networking_HostTopologyInternal_set_MessagePoolSizeGrowthFactor();
		Register_UnityEngine_Networking_HostTopologyInternal_set_MessagePoolSizeGrowthFactor();

		//System.Void UnityEngine.Networking.HostTopologyInternal::set_ReceivedMessagePoolSize(System.UInt16)
		void Register_UnityEngine_Networking_HostTopologyInternal_set_ReceivedMessagePoolSize();
		Register_UnityEngine_Networking_HostTopologyInternal_set_ReceivedMessagePoolSize();

		//System.Void UnityEngine.Networking.HostTopologyInternal::set_SentMessagePoolSize(System.UInt16)
		void Register_UnityEngine_Networking_HostTopologyInternal_set_SentMessagePoolSize();
		Register_UnityEngine_Networking_HostTopologyInternal_set_SentMessagePoolSize();

	//End Registrations for type : UnityEngine.Networking.HostTopologyInternal

	//Start Registrations for type : UnityEngine.Networking.NetworkTransport

		//System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_Disconnect();
		Register_UnityEngine_Networking_NetworkTransport_Disconnect();

		//System.Boolean UnityEngine.Networking.NetworkTransport::IsStartedInternal()
		void Register_UnityEngine_Networking_NetworkTransport_IsStartedInternal();
		Register_UnityEngine_Networking_NetworkTransport_IsStartedInternal();

		//System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
		void Register_UnityEngine_Networking_NetworkTransport_RemoveHost();
		Register_UnityEngine_Networking_NetworkTransport_RemoveHost();

		//System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_SendWrapper();
		Register_UnityEngine_Networking_NetworkTransport_SendWrapper();

		//System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_StartBroadcastDiscoveryWithData();
		Register_UnityEngine_Networking_NetworkTransport_StartBroadcastDiscoveryWithData();

		//System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithoutData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_StartBroadcastDiscoveryWithoutData();
		Register_UnityEngine_Networking_NetworkTransport_StartBroadcastDiscoveryWithoutData();

		//System.Int32 UnityEngine.Networking.NetworkTransport::AddHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Networking_NetworkTransport_AddHostInternal();
		Register_UnityEngine_Networking_NetworkTransport_AddHostInternal();

		//System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostInternal(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
		void Register_UnityEngine_Networking_NetworkTransport_AddWsHostInternal();
		Register_UnityEngine_Networking_NetworkTransport_AddWsHostInternal();

		//System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_Connect();
		Register_UnityEngine_Networking_NetworkTransport_Connect();

		//System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeerInternal(System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.UInt64,System.UInt64,System.UInt16,System.Int32,System.Single,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_ConnectToNetworkPeerInternal();
		Register_UnityEngine_Networking_NetworkTransport_ConnectToNetworkPeerInternal();

		//System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulatorInternal(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfigInternal)
		void Register_UnityEngine_Networking_NetworkTransport_ConnectWithSimulatorInternal();
		Register_UnityEngine_Networking_NetworkTransport_ConnectWithSimulatorInternal();

		//System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_GetCurrentRTT();
		Register_UnityEngine_Networking_NetworkTransport_GetCurrentRTT();

		//System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
		void Register_UnityEngine_Networking_NetworkTransport_GetMaxPacketSize();
		Register_UnityEngine_Networking_NetworkTransport_GetMaxPacketSize();

		//System.Int32 UnityEngine.Networking.NetworkTransport::Internal_ConnectEndPoint(System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_Internal_ConnectEndPoint();
		Register_UnityEngine_Networking_NetworkTransport_Internal_ConnectEndPoint();

		//System.Int32 UnityEngine.Networking.NetworkTransport::PopData(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_PopData();
		Register_UnityEngine_Networking_NetworkTransport_PopData();

		//System.Int32 UnityEngine.Networking.NetworkTransport::PopDataFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_PopDataFromHost();
		Register_UnityEngine_Networking_NetworkTransport_PopDataFromHost();

		//System.Int32 UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHostInternal(System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_ReceiveRelayEventFromHostInternal();
		Register_UnityEngine_Networking_NetworkTransport_ReceiveRelayEventFromHostInternal();

		//System.String UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.Int32&,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_GetBroadcastConnectionInfo();
		Register_UnityEngine_Networking_NetworkTransport_GetBroadcastConnectionInfo();

		//System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_GetConnectionInfo();
		Register_UnityEngine_Networking_NetworkTransport_GetConnectionInfo();

		//System.Void UnityEngine.Networking.NetworkTransport::Cleanup()
		void Register_UnityEngine_Networking_NetworkTransport_Cleanup();
		Register_UnityEngine_Networking_NetworkTransport_Cleanup();

		//System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHostInternal(System.Int32,System.String,System.Int32,System.UInt64,System.UInt64,System.UInt16,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_ConnectAsNetworkHostInternal();
		Register_UnityEngine_Networking_NetworkTransport_ConnectAsNetworkHostInternal();

		//System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessageInternal(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_GetBroadcastConnectionMessageInternal();
		Register_UnityEngine_Networking_NetworkTransport_GetBroadcastConnectionMessageInternal();

		//System.Void UnityEngine.Networking.NetworkTransport::InitializeClass()
		void Register_UnityEngine_Networking_NetworkTransport_InitializeClass();
		Register_UnityEngine_Networking_NetworkTransport_InitializeClass();

		//System.Void UnityEngine.Networking.NetworkTransport::InitializeClassWithConfig(UnityEngine.Networking.GlobalConfigInternal)
		void Register_UnityEngine_Networking_NetworkTransport_InitializeClassWithConfig();
		Register_UnityEngine_Networking_NetworkTransport_InitializeClassWithConfig();

		//System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
		void Register_UnityEngine_Networking_NetworkTransport_SetBroadcastCredentials();
		Register_UnityEngine_Networking_NetworkTransport_SetBroadcastCredentials();

		//System.Void UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)
		void Register_UnityEngine_Networking_NetworkTransport_SetConnectionReadyForSendCallback();
		Register_UnityEngine_Networking_NetworkTransport_SetConnectionReadyForSendCallback();

		//System.Void UnityEngine.Networking.NetworkTransport::SetMulticastLock(System.Boolean)
		void Register_UnityEngine_Networking_NetworkTransport_SetMulticastLock();
		Register_UnityEngine_Networking_NetworkTransport_SetMulticastLock();

		//System.Void UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)
		void Register_UnityEngine_Networking_NetworkTransport_SetNetworkEventAvailableCallback();
		Register_UnityEngine_Networking_NetworkTransport_SetNetworkEventAvailableCallback();

		//System.Void UnityEngine.Networking.NetworkTransport::SetPacketStat(System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Networking_NetworkTransport_SetPacketStat();
		Register_UnityEngine_Networking_NetworkTransport_SetPacketStat();

		//System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
		void Register_UnityEngine_Networking_NetworkTransport_StopBroadcastDiscovery();
		Register_UnityEngine_Networking_NetworkTransport_StopBroadcastDiscovery();

	//End Registrations for type : UnityEngine.Networking.NetworkTransport

	//Start Registrations for type : UnityEngine.Networking.UnityWebRequest

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();
		Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();

		//System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
		void Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();
		Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();

		//System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
		void Register_UnityEngine_Networking_UnityWebRequest_Create();
		Register_UnityEngine_Networking_UnityWebRequest_Create();

		//System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
		void Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString();
		Register_UnityEngine_Networking_UnityWebRequest_GetHTTPStatusString();

		//System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
		void Register_UnityEngine_Networking_UnityWebRequest_GetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_GetUrl();

		//System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
		void Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();
		Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();

		//System.UInt64 UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()
		void Register_UnityEngine_Networking_UnityWebRequest_get_downloadedBytes();
		Register_UnityEngine_Networking_UnityWebRequest_get_downloadedBytes();

		//System.Void UnityEngine.Networking.UnityWebRequest::Abort()
		void Register_UnityEngine_Networking_UnityWebRequest_Abort();
		Register_UnityEngine_Networking_UnityWebRequest_Abort();

		//System.Void UnityEngine.Networking.UnityWebRequest::Release()
		void Register_UnityEngine_Networking_UnityWebRequest_Release();
		Register_UnityEngine_Networking_UnityWebRequest_Release();

		//System.Void UnityEngine.Networking.UnityWebRequest::SetRedirectLimitFromScripting(System.Int32)
		void Register_UnityEngine_Networking_UnityWebRequest_SetRedirectLimitFromScripting();
		Register_UnityEngine_Networking_UnityWebRequest_SetRedirectLimitFromScripting();

		//UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
		void Register_UnityEngine_Networking_UnityWebRequest_get_result();
		Register_UnityEngine_Networking_UnityWebRequest_get_result();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
		void Register_UnityEngine_Networking_UnityWebRequest_GetError();
		Register_UnityEngine_Networking_UnityWebRequest_GetError();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_InternalSetRequestHeader();
		Register_UnityEngine_Networking_UnityWebRequest_InternalSetRequestHeader();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCertificateHandler(UnityEngine.Networking.CertificateHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetCertificateHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetCertificateHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
		void Register_UnityEngine_Networking_UnityWebRequest_SetMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
		void Register_UnityEngine_Networking_UnityWebRequest_SetTimeoutMsec();
		Register_UnityEngine_Networking_UnityWebRequest_SetTimeoutMsec();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_SetUrl();

		//UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
		void Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();
		Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();

	//End Registrations for type : UnityEngine.Networking.UnityWebRequest

	//Start Registrations for type : UnityEngine.Networking.UploadHandler

		//System.Void UnityEngine.Networking.UploadHandler::Release()
		void Register_UnityEngine_Networking_UploadHandler_Release();
		Register_UnityEngine_Networking_UploadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.UploadHandler

	//Start Registrations for type : UnityEngine.Networking.UploadHandlerRaw

		//System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
		void Register_UnityEngine_Networking_UploadHandlerRaw_Create();
		Register_UnityEngine_Networking_UploadHandlerRaw_Create();

	//End Registrations for type : UnityEngine.Networking.UploadHandlerRaw

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

		//System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
		void Register_UnityEngine_NoAllocHelpers_Internal_ResizeList();
		Register_UnityEngine_NoAllocHelpers_Internal_ResizeList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Boolean UnityEngine.Object::CurrentThreadIsMainThread()
		void Register_UnityEngine_Object_CurrentThreadIsMainThread();
		Register_UnityEngine_Object_CurrentThreadIsMainThread();

		//System.Boolean UnityEngine.Object::DoesObjectWithInstanceIDExist(System.Int32)
		void Register_UnityEngine_Object_DoesObjectWithInstanceIDExist();
		Register_UnityEngine_Object_DoesObjectWithInstanceIDExist();

		//System.Boolean UnityEngine.Object::IsPersistent(UnityEngine.Object)
		void Register_UnityEngine_Object_IsPersistent();
		Register_UnityEngine_Object_IsPersistent();

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
		void Register_UnityEngine_Object_DestroyImmediate();
		Register_UnityEngine_Object_DestroyImmediate();

		//System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
		void Register_UnityEngine_Object_DontDestroyOnLoad();
		Register_UnityEngine_Object_DontDestroyOnLoad();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
		void Register_UnityEngine_Object_get_hideFlags();
		Register_UnityEngine_Object_get_hideFlags();

		//UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
		void Register_UnityEngine_Object_FindObjectFromInstanceID();
		Register_UnityEngine_Object_FindObjectFromInstanceID();

		//UnityEngine.Object UnityEngine.Object::ForceLoadFromInstanceID(System.Int32)
		void Register_UnityEngine_Object_ForceLoadFromInstanceID();
		Register_UnityEngine_Object_ForceLoadFromInstanceID();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object,UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingleWithParent_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingleWithParent_Injected();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle_Injected(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfTypeIncludingAssets(System.Type)
		void Register_UnityEngine_Object_FindObjectsOfTypeIncludingAssets();
		Register_UnityEngine_Object_FindObjectsOfTypeIncludingAssets();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
		void Register_UnityEngine_ParticleSystem_IsAlive();
		Register_UnityEngine_ParticleSystem_IsAlive();

		//System.Boolean UnityEngine.ParticleSystem::get_isEmitting()
		void Register_UnityEngine_ParticleSystem_get_isEmitting();
		Register_UnityEngine_ParticleSystem_get_isEmitting();

		//System.Boolean UnityEngine.ParticleSystem::get_isPaused()
		void Register_UnityEngine_ParticleSystem_get_isPaused();
		Register_UnityEngine_ParticleSystem_get_isPaused();

		//System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
		void Register_UnityEngine_ParticleSystem_get_isPlaying();
		Register_UnityEngine_ParticleSystem_get_isPlaying();

		//System.Boolean UnityEngine.ParticleSystem::get_isStopped()
		void Register_UnityEngine_ParticleSystem_get_isStopped();
		Register_UnityEngine_ParticleSystem_get_isStopped();

		//System.Boolean UnityEngine.ParticleSystem::get_proceduralSimulationSupported()
		void Register_UnityEngine_ParticleSystem_get_proceduralSimulationSupported();
		Register_UnityEngine_ParticleSystem_get_proceduralSimulationSupported();

		//System.Boolean UnityEngine.ParticleSystem::get_useAutoRandomSeed()
		void Register_UnityEngine_ParticleSystem_get_useAutoRandomSeed();
		Register_UnityEngine_ParticleSystem_get_useAutoRandomSeed();

		//System.Int32 UnityEngine.ParticleSystem::GetCustomParticleData(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.ParticleSystemCustomData)
		void Register_UnityEngine_ParticleSystem_GetCustomParticleData();
		Register_UnityEngine_ParticleSystem_GetCustomParticleData();

		//System.Int32 UnityEngine.ParticleSystem::GetParticleMeshIndex(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_GetParticleMeshIndex();
		Register_UnityEngine_ParticleSystem_GetParticleMeshIndex();

		//System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_GetParticles();
		Register_UnityEngine_ParticleSystem_GetParticles();

		//System.Int32 UnityEngine.ParticleSystem::GetParticlesWithNativeArray(System.IntPtr,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_GetParticlesWithNativeArray();
		Register_UnityEngine_ParticleSystem_GetParticlesWithNativeArray();

		//System.Int32 UnityEngine.ParticleSystem::get_particleCount()
		void Register_UnityEngine_ParticleSystem_get_particleCount();
		Register_UnityEngine_ParticleSystem_get_particleCount();

		//System.Single UnityEngine.ParticleSystem::GetParticleCurrentSize(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_GetParticleCurrentSize();
		Register_UnityEngine_ParticleSystem_GetParticleCurrentSize();

		//System.Single UnityEngine.ParticleSystem::get_time()
		void Register_UnityEngine_ParticleSystem_get_time();
		Register_UnityEngine_ParticleSystem_get_time();

		//System.UInt32 UnityEngine.ParticleSystem::get_randomSeed()
		void Register_UnityEngine_ParticleSystem_get_randomSeed();
		Register_UnityEngine_ParticleSystem_get_randomSeed();

		//System.Void UnityEngine.ParticleSystem::AllocateAxisOfRotationAttribute()
		void Register_UnityEngine_ParticleSystem_AllocateAxisOfRotationAttribute();
		Register_UnityEngine_ParticleSystem_AllocateAxisOfRotationAttribute();

		//System.Void UnityEngine.ParticleSystem::AllocateCustomDataAttribute(UnityEngine.ParticleSystemCustomData)
		void Register_UnityEngine_ParticleSystem_AllocateCustomDataAttribute();
		Register_UnityEngine_ParticleSystem_AllocateCustomDataAttribute();

		//System.Void UnityEngine.ParticleSystem::AllocateMeshIndexAttribute()
		void Register_UnityEngine_ParticleSystem_AllocateMeshIndexAttribute();
		Register_UnityEngine_ParticleSystem_AllocateMeshIndexAttribute();

		//System.Void UnityEngine.ParticleSystem::Clear(System.Boolean)
		void Register_UnityEngine_ParticleSystem_Clear();
		Register_UnityEngine_ParticleSystem_Clear();

		//System.Void UnityEngine.ParticleSystem::CopyManagedJobData(System.Void*,UnityEngine.ParticleSystemJobs.NativeParticleData&)
		void Register_UnityEngine_ParticleSystem_CopyManagedJobData();
		Register_UnityEngine_ParticleSystem_CopyManagedJobData();

		//System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_EmitOld_Internal();
		Register_UnityEngine_ParticleSystem_EmitOld_Internal();

		//System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Injected();
		Register_UnityEngine_ParticleSystem_Emit_Injected();

		//System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Internal();
		Register_UnityEngine_ParticleSystem_Emit_Internal();

		//System.Void UnityEngine.ParticleSystem::GetManagedJobHandle_Injected(Unity.Jobs.JobHandle&)
		void Register_UnityEngine_ParticleSystem_GetManagedJobHandle_Injected();
		Register_UnityEngine_ParticleSystem_GetManagedJobHandle_Injected();

		//System.Void UnityEngine.ParticleSystem::GetParticleCurrentColor_Injected(UnityEngine.ParticleSystem/Particle&,UnityEngine.Color32&)
		void Register_UnityEngine_ParticleSystem_GetParticleCurrentColor_Injected();
		Register_UnityEngine_ParticleSystem_GetParticleCurrentColor_Injected();

		//System.Void UnityEngine.ParticleSystem::GetParticleCurrentSize3D_Injected(UnityEngine.ParticleSystem/Particle&,UnityEngine.Vector3&)
		void Register_UnityEngine_ParticleSystem_GetParticleCurrentSize3D_Injected();
		Register_UnityEngine_ParticleSystem_GetParticleCurrentSize3D_Injected();

		//System.Void UnityEngine.ParticleSystem::GetPlaybackState_Injected(UnityEngine.ParticleSystem/PlaybackState&)
		void Register_UnityEngine_ParticleSystem_GetPlaybackState_Injected();
		Register_UnityEngine_ParticleSystem_GetPlaybackState_Injected();

		//System.Void UnityEngine.ParticleSystem::GetTrailDataInternal(UnityEngine.ParticleSystem/Trails&)
		void Register_UnityEngine_ParticleSystem_GetTrailDataInternal();
		Register_UnityEngine_ParticleSystem_GetTrailDataInternal();

		//System.Void UnityEngine.ParticleSystem::Pause(System.Boolean)
		void Register_UnityEngine_ParticleSystem_Pause();
		Register_UnityEngine_ParticleSystem_Pause();

		//System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
		void Register_UnityEngine_ParticleSystem_Play();
		Register_UnityEngine_ParticleSystem_Play();

		//System.Void UnityEngine.ParticleSystem::ResetPreMappedBufferMemory()
		void Register_UnityEngine_ParticleSystem_ResetPreMappedBufferMemory();
		Register_UnityEngine_ParticleSystem_ResetPreMappedBufferMemory();

		//System.Void UnityEngine.ParticleSystem::ScheduleManagedJob_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Void*,Unity.Jobs.JobHandle&)
		void Register_UnityEngine_ParticleSystem_ScheduleManagedJob_Injected();
		Register_UnityEngine_ParticleSystem_ScheduleManagedJob_Injected();

		//System.Void UnityEngine.ParticleSystem::SetCustomParticleData(System.Collections.Generic.List`1<UnityEngine.Vector4>,UnityEngine.ParticleSystemCustomData)
		void Register_UnityEngine_ParticleSystem_SetCustomParticleData();
		Register_UnityEngine_ParticleSystem_SetCustomParticleData();

		//System.Void UnityEngine.ParticleSystem::SetManagedJobHandle_Injected(Unity.Jobs.JobHandle&)
		void Register_UnityEngine_ParticleSystem_SetManagedJobHandle_Injected();
		Register_UnityEngine_ParticleSystem_SetManagedJobHandle_Injected();

		//System.Void UnityEngine.ParticleSystem::SetMaximumPreMappedBufferCounts(System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_SetMaximumPreMappedBufferCounts();
		Register_UnityEngine_ParticleSystem_SetMaximumPreMappedBufferCounts();

		//System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_SetParticles();
		Register_UnityEngine_ParticleSystem_SetParticles();

		//System.Void UnityEngine.ParticleSystem::SetParticlesWithNativeArray(System.IntPtr,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_SetParticlesWithNativeArray();
		Register_UnityEngine_ParticleSystem_SetParticlesWithNativeArray();

		//System.Void UnityEngine.ParticleSystem::SetPlaybackState_Injected(UnityEngine.ParticleSystem/PlaybackState&)
		void Register_UnityEngine_ParticleSystem_SetPlaybackState_Injected();
		Register_UnityEngine_ParticleSystem_SetPlaybackState_Injected();

		//System.Void UnityEngine.ParticleSystem::SetTrails_Injected(UnityEngine.ParticleSystem/Trails&)
		void Register_UnityEngine_ParticleSystem_SetTrails_Injected();
		Register_UnityEngine_ParticleSystem_SetTrails_Injected();

		//System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_ParticleSystem_Simulate();
		Register_UnityEngine_ParticleSystem_Simulate();

		//System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
		void Register_UnityEngine_ParticleSystem_Stop();
		Register_UnityEngine_ParticleSystem_Stop();

		//System.Void UnityEngine.ParticleSystem::TriggerSubEmitter(System.Int32,System.Collections.Generic.List`1<UnityEngine.ParticleSystem/Particle>)
		void Register_UnityEngine_ParticleSystem_TriggerSubEmitter();
		Register_UnityEngine_ParticleSystem_TriggerSubEmitter();

		//System.Void UnityEngine.ParticleSystem::TriggerSubEmitterForParticle_Injected(System.Int32,UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_TriggerSubEmitterForParticle_Injected();
		Register_UnityEngine_ParticleSystem_TriggerSubEmitterForParticle_Injected();

		//System.Void UnityEngine.ParticleSystem::set_randomSeed(System.UInt32)
		void Register_UnityEngine_ParticleSystem_set_randomSeed();
		Register_UnityEngine_ParticleSystem_set_randomSeed();

		//System.Void UnityEngine.ParticleSystem::set_time(System.Single)
		void Register_UnityEngine_ParticleSystem_set_time();
		Register_UnityEngine_ParticleSystem_set_time();

		//System.Void UnityEngine.ParticleSystem::set_useAutoRandomSeed(System.Boolean)
		void Register_UnityEngine_ParticleSystem_set_useAutoRandomSeed();
		Register_UnityEngine_ParticleSystem_set_useAutoRandomSeed();

		//System.Void* UnityEngine.ParticleSystem::GetManagedJobData()
		void Register_UnityEngine_ParticleSystem_GetManagedJobData();
		Register_UnityEngine_ParticleSystem_GetManagedJobData();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystem/EmissionModule

		//System.Boolean UnityEngine.ParticleSystem/EmissionModule::get_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&)
		void Register_UnityEngine_ParticleSystem_EmissionModule_get_enabled_Injected();
		Register_UnityEngine_ParticleSystem_EmissionModule_get_enabled_Injected();

		//System.Single UnityEngine.ParticleSystem/EmissionModule::get_rateOverTimeMultiplier_Injected(UnityEngine.ParticleSystem/EmissionModule&)
		void Register_UnityEngine_ParticleSystem_EmissionModule_get_rateOverTimeMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_EmissionModule_get_rateOverTimeMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled_Injected(UnityEngine.ParticleSystem/EmissionModule&,System.Boolean)
		void Register_UnityEngine_ParticleSystem_EmissionModule_set_enabled_Injected();
		Register_UnityEngine_ParticleSystem_EmissionModule_set_enabled_Injected();

		//System.Void UnityEngine.ParticleSystem/EmissionModule::set_rateOverTime_Injected(UnityEngine.ParticleSystem/EmissionModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_EmissionModule_set_rateOverTime_Injected();
		Register_UnityEngine_ParticleSystem_EmissionModule_set_rateOverTime_Injected();

	//End Registrations for type : UnityEngine.ParticleSystem/EmissionModule

	//Start Registrations for type : UnityEngine.ParticleSystem/MainModule

		//System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_loop_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_loop_Injected();

		//System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_playOnAwake_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_playOnAwake_Injected();

		//System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_maxParticles_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_maxParticles_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_duration_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_duration_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_duration_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_gravityModifierMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_gravityModifierMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_gravityModifierMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_simulationSpeed_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_simulationSpeed_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_simulationSpeed_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startDelayMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startDelayMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startDelayMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startLifetimeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startLifetimeMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startLifetimeMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startRotationMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startRotationMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startRotationMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startRotationXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startRotationXMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startRotationXMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startRotationYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startRotationYMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startRotationYMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startRotationZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startRotationZMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startRotationZMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startSizeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startSizeMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startSizeMultiplier_Injected();

		//System.Single UnityEngine.ParticleSystem/MainModule::get_startSpeedMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startSpeedMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startSpeedMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_gravityModifierMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_gravityModifierMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_gravityModifierMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_loop_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
		void Register_UnityEngine_ParticleSystem_MainModule_set_loop_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_loop_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles_Injected(UnityEngine.ParticleSystem/MainModule&,System.Int32)
		void Register_UnityEngine_ParticleSystem_MainModule_set_maxParticles_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_maxParticles_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_playOnAwake_Injected(UnityEngine.ParticleSystem/MainModule&,System.Boolean)
		void Register_UnityEngine_ParticleSystem_MainModule_set_playOnAwake_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_playOnAwake_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemScalingMode)
		void Register_UnityEngine_ParticleSystem_MainModule_set_scalingMode_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_scalingMode_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystemSimulationSpace)
		void Register_UnityEngine_ParticleSystem_MainModule_set_simulationSpace_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_simulationSpace_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_simulationSpeed_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_simulationSpeed_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_simulationSpeed_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startColor_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startColor_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startDelayMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startDelayMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startDelayMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startLifetimeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startRotationMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startRotationMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationXMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startRotationXMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startRotationXMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationYMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startRotationYMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startRotationYMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startRotationZMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startRotationZMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startRotationZMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startSizeMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startSizeMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startSizeMultiplier_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::set_startSpeedMultiplier_Injected(UnityEngine.ParticleSystem/MainModule&,System.Single)
		void Register_UnityEngine_ParticleSystem_MainModule_set_startSpeedMultiplier_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_set_startSpeedMultiplier_Injected();

		//UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_scalingMode_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_scalingMode_Injected();

		//UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace_Injected(UnityEngine.ParticleSystem/MainModule&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_simulationSpace_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_simulationSpace_Injected();

	//End Registrations for type : UnityEngine.ParticleSystem/MainModule

	//Start Registrations for type : UnityEngine.ParticleSystem/NoiseModule

		//System.Void UnityEngine.ParticleSystem/NoiseModule::set_strength_Injected(UnityEngine.ParticleSystem/NoiseModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_NoiseModule_set_strength_Injected();
		Register_UnityEngine_ParticleSystem_NoiseModule_set_strength_Injected();

	//End Registrations for type : UnityEngine.ParticleSystem/NoiseModule

	//Start Registrations for type : UnityEngine.ParticleSystemForceField

		//System.Void UnityEngine.ParticleSystemForceField::get_gravity_Injected(UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystemForceField_get_gravity_Injected();
		Register_UnityEngine_ParticleSystemForceField_get_gravity_Injected();

		//System.Void UnityEngine.ParticleSystemForceField::set_gravity_Injected(UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystemForceField_set_gravity_Injected();
		Register_UnityEngine_ParticleSystemForceField_set_gravity_Injected();

	//End Registrations for type : UnityEngine.ParticleSystemForceField

	//Start Registrations for type : UnityEngine.ParticleSystemRenderer

		//System.Boolean UnityEngine.ParticleSystemRenderer::get_allowRoll()
		void Register_UnityEngine_ParticleSystemRenderer_get_allowRoll();
		Register_UnityEngine_ParticleSystemRenderer_get_allowRoll();

		//System.Boolean UnityEngine.ParticleSystemRenderer::get_enableGPUInstancing()
		void Register_UnityEngine_ParticleSystemRenderer_get_enableGPUInstancing();
		Register_UnityEngine_ParticleSystemRenderer_get_enableGPUInstancing();

		//System.Boolean UnityEngine.ParticleSystemRenderer::get_freeformStretching()
		void Register_UnityEngine_ParticleSystemRenderer_get_freeformStretching();
		Register_UnityEngine_ParticleSystemRenderer_get_freeformStretching();

		//System.Boolean UnityEngine.ParticleSystemRenderer::get_rotateWithStretchDirection()
		void Register_UnityEngine_ParticleSystemRenderer_get_rotateWithStretchDirection();
		Register_UnityEngine_ParticleSystemRenderer_get_rotateWithStretchDirection();

		//System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
		void Register_UnityEngine_ParticleSystemRenderer_GetMeshes();
		Register_UnityEngine_ParticleSystemRenderer_GetMeshes();

		//System.Int32 UnityEngine.ParticleSystemRenderer::get_activeVertexStreamsCount()
		void Register_UnityEngine_ParticleSystemRenderer_get_activeVertexStreamsCount();
		Register_UnityEngine_ParticleSystemRenderer_get_activeVertexStreamsCount();

		//System.Int32 UnityEngine.ParticleSystemRenderer::get_meshCount()
		void Register_UnityEngine_ParticleSystemRenderer_get_meshCount();
		Register_UnityEngine_ParticleSystemRenderer_get_meshCount();

		//System.Single UnityEngine.ParticleSystemRenderer::get_cameraVelocityScale()
		void Register_UnityEngine_ParticleSystemRenderer_get_cameraVelocityScale();
		Register_UnityEngine_ParticleSystemRenderer_get_cameraVelocityScale();

		//System.Single UnityEngine.ParticleSystemRenderer::get_lengthScale()
		void Register_UnityEngine_ParticleSystemRenderer_get_lengthScale();
		Register_UnityEngine_ParticleSystemRenderer_get_lengthScale();

		//System.Single UnityEngine.ParticleSystemRenderer::get_maxParticleSize()
		void Register_UnityEngine_ParticleSystemRenderer_get_maxParticleSize();
		Register_UnityEngine_ParticleSystemRenderer_get_maxParticleSize();

		//System.Single UnityEngine.ParticleSystemRenderer::get_minParticleSize()
		void Register_UnityEngine_ParticleSystemRenderer_get_minParticleSize();
		Register_UnityEngine_ParticleSystemRenderer_get_minParticleSize();

		//System.Single UnityEngine.ParticleSystemRenderer::get_normalDirection()
		void Register_UnityEngine_ParticleSystemRenderer_get_normalDirection();
		Register_UnityEngine_ParticleSystemRenderer_get_normalDirection();

		//System.Single UnityEngine.ParticleSystemRenderer::get_shadowBias()
		void Register_UnityEngine_ParticleSystemRenderer_get_shadowBias();
		Register_UnityEngine_ParticleSystemRenderer_get_shadowBias();

		//System.Single UnityEngine.ParticleSystemRenderer::get_sortingFudge()
		void Register_UnityEngine_ParticleSystemRenderer_get_sortingFudge();
		Register_UnityEngine_ParticleSystemRenderer_get_sortingFudge();

		//System.Single UnityEngine.ParticleSystemRenderer::get_velocityScale()
		void Register_UnityEngine_ParticleSystemRenderer_get_velocityScale();
		Register_UnityEngine_ParticleSystemRenderer_get_velocityScale();

		//System.Void UnityEngine.ParticleSystemRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
		void Register_UnityEngine_ParticleSystemRenderer_BakeMesh();
		Register_UnityEngine_ParticleSystemRenderer_BakeMesh();

		//System.Void UnityEngine.ParticleSystemRenderer::BakeTrailsMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
		void Register_UnityEngine_ParticleSystemRenderer_BakeTrailsMesh();
		Register_UnityEngine_ParticleSystemRenderer_BakeTrailsMesh();

		//System.Void UnityEngine.ParticleSystemRenderer::GetActiveVertexStreams(System.Collections.Generic.List`1<UnityEngine.ParticleSystemVertexStream>)
		void Register_UnityEngine_ParticleSystemRenderer_GetActiveVertexStreams();
		Register_UnityEngine_ParticleSystemRenderer_GetActiveVertexStreams();

		//System.Void UnityEngine.ParticleSystemRenderer::SetActiveVertexStreams(System.Collections.Generic.List`1<UnityEngine.ParticleSystemVertexStream>)
		void Register_UnityEngine_ParticleSystemRenderer_SetActiveVertexStreams();
		Register_UnityEngine_ParticleSystemRenderer_SetActiveVertexStreams();

		//System.Void UnityEngine.ParticleSystemRenderer::SetMeshes(UnityEngine.Mesh[],System.Int32)
		void Register_UnityEngine_ParticleSystemRenderer_SetMeshes();
		Register_UnityEngine_ParticleSystemRenderer_SetMeshes();

		//System.Void UnityEngine.ParticleSystemRenderer::get_flip_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ParticleSystemRenderer_get_flip_Injected();
		Register_UnityEngine_ParticleSystemRenderer_get_flip_Injected();

		//System.Void UnityEngine.ParticleSystemRenderer::get_pivot_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ParticleSystemRenderer_get_pivot_Injected();
		Register_UnityEngine_ParticleSystemRenderer_get_pivot_Injected();

		//System.Void UnityEngine.ParticleSystemRenderer::set_alignment(UnityEngine.ParticleSystemRenderSpace)
		void Register_UnityEngine_ParticleSystemRenderer_set_alignment();
		Register_UnityEngine_ParticleSystemRenderer_set_alignment();

		//System.Void UnityEngine.ParticleSystemRenderer::set_allowRoll(System.Boolean)
		void Register_UnityEngine_ParticleSystemRenderer_set_allowRoll();
		Register_UnityEngine_ParticleSystemRenderer_set_allowRoll();

		//System.Void UnityEngine.ParticleSystemRenderer::set_cameraVelocityScale(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_cameraVelocityScale();
		Register_UnityEngine_ParticleSystemRenderer_set_cameraVelocityScale();

		//System.Void UnityEngine.ParticleSystemRenderer::set_enableGPUInstancing(System.Boolean)
		void Register_UnityEngine_ParticleSystemRenderer_set_enableGPUInstancing();
		Register_UnityEngine_ParticleSystemRenderer_set_enableGPUInstancing();

		//System.Void UnityEngine.ParticleSystemRenderer::set_flip_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ParticleSystemRenderer_set_flip_Injected();
		Register_UnityEngine_ParticleSystemRenderer_set_flip_Injected();

		//System.Void UnityEngine.ParticleSystemRenderer::set_freeformStretching(System.Boolean)
		void Register_UnityEngine_ParticleSystemRenderer_set_freeformStretching();
		Register_UnityEngine_ParticleSystemRenderer_set_freeformStretching();

		//System.Void UnityEngine.ParticleSystemRenderer::set_lengthScale(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_lengthScale();
		Register_UnityEngine_ParticleSystemRenderer_set_lengthScale();

		//System.Void UnityEngine.ParticleSystemRenderer::set_maskInteraction(UnityEngine.SpriteMaskInteraction)
		void Register_UnityEngine_ParticleSystemRenderer_set_maskInteraction();
		Register_UnityEngine_ParticleSystemRenderer_set_maskInteraction();

		//System.Void UnityEngine.ParticleSystemRenderer::set_maxParticleSize(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_maxParticleSize();
		Register_UnityEngine_ParticleSystemRenderer_set_maxParticleSize();

		//System.Void UnityEngine.ParticleSystemRenderer::set_mesh(UnityEngine.Mesh)
		void Register_UnityEngine_ParticleSystemRenderer_set_mesh();
		Register_UnityEngine_ParticleSystemRenderer_set_mesh();

		//System.Void UnityEngine.ParticleSystemRenderer::set_minParticleSize(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_minParticleSize();
		Register_UnityEngine_ParticleSystemRenderer_set_minParticleSize();

		//System.Void UnityEngine.ParticleSystemRenderer::set_normalDirection(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_normalDirection();
		Register_UnityEngine_ParticleSystemRenderer_set_normalDirection();

		//System.Void UnityEngine.ParticleSystemRenderer::set_pivot_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ParticleSystemRenderer_set_pivot_Injected();
		Register_UnityEngine_ParticleSystemRenderer_set_pivot_Injected();

		//System.Void UnityEngine.ParticleSystemRenderer::set_renderMode(UnityEngine.ParticleSystemRenderMode)
		void Register_UnityEngine_ParticleSystemRenderer_set_renderMode();
		Register_UnityEngine_ParticleSystemRenderer_set_renderMode();

		//System.Void UnityEngine.ParticleSystemRenderer::set_rotateWithStretchDirection(System.Boolean)
		void Register_UnityEngine_ParticleSystemRenderer_set_rotateWithStretchDirection();
		Register_UnityEngine_ParticleSystemRenderer_set_rotateWithStretchDirection();

		//System.Void UnityEngine.ParticleSystemRenderer::set_shadowBias(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_shadowBias();
		Register_UnityEngine_ParticleSystemRenderer_set_shadowBias();

		//System.Void UnityEngine.ParticleSystemRenderer::set_sortMode(UnityEngine.ParticleSystemSortMode)
		void Register_UnityEngine_ParticleSystemRenderer_set_sortMode();
		Register_UnityEngine_ParticleSystemRenderer_set_sortMode();

		//System.Void UnityEngine.ParticleSystemRenderer::set_sortingFudge(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_sortingFudge();
		Register_UnityEngine_ParticleSystemRenderer_set_sortingFudge();

		//System.Void UnityEngine.ParticleSystemRenderer::set_trailMaterial(UnityEngine.Material)
		void Register_UnityEngine_ParticleSystemRenderer_set_trailMaterial();
		Register_UnityEngine_ParticleSystemRenderer_set_trailMaterial();

		//System.Void UnityEngine.ParticleSystemRenderer::set_velocityScale(System.Single)
		void Register_UnityEngine_ParticleSystemRenderer_set_velocityScale();
		Register_UnityEngine_ParticleSystemRenderer_set_velocityScale();

		//UnityEngine.Material UnityEngine.ParticleSystemRenderer::get_trailMaterial()
		void Register_UnityEngine_ParticleSystemRenderer_get_trailMaterial();
		Register_UnityEngine_ParticleSystemRenderer_get_trailMaterial();

		//UnityEngine.Mesh UnityEngine.ParticleSystemRenderer::get_mesh()
		void Register_UnityEngine_ParticleSystemRenderer_get_mesh();
		Register_UnityEngine_ParticleSystemRenderer_get_mesh();

		//UnityEngine.ParticleSystemRenderMode UnityEngine.ParticleSystemRenderer::get_renderMode()
		void Register_UnityEngine_ParticleSystemRenderer_get_renderMode();
		Register_UnityEngine_ParticleSystemRenderer_get_renderMode();

		//UnityEngine.ParticleSystemRenderSpace UnityEngine.ParticleSystemRenderer::get_alignment()
		void Register_UnityEngine_ParticleSystemRenderer_get_alignment();
		Register_UnityEngine_ParticleSystemRenderer_get_alignment();

		//UnityEngine.ParticleSystemSortMode UnityEngine.ParticleSystemRenderer::get_sortMode()
		void Register_UnityEngine_ParticleSystemRenderer_get_sortMode();
		Register_UnityEngine_ParticleSystemRenderer_get_sortMode();

		//UnityEngine.SpriteMaskInteraction UnityEngine.ParticleSystemRenderer::get_maskInteraction()
		void Register_UnityEngine_ParticleSystemRenderer_get_maskInteraction();
		Register_UnityEngine_ParticleSystemRenderer_get_maskInteraction();

	//End Registrations for type : UnityEngine.ParticleSystemRenderer

	//Start Registrations for type : UnityEngine.Physics

		//System.Void UnityEngine.Physics::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene&)
		void Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();

		//System.Void UnityEngine.Physics::get_gravity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Physics_get_gravity_Injected();
		Register_UnityEngine_Physics_get_gravity_Injected();

		//UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere_Internal_Injected(UnityEngine.PhysicsScene&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_OverlapSphere_Internal_Injected();
		Register_UnityEngine_Physics_OverlapSphere_Internal_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Query_SphereCastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Query_SphereCastAll_Injected();
		Register_UnityEngine_Physics_Query_SphereCastAll_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.Physics2D

		//System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
		void Register_UnityEngine_Physics2D_get_queriesHitTriggers();
		Register_UnityEngine_Physics2D_get_queriesHitTriggers();

		//System.Void UnityEngine.Physics2D::set_gravity_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Physics2D_set_gravity_Injected();
		Register_UnityEngine_Physics2D_set_gravity_Injected();

		//UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&)
		void Register_UnityEngine_Physics2D_OverlapCircleAll_Internal_Injected();
		Register_UnityEngine_Physics2D_OverlapCircleAll_Internal_Injected();

		//UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
		void Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();

	//End Registrations for type : UnityEngine.Physics2D

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_RaycastTest_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PhysicsScene2D

		//System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>)
		void Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();

		//System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
		void Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene2D

	//Start Registrations for type : UnityEngine.Playables.PlayableHandle

		//System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();

		//System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableHandle

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Boolean UnityEngine.PlayerConnectionInternal::TrySendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();
		Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.PlayerPrefs

		//System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
		void Register_UnityEngine_PlayerPrefs_TrySetFloat();
		Register_UnityEngine_PlayerPrefs_TrySetFloat();

		//System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
		void Register_UnityEngine_PlayerPrefs_TrySetInt();
		Register_UnityEngine_PlayerPrefs_TrySetInt();

		//System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
		void Register_UnityEngine_PlayerPrefs_TrySetSetString();
		Register_UnityEngine_PlayerPrefs_TrySetSetString();

		//System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
		void Register_UnityEngine_PlayerPrefs_GetInt();
		Register_UnityEngine_PlayerPrefs_GetInt();

		//System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
		void Register_UnityEngine_PlayerPrefs_GetFloat();
		Register_UnityEngine_PlayerPrefs_GetFloat();

		//System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
		void Register_UnityEngine_PlayerPrefs_GetString();
		Register_UnityEngine_PlayerPrefs_GetString();

	//End Registrations for type : UnityEngine.PlayerPrefs

	//Start Registrations for type : UnityEngine.Profiling.CustomSampler

		//System.IntPtr UnityEngine.Profiling.CustomSampler::CreateInternal(System.String,System.Boolean)
		void Register_UnityEngine_Profiling_CustomSampler_CreateInternal();
		Register_UnityEngine_Profiling_CustomSampler_CreateInternal();

	//End Registrations for type : UnityEngine.Profiling.CustomSampler

	//Start Registrations for type : UnityEngine.Profiling.Profiler

		//System.Int64 UnityEngine.Profiling.Profiler::GetMonoUsedSizeLong()
		void Register_UnityEngine_Profiling_Profiler_GetMonoUsedSizeLong();
		Register_UnityEngine_Profiling_Profiler_GetMonoUsedSizeLong();

		//System.Int64 UnityEngine.Profiling.Profiler::GetRuntimeMemorySizeLong(UnityEngine.Object)
		void Register_UnityEngine_Profiling_Profiler_GetRuntimeMemorySizeLong();
		Register_UnityEngine_Profiling_Profiler_GetRuntimeMemorySizeLong();

		//System.Void UnityEngine.Profiling.Profiler::BeginSampleImpl(System.String,UnityEngine.Object)
		void Register_UnityEngine_Profiling_Profiler_BeginSampleImpl();
		Register_UnityEngine_Profiling_Profiler_BeginSampleImpl();

		//System.Void UnityEngine.Profiling.Profiler::EndSample()
		void Register_UnityEngine_Profiling_Profiler_EndSample();
		Register_UnityEngine_Profiling_Profiler_EndSample();

	//End Registrations for type : UnityEngine.Profiling.Profiler

	//Start Registrations for type : UnityEngine.Profiling.Recorder

		//System.Boolean UnityEngine.Profiling.Recorder::IsEnabled()
		void Register_UnityEngine_Profiling_Recorder_IsEnabled();
		Register_UnityEngine_Profiling_Recorder_IsEnabled();

		//System.Int32 UnityEngine.Profiling.Recorder::GetGpuSampleBlockCount()
		void Register_UnityEngine_Profiling_Recorder_GetGpuSampleBlockCount();
		Register_UnityEngine_Profiling_Recorder_GetGpuSampleBlockCount();

		//System.Int32 UnityEngine.Profiling.Recorder::GetSampleBlockCount()
		void Register_UnityEngine_Profiling_Recorder_GetSampleBlockCount();
		Register_UnityEngine_Profiling_Recorder_GetSampleBlockCount();

		//System.Int64 UnityEngine.Profiling.Recorder::GetElapsedNanoseconds()
		void Register_UnityEngine_Profiling_Recorder_GetElapsedNanoseconds();
		Register_UnityEngine_Profiling_Recorder_GetElapsedNanoseconds();

		//System.Int64 UnityEngine.Profiling.Recorder::GetGpuElapsedNanoseconds()
		void Register_UnityEngine_Profiling_Recorder_GetGpuElapsedNanoseconds();
		Register_UnityEngine_Profiling_Recorder_GetGpuElapsedNanoseconds();

		//System.Void UnityEngine.Profiling.Recorder::DisposeNative(System.IntPtr)
		void Register_UnityEngine_Profiling_Recorder_DisposeNative();
		Register_UnityEngine_Profiling_Recorder_DisposeNative();

		//System.Void UnityEngine.Profiling.Recorder::SetEnabled(System.Boolean)
		void Register_UnityEngine_Profiling_Recorder_SetEnabled();
		Register_UnityEngine_Profiling_Recorder_SetEnabled();

	//End Registrations for type : UnityEngine.Profiling.Recorder

	//Start Registrations for type : UnityEngine.Profiling.Sampler

		//System.IntPtr UnityEngine.Profiling.Sampler::GetRecorderInternal(System.IntPtr)
		void Register_UnityEngine_Profiling_Sampler_GetRecorderInternal();
		Register_UnityEngine_Profiling_Sampler_GetRecorderInternal();

	//End Registrations for type : UnityEngine.Profiling.Sampler

	//Start Registrations for type : UnityEngine.QualitySettings

		//System.Int32 UnityEngine.QualitySettings::GetQualityLevel()
		void Register_UnityEngine_QualitySettings_GetQualityLevel();
		Register_UnityEngine_QualitySettings_GetQualityLevel();

		//System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
		void Register_UnityEngine_QualitySettings_get_antiAliasing();
		Register_UnityEngine_QualitySettings_get_antiAliasing();

		//System.Int32 UnityEngine.QualitySettings::get_masterTextureLimit()
		void Register_UnityEngine_QualitySettings_get_masterTextureLimit();
		Register_UnityEngine_QualitySettings_get_masterTextureLimit();

		//System.Int32 UnityEngine.QualitySettings::get_pixelLightCount()
		void Register_UnityEngine_QualitySettings_get_pixelLightCount();
		Register_UnityEngine_QualitySettings_get_pixelLightCount();

		//System.String[] UnityEngine.QualitySettings::get_names()
		void Register_UnityEngine_QualitySettings_get_names();
		Register_UnityEngine_QualitySettings_get_names();

		//System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
		void Register_UnityEngine_QualitySettings_SetQualityLevel();
		Register_UnityEngine_QualitySettings_SetQualityLevel();

		//System.Void UnityEngine.QualitySettings::set_antiAliasing(System.Int32)
		void Register_UnityEngine_QualitySettings_set_antiAliasing();
		Register_UnityEngine_QualitySettings_set_antiAliasing();

		//System.Void UnityEngine.QualitySettings::set_masterTextureLimit(System.Int32)
		void Register_UnityEngine_QualitySettings_set_masterTextureLimit();
		Register_UnityEngine_QualitySettings_set_masterTextureLimit();

		//System.Void UnityEngine.QualitySettings::set_pixelLightCount(System.Int32)
		void Register_UnityEngine_QualitySettings_set_pixelLightCount();
		Register_UnityEngine_QualitySettings_set_pixelLightCount();

		//System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
		void Register_UnityEngine_QualitySettings_set_vSyncCount();
		Register_UnityEngine_QualitySettings_set_vSyncCount();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_desiredColorSpace()
		void Register_UnityEngine_QualitySettings_get_desiredColorSpace();
		Register_UnityEngine_QualitySettings_get_desiredColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::AngleAxis_Injected(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_AngleAxis_Injected();
		Register_UnityEngine_Quaternion_AngleAxis_Injected();

		//System.Void UnityEngine.Quaternion::FromToRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_FromToRotation_Injected();
		Register_UnityEngine_Quaternion_FromToRotation_Injected();

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Internal_ToEulerRad_Injected(UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

		//System.Void UnityEngine.Quaternion::Lerp_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Lerp_Injected();
		Register_UnityEngine_Quaternion_Lerp_Injected();

		//System.Void UnityEngine.Quaternion::LookRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_LookRotation_Injected();
		Register_UnityEngine_Quaternion_LookRotation_Injected();

		//System.Void UnityEngine.Quaternion::SlerpUnclamped_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_SlerpUnclamped_Injected();
		Register_UnityEngine_Quaternion_SlerpUnclamped_Injected();

		//System.Void UnityEngine.Quaternion::Slerp_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Slerp_Injected();
		Register_UnityEngine_Quaternion_Slerp_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.Random

		//System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
		void Register_UnityEngine_Random_RandomRangeInt();
		Register_UnityEngine_Random_RandomRangeInt();

		//System.Single UnityEngine.Random::Range(System.Single,System.Single)
		void Register_UnityEngine_Random_Range();
		Register_UnityEngine_Random_Range();

		//System.Single UnityEngine.Random::get_value()
		void Register_UnityEngine_Random_get_value();
		Register_UnityEngine_Random_get_value();

		//System.Void UnityEngine.Random::get_onUnitSphere_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Random_get_onUnitSphere_Injected();
		Register_UnityEngine_Random_get_onUnitSphere_Injected();

	//End Registrations for type : UnityEngine.Random

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom()
		void Register_UnityEngine_RectOffset_get_bottom();
		Register_UnityEngine_RectOffset_get_bottom();

		//System.Int32 UnityEngine.RectOffset::get_horizontal()
		void Register_UnityEngine_RectOffset_get_horizontal();
		Register_UnityEngine_RectOffset_get_horizontal();

		//System.Int32 UnityEngine.RectOffset::get_left()
		void Register_UnityEngine_RectOffset_get_left();
		Register_UnityEngine_RectOffset_get_left();

		//System.Int32 UnityEngine.RectOffset::get_right()
		void Register_UnityEngine_RectOffset_get_right();
		Register_UnityEngine_RectOffset_get_right();

		//System.Int32 UnityEngine.RectOffset::get_top()
		void Register_UnityEngine_RectOffset_get_top();
		Register_UnityEngine_RectOffset_get_top();

		//System.Int32 UnityEngine.RectOffset::get_vertical()
		void Register_UnityEngine_RectOffset_get_vertical();
		Register_UnityEngine_RectOffset_get_vertical();

		//System.IntPtr UnityEngine.RectOffset::InternalCreate()
		void Register_UnityEngine_RectOffset_InternalCreate();
		Register_UnityEngine_RectOffset_InternalCreate();

		//System.Void UnityEngine.RectOffset::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_RectOffset_InternalDestroy();
		Register_UnityEngine_RectOffset_InternalDestroy();

		//System.Void UnityEngine.RectOffset::Remove_Injected(UnityEngine.Rect&,UnityEngine.Rect&)
		void Register_UnityEngine_RectOffset_Remove_Injected();
		Register_UnityEngine_RectOffset_Remove_Injected();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.RectTransform

		//System.Void UnityEngine.RectTransform::ForceUpdateRectTransforms()
		void Register_UnityEngine_RectTransform_ForceUpdateRectTransforms();
		Register_UnityEngine_RectTransform_ForceUpdateRectTransforms();

		//System.Void UnityEngine.RectTransform::get_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMax_Injected();
		Register_UnityEngine_RectTransform_get_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::get_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchorMin_Injected();
		Register_UnityEngine_RectTransform_get_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::get_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_get_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_pivot_Injected();
		Register_UnityEngine_RectTransform_get_pivot_Injected();

		//System.Void UnityEngine.RectTransform::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_RectTransform_get_rect_Injected();
		Register_UnityEngine_RectTransform_get_rect_Injected();

		//System.Void UnityEngine.RectTransform::get_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_get_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_get_sizeDelta_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMax_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMax_Injected();
		Register_UnityEngine_RectTransform_set_anchorMax_Injected();

		//System.Void UnityEngine.RectTransform::set_anchorMin_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchorMin_Injected();
		Register_UnityEngine_RectTransform_set_anchorMin_Injected();

		//System.Void UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();
		Register_UnityEngine_RectTransform_set_anchoredPosition_Injected();

		//System.Void UnityEngine.RectTransform::set_drivenByObject(UnityEngine.Object)
		void Register_UnityEngine_RectTransform_set_drivenByObject();
		Register_UnityEngine_RectTransform_set_drivenByObject();

		//System.Void UnityEngine.RectTransform::set_drivenProperties(UnityEngine.DrivenTransformProperties)
		void Register_UnityEngine_RectTransform_set_drivenProperties();
		Register_UnityEngine_RectTransform_set_drivenProperties();

		//System.Void UnityEngine.RectTransform::set_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_pivot_Injected();
		Register_UnityEngine_RectTransform_set_pivot_Injected();

		//System.Void UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_set_sizeDelta_Injected();
		Register_UnityEngine_RectTransform_set_sizeDelta_Injected();

		//UnityEngine.DrivenTransformProperties UnityEngine.RectTransform::get_drivenProperties()
		void Register_UnityEngine_RectTransform_get_drivenProperties();
		Register_UnityEngine_RectTransform_get_drivenProperties();

		//UnityEngine.Object UnityEngine.RectTransform::get_drivenByObject()
		void Register_UnityEngine_RectTransform_get_drivenByObject();
		Register_UnityEngine_RectTransform_get_drivenByObject();

	//End Registrations for type : UnityEngine.RectTransform

	//Start Registrations for type : UnityEngine.RectTransformUtility

		//System.Boolean UnityEngine.RectTransformUtility::PointInRectangle_Injected(UnityEngine.Vector2&,UnityEngine.RectTransform,UnityEngine.Camera,UnityEngine.Vector4&)
		void Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();
		Register_UnityEngine_RectTransformUtility_PointInRectangle_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint_Injected(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustPoint_Injected();

		//System.Void UnityEngine.RectTransformUtility::PixelAdjustRect_Injected(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
		void Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();
		Register_UnityEngine_RectTransformUtility_PixelAdjustRect_Injected();

	//End Registrations for type : UnityEngine.RectTransformUtility

	//Start Registrations for type : UnityEngine.Renderer

		//System.Boolean UnityEngine.Renderer::get_enabled()
		void Register_UnityEngine_Renderer_get_enabled();
		Register_UnityEngine_Renderer_get_enabled();

		//System.Int32 UnityEngine.Renderer::get_sortingLayerID()
		void Register_UnityEngine_Renderer_get_sortingLayerID();
		Register_UnityEngine_Renderer_get_sortingLayerID();

		//System.Int32 UnityEngine.Renderer::get_sortingOrder()
		void Register_UnityEngine_Renderer_get_sortingOrder();
		Register_UnityEngine_Renderer_get_sortingOrder();

		//System.Void UnityEngine.Renderer::SetMaterial(UnityEngine.Material)
		void Register_UnityEngine_Renderer_SetMaterial();
		Register_UnityEngine_Renderer_SetMaterial();

		//System.Void UnityEngine.Renderer::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Renderer_get_bounds_Injected();
		Register_UnityEngine_Renderer_get_bounds_Injected();

		//System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
		void Register_UnityEngine_Renderer_set_enabled();
		Register_UnityEngine_Renderer_set_enabled();

		//System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
		void Register_UnityEngine_Renderer_set_receiveShadows();
		Register_UnityEngine_Renderer_set_receiveShadows();

		//System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
		void Register_UnityEngine_Renderer_set_shadowCastingMode();
		Register_UnityEngine_Renderer_set_shadowCastingMode();

		//System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Renderer_set_sortingLayerID();
		Register_UnityEngine_Renderer_set_sortingLayerID();

		//System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Renderer_set_sortingOrder();
		Register_UnityEngine_Renderer_set_sortingOrder();

		//UnityEngine.Material UnityEngine.Renderer::GetMaterial()
		void Register_UnityEngine_Renderer_GetMaterial();
		Register_UnityEngine_Renderer_GetMaterial();

		//UnityEngine.Material UnityEngine.Renderer::GetSharedMaterial()
		void Register_UnityEngine_Renderer_GetSharedMaterial();
		Register_UnityEngine_Renderer_GetSharedMaterial();

		//UnityEngine.Material[] UnityEngine.Renderer::GetMaterialArray()
		void Register_UnityEngine_Renderer_GetMaterialArray();
		Register_UnityEngine_Renderer_GetMaterialArray();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.Boolean UnityEngine.Rendering.CommandBuffer::ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags,UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::CreateGPUFence_Internal(UnityEngine.Rendering.GraphicsFenceType,UnityEngine.Rendering.SynchronisationStageFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_CreateGPUFence_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_CreateGPUFence_Internal();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::InitBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::BeginSample(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_BeginSample();
		Register_UnityEngine_Rendering_CommandBuffer_BeginSample();

		//System.Void UnityEngine.Rendering.CommandBuffer::BeginSample_CustomSampler(UnityEngine.Profiling.CustomSampler)
		void Register_UnityEngine_Rendering_CommandBuffer_BeginSample_CustomSampler();
		Register_UnityEngine_Rendering_CommandBuffer_BeginSample_CustomSampler();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Identifier_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Identifier_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Identifier_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Clear()
		void Register_UnityEngine_Rendering_CommandBuffer_Clear();
		Register_UnityEngine_Rendering_CommandBuffer_Clear();

		//System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::CopyTexture_Internal(UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_CopyTexture_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_CopyTexture_Internal();

		//System.Void UnityEngine.Rendering.CommandBuffer::DisableShaderKeyword(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_DisableShaderKeyword();
		Register_UnityEngine_Rendering_CommandBuffer_DisableShaderKeyword();

		//System.Void UnityEngine.Rendering.CommandBuffer::EnableShaderKeyword(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_EnableShaderKeyword();
		Register_UnityEngine_Rendering_CommandBuffer_EnableShaderKeyword();

		//System.Void UnityEngine.Rendering.CommandBuffer::EndSample(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_EndSample();
		Register_UnityEngine_Rendering_CommandBuffer_EndSample();

		//System.Void UnityEngine.Rendering.CommandBuffer::EndSample_CustomSampler(UnityEngine.Profiling.CustomSampler)
		void Register_UnityEngine_Rendering_CommandBuffer_EndSample_CustomSampler();
		Register_UnityEngine_Rendering_CommandBuffer_EndSample_CustomSampler();

		//System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.Experimental.Rendering.GraphicsFormat,System.Int32,System.Boolean,UnityEngine.RenderTextureMemoryless,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRTWithDescriptor_Injected(System.Int32,UnityEngine.RenderTextureDescriptor&,UnityEngine.FilterMode)
		void Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRTWithDescriptor_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRTWithDescriptor_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::InternalSetComputeBufferData(UnityEngine.ComputeBuffer,System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_InternalSetComputeBufferData();
		Register_UnityEngine_Rendering_CommandBuffer_InternalSetComputeBufferData();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DispatchCompute(UnityEngine.ComputeShader,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DispatchCompute();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DispatchCompute();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawMesh_Injected(UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawMesh_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawOcclusionMesh_Injected(UnityEngine.RectInt&)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawOcclusionMesh_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawOcclusionMesh_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawProcedural_Injected(UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,UnityEngine.MeshTopology,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawProcedural_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawProcedural_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawRenderer();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_DrawRenderer();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeBufferParam(UnityEngine.ComputeShader,System.Int32,System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeBufferParam();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeBufferParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeConstantComputeBufferParam(UnityEngine.ComputeShader,System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeConstantComputeBufferParam();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeConstantComputeBufferParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeFloats(UnityEngine.ComputeShader,System.Int32,System.Single[])
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeFloats();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeFloats();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetComputeTextureParam(UnityEngine.ComputeShader,System.Int32,System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,System.Int32,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeTextureParam();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetComputeTextureParam();

		//System.Void UnityEngine.Rendering.CommandBuffer::Internal_SetSinglePassStereo(UnityEngine.Rendering.SinglePassStereoMode)
		void Register_UnityEngine_Rendering_CommandBuffer_Internal_SetSinglePassStereo();
		Register_UnityEngine_Rendering_CommandBuffer_Internal_SetSinglePassStereo();

		//System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventInternal(System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();
		Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetComputeVectorParam_Injected(UnityEngine.ComputeShader,System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetComputeVectorParam_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetComputeVectorParam_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_SetExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_SetExecutionFlags();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalColor_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalColor_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalColor_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalConstantBufferInternal(UnityEngine.ComputeBuffer,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalConstantBufferInternal();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalConstantBufferInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalMatrixArray(System.Int32,UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrixArray();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrixArray();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalMatrix_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrix_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalMatrix_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture_Impl(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVectorArray(System.Int32,UnityEngine.Vector4[])
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVectorArray();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVectorArray();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVector_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalVector_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetInstanceMultiplier(System.UInt32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetInstanceMultiplier();
		Register_UnityEngine_Rendering_CommandBuffer_SetInstanceMultiplier();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetInvertCulling(System.Boolean)
		void Register_UnityEngine_Rendering_CommandBuffer_SetInvertCulling();
		Register_UnityEngine_Rendering_CommandBuffer_SetInvertCulling();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetColorDepth_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderTargetFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetColorDepth_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetColorDepth_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetMultiSubtarget_Injected(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction[],UnityEngine.Rendering.RenderBufferStoreAction[],UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,System.Int32,UnityEngine.CubemapFace,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMultiSubtarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMultiSubtarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetMulti_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction[],UnityEngine.Rendering.RenderBufferStoreAction[],UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderTargetFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMulti_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetMulti_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTargetSingle_Internal_Injected(UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetSingle_Internal_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTargetSingle_Internal_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetViewProjectionMatrices_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetViewProjectionMatrices_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetViewProjectionMatrices_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetViewport_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetViewport_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_SetViewport_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::WaitOnGPUFence_Internal(System.IntPtr,UnityEngine.Rendering.SynchronisationStageFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_WaitOnGPUFence_Internal();
		Register_UnityEngine_Rendering_CommandBuffer_WaitOnGPUFence_Internal();

		//System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_set_name();
		Register_UnityEngine_Rendering_CommandBuffer_set_name();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.Rendering.CommandBufferExtensions

		//System.Void UnityEngine.Rendering.CommandBufferExtensions::Internal_SwitchIntoFastMemory(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.FastMemoryFlags,System.Single,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchIntoFastMemory();
		Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchIntoFastMemory();

		//System.Void UnityEngine.Rendering.CommandBufferExtensions::Internal_SwitchOutOfFastMemory(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier&,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchOutOfFastMemory();
		Register_UnityEngine_Rendering_CommandBufferExtensions_Internal_SwitchOutOfFastMemory();

	//End Registrations for type : UnityEngine.Rendering.CommandBufferExtensions

	//Start Registrations for type : UnityEngine.Rendering.GraphicsFence

		//System.Int32 UnityEngine.Rendering.GraphicsFence::GetVersionNumber(System.IntPtr)
		void Register_UnityEngine_Rendering_GraphicsFence_GetVersionNumber();
		Register_UnityEngine_Rendering_GraphicsFence_GetVersionNumber();

	//End Registrations for type : UnityEngine.Rendering.GraphicsFence

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();

		//System.Void UnityEngine.Rendering.GraphicsSettings::set_INTERNAL_defaultRenderPipeline(UnityEngine.ScriptableObject)
		void Register_UnityEngine_Rendering_GraphicsSettings_set_INTERNAL_defaultRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_set_INTERNAL_defaultRenderPipeline();

		//System.Void UnityEngine.Rendering.GraphicsSettings::set_lightsUseLinearIntensity(System.Boolean)
		void Register_UnityEngine_Rendering_GraphicsSettings_set_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_set_lightsUseLinearIntensity();

		//System.Void UnityEngine.Rendering.GraphicsSettings::set_useScriptableRenderPipelineBatching(System.Boolean)
		void Register_UnityEngine_Rendering_GraphicsSettings_set_useScriptableRenderPipelineBatching();
		Register_UnityEngine_Rendering_GraphicsSettings_set_useScriptableRenderPipelineBatching();

		//UnityEngine.Rendering.BuiltinShaderMode UnityEngine.Rendering.GraphicsSettings::GetShaderMode(UnityEngine.Rendering.BuiltinShaderType)
		void Register_UnityEngine_Rendering_GraphicsSettings_GetShaderMode();
		Register_UnityEngine_Rendering_GraphicsSettings_GetShaderMode();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_currentRenderPipeline()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_currentRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_currentRenderPipeline();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_defaultRenderPipeline()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_defaultRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_defaultRenderPipeline();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

		//System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetNumberOfCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetNumberOfCameras_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetNumberOfCameras_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::DrawRenderers_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr,UnityEngine.Rendering.DrawingSettings&,UnityEngine.Rendering.FilteringSettings&,UnityEngine.Rendering.ShaderTagId&,System.Boolean,System.IntPtr,System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_DrawRenderers_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_DrawRenderers_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBufferAsync_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ComputeQueueType)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBufferAsync_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_ExecuteCommandBuffer_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::InitializeSortSettings(UnityEngine.Camera,UnityEngine.Rendering.SortingSettings&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_InitializeSortSettings();
		Register_UnityEngine_Rendering_ScriptableRenderContext_InitializeSortSettings();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::Internal_Cull_Injected(UnityEngine.Rendering.ScriptableCullingParameters&,UnityEngine.Rendering.ScriptableRenderContext&,System.IntPtr)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_Internal_Cull_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_Internal_Cull_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::SetupCameraProperties_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,UnityEngine.Camera,System.Boolean,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_SetupCameraProperties_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_SetupCameraProperties_Internal_Injected();

		//System.Void UnityEngine.Rendering.ScriptableRenderContext::Submit_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_Submit_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_Submit_Internal_Injected();

		//UnityEngine.Camera UnityEngine.Rendering.ScriptableRenderContext::GetCamera_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetCamera_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetCamera_Internal_Injected();

	//End Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

	//Start Registrations for type : UnityEngine.Rendering.ShaderKeyword

		//System.Int32 UnityEngine.Rendering.ShaderKeyword::GetGlobalKeywordIndex(System.String)
		void Register_UnityEngine_Rendering_ShaderKeyword_GetGlobalKeywordIndex();
		Register_UnityEngine_Rendering_ShaderKeyword_GetGlobalKeywordIndex();

	//End Registrations for type : UnityEngine.Rendering.ShaderKeyword

	//Start Registrations for type : UnityEngine.RenderSettings

		//System.Boolean UnityEngine.RenderSettings::get_fog()
		void Register_UnityEngine_RenderSettings_get_fog();
		Register_UnityEngine_RenderSettings_get_fog();

		//System.Int32 UnityEngine.RenderSettings::get_defaultReflectionResolution()
		void Register_UnityEngine_RenderSettings_get_defaultReflectionResolution();
		Register_UnityEngine_RenderSettings_get_defaultReflectionResolution();

		//System.Int32 UnityEngine.RenderSettings::get_reflectionBounces()
		void Register_UnityEngine_RenderSettings_get_reflectionBounces();
		Register_UnityEngine_RenderSettings_get_reflectionBounces();

		//System.Single UnityEngine.RenderSettings::get_ambientIntensity()
		void Register_UnityEngine_RenderSettings_get_ambientIntensity();
		Register_UnityEngine_RenderSettings_get_ambientIntensity();

		//System.Single UnityEngine.RenderSettings::get_flareFadeSpeed()
		void Register_UnityEngine_RenderSettings_get_flareFadeSpeed();
		Register_UnityEngine_RenderSettings_get_flareFadeSpeed();

		//System.Single UnityEngine.RenderSettings::get_flareStrength()
		void Register_UnityEngine_RenderSettings_get_flareStrength();
		Register_UnityEngine_RenderSettings_get_flareStrength();

		//System.Single UnityEngine.RenderSettings::get_fogDensity()
		void Register_UnityEngine_RenderSettings_get_fogDensity();
		Register_UnityEngine_RenderSettings_get_fogDensity();

		//System.Single UnityEngine.RenderSettings::get_fogEndDistance()
		void Register_UnityEngine_RenderSettings_get_fogEndDistance();
		Register_UnityEngine_RenderSettings_get_fogEndDistance();

		//System.Single UnityEngine.RenderSettings::get_fogStartDistance()
		void Register_UnityEngine_RenderSettings_get_fogStartDistance();
		Register_UnityEngine_RenderSettings_get_fogStartDistance();

		//System.Single UnityEngine.RenderSettings::get_haloStrength()
		void Register_UnityEngine_RenderSettings_get_haloStrength();
		Register_UnityEngine_RenderSettings_get_haloStrength();

		//System.Single UnityEngine.RenderSettings::get_reflectionIntensity()
		void Register_UnityEngine_RenderSettings_get_reflectionIntensity();
		Register_UnityEngine_RenderSettings_get_reflectionIntensity();

		//System.Void UnityEngine.RenderSettings::Reset()
		void Register_UnityEngine_RenderSettings_Reset();
		Register_UnityEngine_RenderSettings_Reset();

		//System.Void UnityEngine.RenderSettings::get_ambientEquatorColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientEquatorColor_Injected();
		Register_UnityEngine_RenderSettings_get_ambientEquatorColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientGroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientGroundColor_Injected();
		Register_UnityEngine_RenderSettings_get_ambientGroundColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientLight_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientLight_Injected();
		Register_UnityEngine_RenderSettings_get_ambientLight_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientProbe_Injected(UnityEngine.Rendering.SphericalHarmonicsL2&)
		void Register_UnityEngine_RenderSettings_get_ambientProbe_Injected();
		Register_UnityEngine_RenderSettings_get_ambientProbe_Injected();

		//System.Void UnityEngine.RenderSettings::get_ambientSkyColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_ambientSkyColor_Injected();
		Register_UnityEngine_RenderSettings_get_ambientSkyColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_fogColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_fogColor_Injected();
		Register_UnityEngine_RenderSettings_get_fogColor_Injected();

		//System.Void UnityEngine.RenderSettings::get_subtractiveShadowColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_subtractiveShadowColor_Injected();
		Register_UnityEngine_RenderSettings_get_subtractiveShadowColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_ambientEquatorColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_set_ambientEquatorColor_Injected();
		Register_UnityEngine_RenderSettings_set_ambientEquatorColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_ambientGroundColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_set_ambientGroundColor_Injected();
		Register_UnityEngine_RenderSettings_set_ambientGroundColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_ambientIntensity(System.Single)
		void Register_UnityEngine_RenderSettings_set_ambientIntensity();
		Register_UnityEngine_RenderSettings_set_ambientIntensity();

		//System.Void UnityEngine.RenderSettings::set_ambientLight_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_set_ambientLight_Injected();
		Register_UnityEngine_RenderSettings_set_ambientLight_Injected();

		//System.Void UnityEngine.RenderSettings::set_ambientMode(UnityEngine.Rendering.AmbientMode)
		void Register_UnityEngine_RenderSettings_set_ambientMode();
		Register_UnityEngine_RenderSettings_set_ambientMode();

		//System.Void UnityEngine.RenderSettings::set_ambientProbe_Injected(UnityEngine.Rendering.SphericalHarmonicsL2&)
		void Register_UnityEngine_RenderSettings_set_ambientProbe_Injected();
		Register_UnityEngine_RenderSettings_set_ambientProbe_Injected();

		//System.Void UnityEngine.RenderSettings::set_ambientSkyColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_set_ambientSkyColor_Injected();
		Register_UnityEngine_RenderSettings_set_ambientSkyColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_customReflection(UnityEngine.Cubemap)
		void Register_UnityEngine_RenderSettings_set_customReflection();
		Register_UnityEngine_RenderSettings_set_customReflection();

		//System.Void UnityEngine.RenderSettings::set_defaultReflectionMode(UnityEngine.Rendering.DefaultReflectionMode)
		void Register_UnityEngine_RenderSettings_set_defaultReflectionMode();
		Register_UnityEngine_RenderSettings_set_defaultReflectionMode();

		//System.Void UnityEngine.RenderSettings::set_defaultReflectionResolution(System.Int32)
		void Register_UnityEngine_RenderSettings_set_defaultReflectionResolution();
		Register_UnityEngine_RenderSettings_set_defaultReflectionResolution();

		//System.Void UnityEngine.RenderSettings::set_flareFadeSpeed(System.Single)
		void Register_UnityEngine_RenderSettings_set_flareFadeSpeed();
		Register_UnityEngine_RenderSettings_set_flareFadeSpeed();

		//System.Void UnityEngine.RenderSettings::set_flareStrength(System.Single)
		void Register_UnityEngine_RenderSettings_set_flareStrength();
		Register_UnityEngine_RenderSettings_set_flareStrength();

		//System.Void UnityEngine.RenderSettings::set_fog(System.Boolean)
		void Register_UnityEngine_RenderSettings_set_fog();
		Register_UnityEngine_RenderSettings_set_fog();

		//System.Void UnityEngine.RenderSettings::set_fogColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_set_fogColor_Injected();
		Register_UnityEngine_RenderSettings_set_fogColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_fogDensity(System.Single)
		void Register_UnityEngine_RenderSettings_set_fogDensity();
		Register_UnityEngine_RenderSettings_set_fogDensity();

		//System.Void UnityEngine.RenderSettings::set_fogEndDistance(System.Single)
		void Register_UnityEngine_RenderSettings_set_fogEndDistance();
		Register_UnityEngine_RenderSettings_set_fogEndDistance();

		//System.Void UnityEngine.RenderSettings::set_fogMode(UnityEngine.FogMode)
		void Register_UnityEngine_RenderSettings_set_fogMode();
		Register_UnityEngine_RenderSettings_set_fogMode();

		//System.Void UnityEngine.RenderSettings::set_fogStartDistance(System.Single)
		void Register_UnityEngine_RenderSettings_set_fogStartDistance();
		Register_UnityEngine_RenderSettings_set_fogStartDistance();

		//System.Void UnityEngine.RenderSettings::set_haloStrength(System.Single)
		void Register_UnityEngine_RenderSettings_set_haloStrength();
		Register_UnityEngine_RenderSettings_set_haloStrength();

		//System.Void UnityEngine.RenderSettings::set_reflectionBounces(System.Int32)
		void Register_UnityEngine_RenderSettings_set_reflectionBounces();
		Register_UnityEngine_RenderSettings_set_reflectionBounces();

		//System.Void UnityEngine.RenderSettings::set_reflectionIntensity(System.Single)
		void Register_UnityEngine_RenderSettings_set_reflectionIntensity();
		Register_UnityEngine_RenderSettings_set_reflectionIntensity();

		//System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
		void Register_UnityEngine_RenderSettings_set_skybox();
		Register_UnityEngine_RenderSettings_set_skybox();

		//System.Void UnityEngine.RenderSettings::set_subtractiveShadowColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_set_subtractiveShadowColor_Injected();
		Register_UnityEngine_RenderSettings_set_subtractiveShadowColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_sun(UnityEngine.Light)
		void Register_UnityEngine_RenderSettings_set_sun();
		Register_UnityEngine_RenderSettings_set_sun();

		//UnityEngine.Cubemap UnityEngine.RenderSettings::get_customReflection()
		void Register_UnityEngine_RenderSettings_get_customReflection();
		Register_UnityEngine_RenderSettings_get_customReflection();

		//UnityEngine.FogMode UnityEngine.RenderSettings::get_fogMode()
		void Register_UnityEngine_RenderSettings_get_fogMode();
		Register_UnityEngine_RenderSettings_get_fogMode();

		//UnityEngine.Light UnityEngine.RenderSettings::get_sun()
		void Register_UnityEngine_RenderSettings_get_sun();
		Register_UnityEngine_RenderSettings_get_sun();

		//UnityEngine.Material UnityEngine.RenderSettings::get_skybox()
		void Register_UnityEngine_RenderSettings_get_skybox();
		Register_UnityEngine_RenderSettings_get_skybox();

		//UnityEngine.Object UnityEngine.RenderSettings::GetRenderSettings()
		void Register_UnityEngine_RenderSettings_GetRenderSettings();
		Register_UnityEngine_RenderSettings_GetRenderSettings();

		//UnityEngine.Rendering.AmbientMode UnityEngine.RenderSettings::get_ambientMode()
		void Register_UnityEngine_RenderSettings_get_ambientMode();
		Register_UnityEngine_RenderSettings_get_ambientMode();

		//UnityEngine.Rendering.DefaultReflectionMode UnityEngine.RenderSettings::get_defaultReflectionMode()
		void Register_UnityEngine_RenderSettings_get_defaultReflectionMode();
		Register_UnityEngine_RenderSettings_get_defaultReflectionMode();

	//End Registrations for type : UnityEngine.RenderSettings

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Boolean UnityEngine.RenderTexture::Create()
		void Register_UnityEngine_RenderTexture_Create();
		Register_UnityEngine_RenderTexture_Create();

		//System.Boolean UnityEngine.RenderTexture::GetIsPowerOfTwo()
		void Register_UnityEngine_RenderTexture_GetIsPowerOfTwo();
		Register_UnityEngine_RenderTexture_GetIsPowerOfTwo();

		//System.Boolean UnityEngine.RenderTexture::IsCreated()
		void Register_UnityEngine_RenderTexture_IsCreated();
		Register_UnityEngine_RenderTexture_IsCreated();

		//System.Boolean UnityEngine.RenderTexture::SupportsStencil(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_SupportsStencil();
		Register_UnityEngine_RenderTexture_SupportsStencil();

		//System.Boolean UnityEngine.RenderTexture::get_autoGenerateMips()
		void Register_UnityEngine_RenderTexture_get_autoGenerateMips();
		Register_UnityEngine_RenderTexture_get_autoGenerateMips();

		//System.Boolean UnityEngine.RenderTexture::get_bindTextureMS()
		void Register_UnityEngine_RenderTexture_get_bindTextureMS();
		Register_UnityEngine_RenderTexture_get_bindTextureMS();

		//System.Boolean UnityEngine.RenderTexture::get_enableRandomWrite()
		void Register_UnityEngine_RenderTexture_get_enableRandomWrite();
		Register_UnityEngine_RenderTexture_get_enableRandomWrite();

		//System.Boolean UnityEngine.RenderTexture::get_sRGB()
		void Register_UnityEngine_RenderTexture_get_sRGB();
		Register_UnityEngine_RenderTexture_get_sRGB();

		//System.Boolean UnityEngine.RenderTexture::get_useDynamicScale()
		void Register_UnityEngine_RenderTexture_get_useDynamicScale();
		Register_UnityEngine_RenderTexture_get_useDynamicScale();

		//System.Boolean UnityEngine.RenderTexture::get_useMipMap()
		void Register_UnityEngine_RenderTexture_get_useMipMap();
		Register_UnityEngine_RenderTexture_get_useMipMap();

		//System.Int32 UnityEngine.RenderTexture::get_antiAliasing()
		void Register_UnityEngine_RenderTexture_get_antiAliasing();
		Register_UnityEngine_RenderTexture_get_antiAliasing();

		//System.Int32 UnityEngine.RenderTexture::get_depth()
		void Register_UnityEngine_RenderTexture_get_depth();
		Register_UnityEngine_RenderTexture_get_depth();

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_volumeDepth()
		void Register_UnityEngine_RenderTexture_get_volumeDepth();
		Register_UnityEngine_RenderTexture_get_volumeDepth();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.IntPtr UnityEngine.RenderTexture::GetNativeDepthBufferPtr()
		void Register_UnityEngine_RenderTexture_GetNativeDepthBufferPtr();
		Register_UnityEngine_RenderTexture_GetNativeDepthBufferPtr();

		//System.Void UnityEngine.RenderTexture::ConvertToEquirect(UnityEngine.RenderTexture,UnityEngine.Camera/MonoOrStereoscopicEye)
		void Register_UnityEngine_RenderTexture_ConvertToEquirect();
		Register_UnityEngine_RenderTexture_ConvertToEquirect();

		//System.Void UnityEngine.RenderTexture::DiscardContents(System.Boolean,System.Boolean)
		void Register_UnityEngine_RenderTexture_DiscardContents();
		Register_UnityEngine_RenderTexture_DiscardContents();

		//System.Void UnityEngine.RenderTexture::GenerateMips()
		void Register_UnityEngine_RenderTexture_GenerateMips();
		Register_UnityEngine_RenderTexture_GenerateMips();

		//System.Void UnityEngine.RenderTexture::GetColorBuffer_Injected(UnityEngine.RenderBuffer&)
		void Register_UnityEngine_RenderTexture_GetColorBuffer_Injected();
		Register_UnityEngine_RenderTexture_GetColorBuffer_Injected();

		//System.Void UnityEngine.RenderTexture::GetDepthBuffer_Injected(UnityEngine.RenderBuffer&)
		void Register_UnityEngine_RenderTexture_GetDepthBuffer_Injected();
		Register_UnityEngine_RenderTexture_GetDepthBuffer_Injected();

		//System.Void UnityEngine.RenderTexture::GetDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetDescriptor_Injected();
		Register_UnityEngine_RenderTexture_GetDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
		void Register_UnityEngine_RenderTexture_MarkRestoreExpected();
		Register_UnityEngine_RenderTexture_MarkRestoreExpected();

		//System.Void UnityEngine.RenderTexture::Release()
		void Register_UnityEngine_RenderTexture_Release();
		Register_UnityEngine_RenderTexture_Release();

		//System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_ReleaseTemporary();
		Register_UnityEngine_RenderTexture_ReleaseTemporary();

		//System.Void UnityEngine.RenderTexture::ResolveAA()
		void Register_UnityEngine_RenderTexture_ResolveAA();
		Register_UnityEngine_RenderTexture_ResolveAA();

		//System.Void UnityEngine.RenderTexture::ResolveAATo(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_ResolveAATo();
		Register_UnityEngine_RenderTexture_ResolveAATo();

		//System.Void UnityEngine.RenderTexture::SetActive(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_SetActive();
		Register_UnityEngine_RenderTexture_SetActive();

		//System.Void UnityEngine.RenderTexture::SetGlobalShaderProperty(System.String)
		void Register_UnityEngine_RenderTexture_SetGlobalShaderProperty();
		Register_UnityEngine_RenderTexture_SetGlobalShaderProperty();

		//System.Void UnityEngine.RenderTexture::SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();
		Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
		void Register_UnityEngine_RenderTexture_set_antiAliasing();
		Register_UnityEngine_RenderTexture_set_antiAliasing();

		//System.Void UnityEngine.RenderTexture::set_autoGenerateMips(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_autoGenerateMips();
		Register_UnityEngine_RenderTexture_set_autoGenerateMips();

		//System.Void UnityEngine.RenderTexture::set_bindTextureMS(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_bindTextureMS();
		Register_UnityEngine_RenderTexture_set_bindTextureMS();

		//System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_depth();
		Register_UnityEngine_RenderTexture_set_depth();

		//System.Void UnityEngine.RenderTexture::set_dimension(UnityEngine.Rendering.TextureDimension)
		void Register_UnityEngine_RenderTexture_set_dimension();
		Register_UnityEngine_RenderTexture_set_dimension();

		//System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_enableRandomWrite();
		Register_UnityEngine_RenderTexture_set_enableRandomWrite();

		//System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_graphicsFormat();
		Register_UnityEngine_RenderTexture_set_graphicsFormat();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_memorylessMode(UnityEngine.RenderTextureMemoryless)
		void Register_UnityEngine_RenderTexture_set_memorylessMode();
		Register_UnityEngine_RenderTexture_set_memorylessMode();

		//System.Void UnityEngine.RenderTexture::set_stencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_stencilFormat();
		Register_UnityEngine_RenderTexture_set_stencilFormat();

		//System.Void UnityEngine.RenderTexture::set_useDynamicScale(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_useDynamicScale();
		Register_UnityEngine_RenderTexture_set_useDynamicScale();

		//System.Void UnityEngine.RenderTexture::set_useMipMap(System.Boolean)
		void Register_UnityEngine_RenderTexture_set_useMipMap();
		Register_UnityEngine_RenderTexture_set_useMipMap();

		//System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_volumeDepth();
		Register_UnityEngine_RenderTexture_set_volumeDepth();

		//System.Void UnityEngine.RenderTexture::set_vrUsage(UnityEngine.VRTextureUsage)
		void Register_UnityEngine_RenderTexture_set_vrUsage();
		Register_UnityEngine_RenderTexture_set_vrUsage();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTexture::get_graphicsFormat()
		void Register_UnityEngine_RenderTexture_get_graphicsFormat();
		Register_UnityEngine_RenderTexture_get_graphicsFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTexture::get_stencilFormat()
		void Register_UnityEngine_RenderTexture_get_stencilFormat();
		Register_UnityEngine_RenderTexture_get_stencilFormat();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::GetActive()
		void Register_UnityEngine_RenderTexture_GetActive();
		Register_UnityEngine_RenderTexture_GetActive();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary_Internal_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();
		Register_UnityEngine_RenderTexture_GetTemporary_Internal_Injected();

		//UnityEngine.RenderTextureMemoryless UnityEngine.RenderTexture::get_memorylessMode()
		void Register_UnityEngine_RenderTexture_get_memorylessMode();
		Register_UnityEngine_RenderTexture_get_memorylessMode();

		//UnityEngine.Rendering.TextureDimension UnityEngine.RenderTexture::get_dimension()
		void Register_UnityEngine_RenderTexture_get_dimension();
		Register_UnityEngine_RenderTexture_get_dimension();

		//UnityEngine.VRTextureUsage UnityEngine.RenderTexture::get_vrUsage()
		void Register_UnityEngine_RenderTexture_get_vrUsage();
		Register_UnityEngine_RenderTexture_get_vrUsage();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Resources

		//UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
		void Register_UnityEngine_Resources_GetBuiltinResource();
		Register_UnityEngine_Resources_GetBuiltinResource();

	//End Registrations for type : UnityEngine.Resources

	//Start Registrations for type : UnityEngine.ResourcesAPIInternal

		//System.Void UnityEngine.ResourcesAPIInternal::UnloadAsset(UnityEngine.Object)
		void Register_UnityEngine_ResourcesAPIInternal_UnloadAsset();
		Register_UnityEngine_ResourcesAPIInternal_UnloadAsset();

		//UnityEngine.Object UnityEngine.ResourcesAPIInternal::Load(System.String,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_Load();
		Register_UnityEngine_ResourcesAPIInternal_Load();

		//UnityEngine.Object[] UnityEngine.ResourcesAPIInternal::FindObjectsOfTypeAll(System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_FindObjectsOfTypeAll();
		Register_UnityEngine_ResourcesAPIInternal_FindObjectsOfTypeAll();

		//UnityEngine.Object[] UnityEngine.ResourcesAPIInternal::LoadAll(System.String,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_LoadAll();
		Register_UnityEngine_ResourcesAPIInternal_LoadAll();

		//UnityEngine.ResourceRequest UnityEngine.ResourcesAPIInternal::LoadAsyncInternal(System.String,System.Type)
		void Register_UnityEngine_ResourcesAPIInternal_LoadAsyncInternal();
		Register_UnityEngine_ResourcesAPIInternal_LoadAsyncInternal();

		//UnityEngine.Shader UnityEngine.ResourcesAPIInternal::FindShaderByName(System.String)
		void Register_UnityEngine_ResourcesAPIInternal_FindShaderByName();
		Register_UnityEngine_ResourcesAPIInternal_FindShaderByName();

	//End Registrations for type : UnityEngine.ResourcesAPIInternal

	//Start Registrations for type : UnityEngine.Rigidbody

		//System.Boolean UnityEngine.Rigidbody::IsSleeping()
		void Register_UnityEngine_Rigidbody_IsSleeping();
		Register_UnityEngine_Rigidbody_IsSleeping();

		//System.Boolean UnityEngine.Rigidbody::get_detectCollisions()
		void Register_UnityEngine_Rigidbody_get_detectCollisions();
		Register_UnityEngine_Rigidbody_get_detectCollisions();

		//System.Boolean UnityEngine.Rigidbody::get_freezeRotation()
		void Register_UnityEngine_Rigidbody_get_freezeRotation();
		Register_UnityEngine_Rigidbody_get_freezeRotation();

		//System.Boolean UnityEngine.Rigidbody::get_isKinematic()
		void Register_UnityEngine_Rigidbody_get_isKinematic();
		Register_UnityEngine_Rigidbody_get_isKinematic();

		//System.Boolean UnityEngine.Rigidbody::get_useGravity()
		void Register_UnityEngine_Rigidbody_get_useGravity();
		Register_UnityEngine_Rigidbody_get_useGravity();

		//System.Int32 UnityEngine.Rigidbody::get_solverIterations()
		void Register_UnityEngine_Rigidbody_get_solverIterations();
		Register_UnityEngine_Rigidbody_get_solverIterations();

		//System.Int32 UnityEngine.Rigidbody::get_solverVelocityIterations()
		void Register_UnityEngine_Rigidbody_get_solverVelocityIterations();
		Register_UnityEngine_Rigidbody_get_solverVelocityIterations();

		//System.Single UnityEngine.Rigidbody::get_angularDrag()
		void Register_UnityEngine_Rigidbody_get_angularDrag();
		Register_UnityEngine_Rigidbody_get_angularDrag();

		//System.Single UnityEngine.Rigidbody::get_drag()
		void Register_UnityEngine_Rigidbody_get_drag();
		Register_UnityEngine_Rigidbody_get_drag();

		//System.Single UnityEngine.Rigidbody::get_mass()
		void Register_UnityEngine_Rigidbody_get_mass();
		Register_UnityEngine_Rigidbody_get_mass();

		//System.Single UnityEngine.Rigidbody::get_maxAngularVelocity()
		void Register_UnityEngine_Rigidbody_get_maxAngularVelocity();
		Register_UnityEngine_Rigidbody_get_maxAngularVelocity();

		//System.Single UnityEngine.Rigidbody::get_maxDepenetrationVelocity()
		void Register_UnityEngine_Rigidbody_get_maxDepenetrationVelocity();
		Register_UnityEngine_Rigidbody_get_maxDepenetrationVelocity();

		//System.Single UnityEngine.Rigidbody::get_sleepAngularVelocity()
		void Register_UnityEngine_Rigidbody_get_sleepAngularVelocity();
		Register_UnityEngine_Rigidbody_get_sleepAngularVelocity();

		//System.Single UnityEngine.Rigidbody::get_sleepThreshold()
		void Register_UnityEngine_Rigidbody_get_sleepThreshold();
		Register_UnityEngine_Rigidbody_get_sleepThreshold();

		//System.Single UnityEngine.Rigidbody::get_sleepVelocity()
		void Register_UnityEngine_Rigidbody_get_sleepVelocity();
		Register_UnityEngine_Rigidbody_get_sleepVelocity();

		//System.Void UnityEngine.Rigidbody::AddExplosionForce_Injected(System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddExplosionForce_Injected();
		Register_UnityEngine_Rigidbody_AddExplosionForce_Injected();

		//System.Void UnityEngine.Rigidbody::AddForceAtPosition_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddForceAtPosition_Injected();
		Register_UnityEngine_Rigidbody_AddForceAtPosition_Injected();

		//System.Void UnityEngine.Rigidbody::AddForce_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddForce_Injected();
		Register_UnityEngine_Rigidbody_AddForce_Injected();

		//System.Void UnityEngine.Rigidbody::AddRelativeForce_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddRelativeForce_Injected();
		Register_UnityEngine_Rigidbody_AddRelativeForce_Injected();

		//System.Void UnityEngine.Rigidbody::AddRelativeTorque_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddRelativeTorque_Injected();
		Register_UnityEngine_Rigidbody_AddRelativeTorque_Injected();

		//System.Void UnityEngine.Rigidbody::AddTorque_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_AddTorque_Injected();
		Register_UnityEngine_Rigidbody_AddTorque_Injected();

		//System.Void UnityEngine.Rigidbody::GetPointVelocity_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_GetPointVelocity_Injected();
		Register_UnityEngine_Rigidbody_GetPointVelocity_Injected();

		//System.Void UnityEngine.Rigidbody::GetRelativePointVelocity_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_GetRelativePointVelocity_Injected();
		Register_UnityEngine_Rigidbody_GetRelativePointVelocity_Injected();

		//System.Void UnityEngine.Rigidbody::Internal_ClosestPointOnBounds_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single&)
		void Register_UnityEngine_Rigidbody_Internal_ClosestPointOnBounds_Injected();
		Register_UnityEngine_Rigidbody_Internal_ClosestPointOnBounds_Injected();

		//System.Void UnityEngine.Rigidbody::MovePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_MovePosition_Injected();
		Register_UnityEngine_Rigidbody_MovePosition_Injected();

		//System.Void UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_MoveRotation_Injected();
		Register_UnityEngine_Rigidbody_MoveRotation_Injected();

		//System.Void UnityEngine.Rigidbody::ResetCenterOfMass()
		void Register_UnityEngine_Rigidbody_ResetCenterOfMass();
		Register_UnityEngine_Rigidbody_ResetCenterOfMass();

		//System.Void UnityEngine.Rigidbody::ResetInertiaTensor()
		void Register_UnityEngine_Rigidbody_ResetInertiaTensor();
		Register_UnityEngine_Rigidbody_ResetInertiaTensor();

		//System.Void UnityEngine.Rigidbody::SetDensity(System.Single)
		void Register_UnityEngine_Rigidbody_SetDensity();
		Register_UnityEngine_Rigidbody_SetDensity();

		//System.Void UnityEngine.Rigidbody::Sleep()
		void Register_UnityEngine_Rigidbody_Sleep();
		Register_UnityEngine_Rigidbody_Sleep();

		//System.Void UnityEngine.Rigidbody::SweepTest_Injected(UnityEngine.Vector3&,System.Single,UnityEngine.QueryTriggerInteraction,System.Boolean&,UnityEngine.RaycastHit&)
		void Register_UnityEngine_Rigidbody_SweepTest_Injected();
		Register_UnityEngine_Rigidbody_SweepTest_Injected();

		//System.Void UnityEngine.Rigidbody::WakeUp()
		void Register_UnityEngine_Rigidbody_WakeUp();
		Register_UnityEngine_Rigidbody_WakeUp();

		//System.Void UnityEngine.Rigidbody::get_angularVelocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_angularVelocity_Injected();
		Register_UnityEngine_Rigidbody_get_angularVelocity_Injected();

		//System.Void UnityEngine.Rigidbody::get_centerOfMass_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_centerOfMass_Injected();
		Register_UnityEngine_Rigidbody_get_centerOfMass_Injected();

		//System.Void UnityEngine.Rigidbody::get_inertiaTensorRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_get_inertiaTensorRotation_Injected();
		Register_UnityEngine_Rigidbody_get_inertiaTensorRotation_Injected();

		//System.Void UnityEngine.Rigidbody::get_inertiaTensor_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_inertiaTensor_Injected();
		Register_UnityEngine_Rigidbody_get_inertiaTensor_Injected();

		//System.Void UnityEngine.Rigidbody::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_position_Injected();
		Register_UnityEngine_Rigidbody_get_position_Injected();

		//System.Void UnityEngine.Rigidbody::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_get_rotation_Injected();
		Register_UnityEngine_Rigidbody_get_rotation_Injected();

		//System.Void UnityEngine.Rigidbody::get_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_velocity_Injected();
		Register_UnityEngine_Rigidbody_get_velocity_Injected();

		//System.Void UnityEngine.Rigidbody::get_worldCenterOfMass_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_get_worldCenterOfMass_Injected();
		Register_UnityEngine_Rigidbody_get_worldCenterOfMass_Injected();

		//System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
		void Register_UnityEngine_Rigidbody_set_angularDrag();
		Register_UnityEngine_Rigidbody_set_angularDrag();

		//System.Void UnityEngine.Rigidbody::set_angularVelocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_set_angularVelocity_Injected();
		Register_UnityEngine_Rigidbody_set_angularVelocity_Injected();

		//System.Void UnityEngine.Rigidbody::set_centerOfMass_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_set_centerOfMass_Injected();
		Register_UnityEngine_Rigidbody_set_centerOfMass_Injected();

		//System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
		void Register_UnityEngine_Rigidbody_set_collisionDetectionMode();
		Register_UnityEngine_Rigidbody_set_collisionDetectionMode();

		//System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
		void Register_UnityEngine_Rigidbody_set_constraints();
		Register_UnityEngine_Rigidbody_set_constraints();

		//System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_detectCollisions();
		Register_UnityEngine_Rigidbody_set_detectCollisions();

		//System.Void UnityEngine.Rigidbody::set_drag(System.Single)
		void Register_UnityEngine_Rigidbody_set_drag();
		Register_UnityEngine_Rigidbody_set_drag();

		//System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_freezeRotation();
		Register_UnityEngine_Rigidbody_set_freezeRotation();

		//System.Void UnityEngine.Rigidbody::set_inertiaTensorRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_set_inertiaTensorRotation_Injected();
		Register_UnityEngine_Rigidbody_set_inertiaTensorRotation_Injected();

		//System.Void UnityEngine.Rigidbody::set_inertiaTensor_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_set_inertiaTensor_Injected();
		Register_UnityEngine_Rigidbody_set_inertiaTensor_Injected();

		//System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
		void Register_UnityEngine_Rigidbody_set_interpolation();
		Register_UnityEngine_Rigidbody_set_interpolation();

		//System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_isKinematic();
		Register_UnityEngine_Rigidbody_set_isKinematic();

		//System.Void UnityEngine.Rigidbody::set_mass(System.Single)
		void Register_UnityEngine_Rigidbody_set_mass();
		Register_UnityEngine_Rigidbody_set_mass();

		//System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
		void Register_UnityEngine_Rigidbody_set_maxAngularVelocity();
		Register_UnityEngine_Rigidbody_set_maxAngularVelocity();

		//System.Void UnityEngine.Rigidbody::set_maxDepenetrationVelocity(System.Single)
		void Register_UnityEngine_Rigidbody_set_maxDepenetrationVelocity();
		Register_UnityEngine_Rigidbody_set_maxDepenetrationVelocity();

		//System.Void UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_set_position_Injected();
		Register_UnityEngine_Rigidbody_set_position_Injected();

		//System.Void UnityEngine.Rigidbody::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Rigidbody_set_rotation_Injected();
		Register_UnityEngine_Rigidbody_set_rotation_Injected();

		//System.Void UnityEngine.Rigidbody::set_sleepAngularVelocity(System.Single)
		void Register_UnityEngine_Rigidbody_set_sleepAngularVelocity();
		Register_UnityEngine_Rigidbody_set_sleepAngularVelocity();

		//System.Void UnityEngine.Rigidbody::set_sleepThreshold(System.Single)
		void Register_UnityEngine_Rigidbody_set_sleepThreshold();
		Register_UnityEngine_Rigidbody_set_sleepThreshold();

		//System.Void UnityEngine.Rigidbody::set_sleepVelocity(System.Single)
		void Register_UnityEngine_Rigidbody_set_sleepVelocity();
		Register_UnityEngine_Rigidbody_set_sleepVelocity();

		//System.Void UnityEngine.Rigidbody::set_solverIterations(System.Int32)
		void Register_UnityEngine_Rigidbody_set_solverIterations();
		Register_UnityEngine_Rigidbody_set_solverIterations();

		//System.Void UnityEngine.Rigidbody::set_solverVelocityIterations(System.Int32)
		void Register_UnityEngine_Rigidbody_set_solverVelocityIterations();
		Register_UnityEngine_Rigidbody_set_solverVelocityIterations();

		//System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_useGravity();
		Register_UnityEngine_Rigidbody_set_useGravity();

		//System.Void UnityEngine.Rigidbody::set_velocity_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_set_velocity_Injected();
		Register_UnityEngine_Rigidbody_set_velocity_Injected();

		//UnityEngine.CollisionDetectionMode UnityEngine.Rigidbody::get_collisionDetectionMode()
		void Register_UnityEngine_Rigidbody_get_collisionDetectionMode();
		Register_UnityEngine_Rigidbody_get_collisionDetectionMode();

		//UnityEngine.RaycastHit[] UnityEngine.Rigidbody::Internal_SweepTestAll_Injected(UnityEngine.Vector3&,System.Single,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Rigidbody_Internal_SweepTestAll_Injected();
		Register_UnityEngine_Rigidbody_Internal_SweepTestAll_Injected();

		//UnityEngine.RigidbodyConstraints UnityEngine.Rigidbody::get_constraints()
		void Register_UnityEngine_Rigidbody_get_constraints();
		Register_UnityEngine_Rigidbody_get_constraints();

		//UnityEngine.RigidbodyInterpolation UnityEngine.Rigidbody::get_interpolation()
		void Register_UnityEngine_Rigidbody_get_interpolation();
		Register_UnityEngine_Rigidbody_get_interpolation();

	//End Registrations for type : UnityEngine.Rigidbody

	//Start Registrations for type : UnityEngine.Rigidbody2D

		//System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
		void Register_UnityEngine_Rigidbody2D_get_angularVelocity();
		Register_UnityEngine_Rigidbody2D_get_angularVelocity();

		//System.Single UnityEngine.Rigidbody2D::get_rotation()
		void Register_UnityEngine_Rigidbody2D_get_rotation();
		Register_UnityEngine_Rigidbody2D_get_rotation();

		//System.Void UnityEngine.Rigidbody2D::MoveRotation_Angle(System.Single)
		void Register_UnityEngine_Rigidbody2D_MoveRotation_Angle();
		Register_UnityEngine_Rigidbody2D_MoveRotation_Angle();

		//System.Void UnityEngine.Rigidbody2D::get_position_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Rigidbody2D_get_position_Injected();
		Register_UnityEngine_Rigidbody2D_get_position_Injected();

		//System.Void UnityEngine.Rigidbody2D::get_velocity_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Rigidbody2D_get_velocity_Injected();
		Register_UnityEngine_Rigidbody2D_get_velocity_Injected();

		//System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
		void Register_UnityEngine_Rigidbody2D_set_angularVelocity();
		Register_UnityEngine_Rigidbody2D_set_angularVelocity();

		//System.Void UnityEngine.Rigidbody2D::set_position_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Rigidbody2D_set_position_Injected();
		Register_UnityEngine_Rigidbody2D_set_position_Injected();

		//System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
		void Register_UnityEngine_Rigidbody2D_set_rotation();
		Register_UnityEngine_Rigidbody2D_set_rotation();

		//System.Void UnityEngine.Rigidbody2D::set_velocity_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Rigidbody2D_set_velocity_Injected();
		Register_UnityEngine_Rigidbody2D_set_velocity_Injected();

	//End Registrations for type : UnityEngine.Rigidbody2D

	//Start Registrations for type : UnityEngine.RuntimeAnimatorController

		//UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
		void Register_UnityEngine_RuntimeAnimatorController_get_animationClips();
		Register_UnityEngine_RuntimeAnimatorController_get_animationClips();

	//End Registrations for type : UnityEngine.RuntimeAnimatorController

	//Start Registrations for type : UnityEngine.ScalableBufferManager

		//System.Single UnityEngine.ScalableBufferManager::get_heightScaleFactor()
		void Register_UnityEngine_ScalableBufferManager_get_heightScaleFactor();
		Register_UnityEngine_ScalableBufferManager_get_heightScaleFactor();

		//System.Single UnityEngine.ScalableBufferManager::get_widthScaleFactor()
		void Register_UnityEngine_ScalableBufferManager_get_widthScaleFactor();
		Register_UnityEngine_ScalableBufferManager_get_widthScaleFactor();

		//System.Void UnityEngine.ScalableBufferManager::ResizeBuffers(System.Single,System.Single)
		void Register_UnityEngine_ScalableBufferManager_ResizeBuffers();
		Register_UnityEngine_ScalableBufferManager_ResizeBuffers();

	//End Registrations for type : UnityEngine.ScalableBufferManager

	//Start Registrations for type : UnityEngine.SceneManagement.Scene

		//System.Boolean UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetIsLoadedInternal();
		Register_UnityEngine_SceneManagement_Scene_GetIsLoadedInternal();

		//System.Boolean UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_IsValidInternal();
		Register_UnityEngine_SceneManagement_Scene_IsValidInternal();

		//System.Int32 UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetRootCountInternal();
		Register_UnityEngine_SceneManagement_Scene_GetRootCountInternal();

		//System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
		void Register_UnityEngine_SceneManagement_Scene_GetNameInternal();
		Register_UnityEngine_SceneManagement_Scene_GetNameInternal();

		//System.Void UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)
		void Register_UnityEngine_SceneManagement_Scene_GetRootGameObjectsInternal();
		Register_UnityEngine_SceneManagement_Scene_GetRootGameObjectsInternal();

	//End Registrations for type : UnityEngine.SceneManagement.Scene

	//Start Registrations for type : UnityEngine.SceneManagement.SceneManager

		//System.Int32 UnityEngine.SceneManagement.SceneManager::get_sceneCount()
		void Register_UnityEngine_SceneManagement_SceneManager_get_sceneCount();
		Register_UnityEngine_SceneManagement_SceneManager_get_sceneCount();

		//System.Void UnityEngine.SceneManagement.SceneManager::GetActiveScene_Injected(UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_GetActiveScene_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_GetActiveScene_Injected();

		//System.Void UnityEngine.SceneManagement.SceneManager::GetSceneAt_Injected(System.Int32,UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_GetSceneAt_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_GetSceneAt_Injected();

		//System.Void UnityEngine.SceneManagement.SceneManager::GetSceneByName_Injected(System.String,UnityEngine.SceneManagement.Scene&)
		void Register_UnityEngine_SceneManagement_SceneManager_GetSceneByName_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_GetSceneByName_Injected();

		//UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsyncInternal_Injected(UnityEngine.SceneManagement.Scene&,UnityEngine.SceneManagement.UnloadSceneOptions)
		void Register_UnityEngine_SceneManagement_SceneManager_UnloadSceneAsyncInternal_Injected();
		Register_UnityEngine_SceneManagement_SceneManager_UnloadSceneAsyncInternal_Injected();

	//End Registrations for type : UnityEngine.SceneManagement.SceneManager

	//Start Registrations for type : UnityEngine.SceneManagement.SceneManagerAPIInternal

		//UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters&,System.Boolean)
		void Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected();
		Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_LoadSceneAsyncNameIndexInternal_Injected();

		//UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::UnloadSceneNameIndexInternal(System.String,System.Int32,System.Boolean,UnityEngine.SceneManagement.UnloadSceneOptions,System.Boolean&)
		void Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_UnloadSceneNameIndexInternal();
		Register_UnityEngine_SceneManagement_SceneManagerAPIInternal_UnloadSceneNameIndexInternal();

	//End Registrations for type : UnityEngine.SceneManagement.SceneManagerAPIInternal

	//Start Registrations for type : UnityEngine.Screen

		//System.Boolean UnityEngine.Screen::get_fullScreen()
		void Register_UnityEngine_Screen_get_fullScreen();
		Register_UnityEngine_Screen_get_fullScreen();

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//System.Single UnityEngine.Screen::get_dpi()
		void Register_UnityEngine_Screen_get_dpi();
		Register_UnityEngine_Screen_get_dpi();

		//System.Void UnityEngine.Screen::SetOrientationEnabled(UnityEngine.EnabledOrientation,System.Boolean)
		void Register_UnityEngine_Screen_SetOrientationEnabled();
		Register_UnityEngine_Screen_SetOrientationEnabled();

		//System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,UnityEngine.FullScreenMode,System.Int32)
		void Register_UnityEngine_Screen_SetResolution();
		Register_UnityEngine_Screen_SetResolution();

		//System.Void UnityEngine.Screen::get_currentResolution_Injected(UnityEngine.Resolution&)
		void Register_UnityEngine_Screen_get_currentResolution_Injected();
		Register_UnityEngine_Screen_get_currentResolution_Injected();

		//System.Void UnityEngine.Screen::set_fullScreen(System.Boolean)
		void Register_UnityEngine_Screen_set_fullScreen();
		Register_UnityEngine_Screen_set_fullScreen();

		//UnityEngine.FullScreenMode UnityEngine.Screen::get_fullScreenMode()
		void Register_UnityEngine_Screen_get_fullScreenMode();
		Register_UnityEngine_Screen_get_fullScreenMode();

		//UnityEngine.Resolution[] UnityEngine.Screen::get_resolutions()
		void Register_UnityEngine_Screen_get_resolutions();
		Register_UnityEngine_Screen_get_resolutions();

		//UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
		void Register_UnityEngine_Screen_GetScreenOrientation();
		Register_UnityEngine_Screen_GetScreenOrientation();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type,System.Boolean)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Shader

		//System.Boolean UnityEngine.Shader::FindTextureStackImpl(UnityEngine.Shader,System.Int32,System.String&,System.Int32&)
		void Register_UnityEngine_Shader_FindTextureStackImpl();
		Register_UnityEngine_Shader_FindTextureStackImpl();

		//System.Boolean UnityEngine.Shader::IsKeywordEnabled(System.String)
		void Register_UnityEngine_Shader_IsKeywordEnabled();
		Register_UnityEngine_Shader_IsKeywordEnabled();

		//System.Boolean UnityEngine.Shader::get_isSupported()
		void Register_UnityEngine_Shader_get_isSupported();
		Register_UnityEngine_Shader_get_isSupported();

		//System.Int32 UnityEngine.Shader::FindPropertyIndex(System.String)
		void Register_UnityEngine_Shader_FindPropertyIndex();
		Register_UnityEngine_Shader_FindPropertyIndex();

		//System.Int32 UnityEngine.Shader::GetGlobalFloatArrayCountImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalFloatArrayCountImpl();
		Register_UnityEngine_Shader_GetGlobalFloatArrayCountImpl();

		//System.Int32 UnityEngine.Shader::GetGlobalMatrixArrayCountImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalMatrixArrayCountImpl();
		Register_UnityEngine_Shader_GetGlobalMatrixArrayCountImpl();

		//System.Int32 UnityEngine.Shader::GetGlobalVectorArrayCountImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalVectorArrayCountImpl();
		Register_UnityEngine_Shader_GetGlobalVectorArrayCountImpl();

		//System.Int32 UnityEngine.Shader::GetPropertyCount()
		void Register_UnityEngine_Shader_GetPropertyCount();
		Register_UnityEngine_Shader_GetPropertyCount();

		//System.Int32 UnityEngine.Shader::GetPropertyNameId(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyNameId();
		Register_UnityEngine_Shader_GetPropertyNameId();

		//System.Int32 UnityEngine.Shader::Internal_FindPassTagValue(System.Int32,System.Int32)
		void Register_UnityEngine_Shader_Internal_FindPassTagValue();
		Register_UnityEngine_Shader_Internal_FindPassTagValue();

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//System.Int32 UnityEngine.Shader::TagToID(System.String)
		void Register_UnityEngine_Shader_TagToID();
		Register_UnityEngine_Shader_TagToID();

		//System.Int32 UnityEngine.Shader::get_globalMaximumLOD()
		void Register_UnityEngine_Shader_get_globalMaximumLOD();
		Register_UnityEngine_Shader_get_globalMaximumLOD();

		//System.Int32 UnityEngine.Shader::get_maximumLOD()
		void Register_UnityEngine_Shader_get_maximumLOD();
		Register_UnityEngine_Shader_get_maximumLOD();

		//System.Int32 UnityEngine.Shader::get_passCount()
		void Register_UnityEngine_Shader_get_passCount();
		Register_UnityEngine_Shader_get_passCount();

		//System.Int32 UnityEngine.Shader::get_renderQueue()
		void Register_UnityEngine_Shader_get_renderQueue();
		Register_UnityEngine_Shader_get_renderQueue();

		//System.Single UnityEngine.Shader::GetGlobalFloatImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalFloatImpl();
		Register_UnityEngine_Shader_GetGlobalFloatImpl();

		//System.Single[] UnityEngine.Shader::GetGlobalFloatArrayImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalFloatArrayImpl();
		Register_UnityEngine_Shader_GetGlobalFloatArrayImpl();

		//System.String UnityEngine.Shader::GetPropertyDescription(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyDescription();
		Register_UnityEngine_Shader_GetPropertyDescription();

		//System.String UnityEngine.Shader::GetPropertyName(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyName();
		Register_UnityEngine_Shader_GetPropertyName();

		//System.String UnityEngine.Shader::GetPropertyTextureDefaultName(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyTextureDefaultName();
		Register_UnityEngine_Shader_GetPropertyTextureDefaultName();

		//System.String UnityEngine.Shader::IDToTag(System.Int32)
		void Register_UnityEngine_Shader_IDToTag();
		Register_UnityEngine_Shader_IDToTag();

		//System.String UnityEngine.Shader::get_globalRenderPipeline()
		void Register_UnityEngine_Shader_get_globalRenderPipeline();
		Register_UnityEngine_Shader_get_globalRenderPipeline();

		//System.String[] UnityEngine.Shader::GetPropertyAttributes(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyAttributes();
		Register_UnityEngine_Shader_GetPropertyAttributes();

		//System.Void UnityEngine.Shader::DisableKeyword(System.String)
		void Register_UnityEngine_Shader_DisableKeyword();
		Register_UnityEngine_Shader_DisableKeyword();

		//System.Void UnityEngine.Shader::EnableKeyword(System.String)
		void Register_UnityEngine_Shader_EnableKeyword();
		Register_UnityEngine_Shader_EnableKeyword();

		//System.Void UnityEngine.Shader::ExtractGlobalFloatArrayImpl(System.Int32,System.Single[])
		void Register_UnityEngine_Shader_ExtractGlobalFloatArrayImpl();
		Register_UnityEngine_Shader_ExtractGlobalFloatArrayImpl();

		//System.Void UnityEngine.Shader::ExtractGlobalMatrixArrayImpl(System.Int32,UnityEngine.Matrix4x4[])
		void Register_UnityEngine_Shader_ExtractGlobalMatrixArrayImpl();
		Register_UnityEngine_Shader_ExtractGlobalMatrixArrayImpl();

		//System.Void UnityEngine.Shader::ExtractGlobalVectorArrayImpl(System.Int32,UnityEngine.Vector4[])
		void Register_UnityEngine_Shader_ExtractGlobalVectorArrayImpl();
		Register_UnityEngine_Shader_ExtractGlobalVectorArrayImpl();

		//System.Void UnityEngine.Shader::GetGlobalMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Shader_GetGlobalMatrixImpl_Injected();
		Register_UnityEngine_Shader_GetGlobalMatrixImpl_Injected();

		//System.Void UnityEngine.Shader::GetGlobalVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Shader_GetGlobalVectorImpl_Injected();
		Register_UnityEngine_Shader_GetGlobalVectorImpl_Injected();

		//System.Void UnityEngine.Shader::GetPropertyDefaultValue_Injected(UnityEngine.Shader,System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Shader_GetPropertyDefaultValue_Injected();
		Register_UnityEngine_Shader_GetPropertyDefaultValue_Injected();

		//System.Void UnityEngine.Shader::SetGlobalBufferImpl(System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Shader_SetGlobalBufferImpl();
		Register_UnityEngine_Shader_SetGlobalBufferImpl();

		//System.Void UnityEngine.Shader::SetGlobalConstantBufferImpl(System.Int32,UnityEngine.ComputeBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Shader_SetGlobalConstantBufferImpl();
		Register_UnityEngine_Shader_SetGlobalConstantBufferImpl();

		//System.Void UnityEngine.Shader::SetGlobalConstantGraphicsBufferImpl(System.Int32,UnityEngine.GraphicsBuffer,System.Int32,System.Int32)
		void Register_UnityEngine_Shader_SetGlobalConstantGraphicsBufferImpl();
		Register_UnityEngine_Shader_SetGlobalConstantGraphicsBufferImpl();

		//System.Void UnityEngine.Shader::SetGlobalFloatArrayImpl(System.Int32,System.Single[],System.Int32)
		void Register_UnityEngine_Shader_SetGlobalFloatArrayImpl();
		Register_UnityEngine_Shader_SetGlobalFloatArrayImpl();

		//System.Void UnityEngine.Shader::SetGlobalFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Shader_SetGlobalFloatImpl();
		Register_UnityEngine_Shader_SetGlobalFloatImpl();

		//System.Void UnityEngine.Shader::SetGlobalGraphicsBufferImpl(System.Int32,UnityEngine.GraphicsBuffer)
		void Register_UnityEngine_Shader_SetGlobalGraphicsBufferImpl();
		Register_UnityEngine_Shader_SetGlobalGraphicsBufferImpl();

		//System.Void UnityEngine.Shader::SetGlobalMatrixArrayImpl(System.Int32,UnityEngine.Matrix4x4[],System.Int32)
		void Register_UnityEngine_Shader_SetGlobalMatrixArrayImpl();
		Register_UnityEngine_Shader_SetGlobalMatrixArrayImpl();

		//System.Void UnityEngine.Shader::SetGlobalMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Shader_SetGlobalMatrixImpl_Injected();
		Register_UnityEngine_Shader_SetGlobalMatrixImpl_Injected();

		//System.Void UnityEngine.Shader::SetGlobalRenderTextureImpl(System.Int32,UnityEngine.RenderTexture,UnityEngine.Rendering.RenderTextureSubElement)
		void Register_UnityEngine_Shader_SetGlobalRenderTextureImpl();
		Register_UnityEngine_Shader_SetGlobalRenderTextureImpl();

		//System.Void UnityEngine.Shader::SetGlobalTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Shader_SetGlobalTextureImpl();
		Register_UnityEngine_Shader_SetGlobalTextureImpl();

		//System.Void UnityEngine.Shader::SetGlobalVectorArrayImpl(System.Int32,UnityEngine.Vector4[],System.Int32)
		void Register_UnityEngine_Shader_SetGlobalVectorArrayImpl();
		Register_UnityEngine_Shader_SetGlobalVectorArrayImpl();

		//System.Void UnityEngine.Shader::SetGlobalVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Shader_SetGlobalVectorImpl_Injected();
		Register_UnityEngine_Shader_SetGlobalVectorImpl_Injected();

		//System.Void UnityEngine.Shader::WarmupAllShaders()
		void Register_UnityEngine_Shader_WarmupAllShaders();
		Register_UnityEngine_Shader_WarmupAllShaders();

		//System.Void UnityEngine.Shader::set_globalMaximumLOD(System.Int32)
		void Register_UnityEngine_Shader_set_globalMaximumLOD();
		Register_UnityEngine_Shader_set_globalMaximumLOD();

		//System.Void UnityEngine.Shader::set_globalRenderPipeline(System.String)
		void Register_UnityEngine_Shader_set_globalRenderPipeline();
		Register_UnityEngine_Shader_set_globalRenderPipeline();

		//System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
		void Register_UnityEngine_Shader_set_maximumLOD();
		Register_UnityEngine_Shader_set_maximumLOD();

		//UnityEngine.DisableBatchingType UnityEngine.Shader::get_disableBatching()
		void Register_UnityEngine_Shader_get_disableBatching();
		Register_UnityEngine_Shader_get_disableBatching();

		//UnityEngine.Matrix4x4[] UnityEngine.Shader::GetGlobalMatrixArrayImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalMatrixArrayImpl();
		Register_UnityEngine_Shader_GetGlobalMatrixArrayImpl();

		//UnityEngine.Rendering.ShaderPropertyFlags UnityEngine.Shader::GetPropertyFlags(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyFlags();
		Register_UnityEngine_Shader_GetPropertyFlags();

		//UnityEngine.Rendering.ShaderPropertyType UnityEngine.Shader::GetPropertyType(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyType();
		Register_UnityEngine_Shader_GetPropertyType();

		//UnityEngine.Rendering.TextureDimension UnityEngine.Shader::GetPropertyTextureDimension(UnityEngine.Shader,System.Int32)
		void Register_UnityEngine_Shader_GetPropertyTextureDimension();
		Register_UnityEngine_Shader_GetPropertyTextureDimension();

		//UnityEngine.Shader UnityEngine.Shader::FindBuiltin(System.String)
		void Register_UnityEngine_Shader_FindBuiltin();
		Register_UnityEngine_Shader_FindBuiltin();

		//UnityEngine.Shader UnityEngine.Shader::GetDependency(System.String)
		void Register_UnityEngine_Shader_GetDependency();
		Register_UnityEngine_Shader_GetDependency();

		//UnityEngine.Texture UnityEngine.Shader::GetGlobalTextureImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalTextureImpl();
		Register_UnityEngine_Shader_GetGlobalTextureImpl();

		//UnityEngine.Vector4[] UnityEngine.Shader::GetGlobalVectorArrayImpl(System.Int32)
		void Register_UnityEngine_Shader_GetGlobalVectorArrayImpl();
		Register_UnityEngine_Shader_GetGlobalVectorArrayImpl();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LegacyUserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LegacyUserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LegacyUserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserGameID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserGameID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();

		//UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();

		//System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

	//Start Registrations for type : UnityEngine.SortingLayer

		//System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
		void Register_UnityEngine_SortingLayer_GetLayerValueFromID();
		Register_UnityEngine_SortingLayer_GetLayerValueFromID();

		//System.Int32[] UnityEngine.SortingLayer::GetSortingLayerIDsInternal()
		void Register_UnityEngine_SortingLayer_GetSortingLayerIDsInternal();
		Register_UnityEngine_SortingLayer_GetSortingLayerIDsInternal();

		//System.String UnityEngine.SortingLayer::IDToName(System.Int32)
		void Register_UnityEngine_SortingLayer_IDToName();
		Register_UnityEngine_SortingLayer_IDToName();

	//End Registrations for type : UnityEngine.SortingLayer

	//Start Registrations for type : UnityEngine.SphereCollider

		//System.Single UnityEngine.SphereCollider::get_radius()
		void Register_UnityEngine_SphereCollider_get_radius();
		Register_UnityEngine_SphereCollider_get_radius();

		//System.Void UnityEngine.SphereCollider::get_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_SphereCollider_get_center_Injected();
		Register_UnityEngine_SphereCollider_get_center_Injected();

		//System.Void UnityEngine.SphereCollider::set_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_SphereCollider_set_center_Injected();
		Register_UnityEngine_SphereCollider_set_center_Injected();

		//System.Void UnityEngine.SphereCollider::set_radius(System.Single)
		void Register_UnityEngine_SphereCollider_set_radius();
		Register_UnityEngine_SphereCollider_set_radius();

	//End Registrations for type : UnityEngine.SphereCollider

	//Start Registrations for type : UnityEngine.Sprite

		//System.Int32 UnityEngine.Sprite::GetPacked()
		void Register_UnityEngine_Sprite_GetPacked();
		Register_UnityEngine_Sprite_GetPacked();

		//System.Int32 UnityEngine.Sprite::GetPackingMode()
		void Register_UnityEngine_Sprite_GetPackingMode();
		Register_UnityEngine_Sprite_GetPackingMode();

		//System.Int32 UnityEngine.Sprite::GetPackingRotation()
		void Register_UnityEngine_Sprite_GetPackingRotation();
		Register_UnityEngine_Sprite_GetPackingRotation();

		//System.Int32 UnityEngine.Sprite::GetPhysicsShapeCount()
		void Register_UnityEngine_Sprite_GetPhysicsShapeCount();
		Register_UnityEngine_Sprite_GetPhysicsShapeCount();

		//System.Int32 UnityEngine.Sprite::Internal_GetPhysicsShapePointCount(System.Int32)
		void Register_UnityEngine_Sprite_Internal_GetPhysicsShapePointCount();
		Register_UnityEngine_Sprite_Internal_GetPhysicsShapePointCount();

		//System.Single UnityEngine.Sprite::get_pixelsPerUnit()
		void Register_UnityEngine_Sprite_get_pixelsPerUnit();
		Register_UnityEngine_Sprite_get_pixelsPerUnit();

		//System.Single UnityEngine.Sprite::get_spriteAtlasTextureScale()
		void Register_UnityEngine_Sprite_get_spriteAtlasTextureScale();
		Register_UnityEngine_Sprite_get_spriteAtlasTextureScale();

		//System.UInt16[] UnityEngine.Sprite::get_triangles()
		void Register_UnityEngine_Sprite_get_triangles();
		Register_UnityEngine_Sprite_get_triangles();

		//System.Void UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetInnerUVs_Injected();
		Register_UnityEngine_Sprite_GetInnerUVs_Injected();

		//System.Void UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetOuterUVs_Injected();
		Register_UnityEngine_Sprite_GetOuterUVs_Injected();

		//System.Void UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_GetPadding_Injected();
		Register_UnityEngine_Sprite_GetPadding_Injected();

		//System.Void UnityEngine.Sprite::GetPhysicsShapeImpl(UnityEngine.Sprite,System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
		void Register_UnityEngine_Sprite_GetPhysicsShapeImpl();
		Register_UnityEngine_Sprite_GetPhysicsShapeImpl();

		//System.Void UnityEngine.Sprite::GetTextureRectOffset_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Sprite_GetTextureRectOffset_Injected();
		Register_UnityEngine_Sprite_GetTextureRectOffset_Injected();

		//System.Void UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_GetTextureRect_Injected();
		Register_UnityEngine_Sprite_GetTextureRect_Injected();

		//System.Void UnityEngine.Sprite::OverrideGeometry(UnityEngine.Vector2[],System.UInt16[])
		void Register_UnityEngine_Sprite_OverrideGeometry();
		Register_UnityEngine_Sprite_OverrideGeometry();

		//System.Void UnityEngine.Sprite::OverridePhysicsShape(UnityEngine.Sprite,UnityEngine.Vector2[],System.Int32)
		void Register_UnityEngine_Sprite_OverridePhysicsShape();
		Register_UnityEngine_Sprite_OverridePhysicsShape();

		//System.Void UnityEngine.Sprite::OverridePhysicsShapeCount(UnityEngine.Sprite,System.Int32)
		void Register_UnityEngine_Sprite_OverridePhysicsShapeCount();
		Register_UnityEngine_Sprite_OverridePhysicsShapeCount();

		//System.Void UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_get_border_Injected();
		Register_UnityEngine_Sprite_get_border_Injected();

		//System.Void UnityEngine.Sprite::get_bounds_Injected(UnityEngine.Bounds&)
		void Register_UnityEngine_Sprite_get_bounds_Injected();
		Register_UnityEngine_Sprite_get_bounds_Injected();

		//System.Void UnityEngine.Sprite::get_pivot_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Sprite_get_pivot_Injected();
		Register_UnityEngine_Sprite_get_pivot_Injected();

		//System.Void UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_get_rect_Injected();
		Register_UnityEngine_Sprite_get_rect_Injected();

		//UnityEngine.Sprite UnityEngine.Sprite::CreateSpriteWithoutTextureScripting_Injected(UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,UnityEngine.Texture2D)
		void Register_UnityEngine_Sprite_CreateSpriteWithoutTextureScripting_Injected();
		Register_UnityEngine_Sprite_CreateSpriteWithoutTextureScripting_Injected();

		//UnityEngine.Sprite UnityEngine.Sprite::CreateSprite_Injected(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&,System.Boolean)
		void Register_UnityEngine_Sprite_CreateSprite_Injected();
		Register_UnityEngine_Sprite_CreateSprite_Injected();

		//UnityEngine.Texture2D UnityEngine.Sprite::GetSecondaryTexture(System.Int32)
		void Register_UnityEngine_Sprite_GetSecondaryTexture();
		Register_UnityEngine_Sprite_GetSecondaryTexture();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
		void Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();
		Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
		void Register_UnityEngine_Sprite_get_texture();
		Register_UnityEngine_Sprite_get_texture();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_uv()
		void Register_UnityEngine_Sprite_get_uv();
		Register_UnityEngine_Sprite_get_uv();

		//UnityEngine.Vector2[] UnityEngine.Sprite::get_vertices()
		void Register_UnityEngine_Sprite_get_vertices();
		Register_UnityEngine_Sprite_get_vertices();

	//End Registrations for type : UnityEngine.Sprite

	//Start Registrations for type : UnityEngine.SpriteRenderer

		//System.Boolean UnityEngine.SpriteRenderer::get_flipX()
		void Register_UnityEngine_SpriteRenderer_get_flipX();
		Register_UnityEngine_SpriteRenderer_get_flipX();

		//System.Boolean UnityEngine.SpriteRenderer::get_flipY()
		void Register_UnityEngine_SpriteRenderer_get_flipY();
		Register_UnityEngine_SpriteRenderer_get_flipY();

		//System.Boolean UnityEngine.SpriteRenderer::get_shouldSupportTiling()
		void Register_UnityEngine_SpriteRenderer_get_shouldSupportTiling();
		Register_UnityEngine_SpriteRenderer_get_shouldSupportTiling();

		//System.Single UnityEngine.SpriteRenderer::get_adaptiveModeThreshold()
		void Register_UnityEngine_SpriteRenderer_get_adaptiveModeThreshold();
		Register_UnityEngine_SpriteRenderer_get_adaptiveModeThreshold();

		//System.Void UnityEngine.SpriteRenderer::Internal_GetSpriteBounds_Injected(UnityEngine.SpriteDrawMode,UnityEngine.Bounds&)
		void Register_UnityEngine_SpriteRenderer_Internal_GetSpriteBounds_Injected();
		Register_UnityEngine_SpriteRenderer_Internal_GetSpriteBounds_Injected();

		//System.Void UnityEngine.SpriteRenderer::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_SpriteRenderer_get_color_Injected();
		Register_UnityEngine_SpriteRenderer_get_color_Injected();

		//System.Void UnityEngine.SpriteRenderer::get_size_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_SpriteRenderer_get_size_Injected();
		Register_UnityEngine_SpriteRenderer_get_size_Injected();

		//System.Void UnityEngine.SpriteRenderer::set_adaptiveModeThreshold(System.Single)
		void Register_UnityEngine_SpriteRenderer_set_adaptiveModeThreshold();
		Register_UnityEngine_SpriteRenderer_set_adaptiveModeThreshold();

		//System.Void UnityEngine.SpriteRenderer::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_SpriteRenderer_set_color_Injected();
		Register_UnityEngine_SpriteRenderer_set_color_Injected();

		//System.Void UnityEngine.SpriteRenderer::set_drawMode(UnityEngine.SpriteDrawMode)
		void Register_UnityEngine_SpriteRenderer_set_drawMode();
		Register_UnityEngine_SpriteRenderer_set_drawMode();

		//System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
		void Register_UnityEngine_SpriteRenderer_set_flipX();
		Register_UnityEngine_SpriteRenderer_set_flipX();

		//System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
		void Register_UnityEngine_SpriteRenderer_set_flipY();
		Register_UnityEngine_SpriteRenderer_set_flipY();

		//System.Void UnityEngine.SpriteRenderer::set_maskInteraction(UnityEngine.SpriteMaskInteraction)
		void Register_UnityEngine_SpriteRenderer_set_maskInteraction();
		Register_UnityEngine_SpriteRenderer_set_maskInteraction();

		//System.Void UnityEngine.SpriteRenderer::set_size_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_SpriteRenderer_set_size_Injected();
		Register_UnityEngine_SpriteRenderer_set_size_Injected();

		//System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
		void Register_UnityEngine_SpriteRenderer_set_sprite();
		Register_UnityEngine_SpriteRenderer_set_sprite();

		//System.Void UnityEngine.SpriteRenderer::set_spriteSortPoint(UnityEngine.SpriteSortPoint)
		void Register_UnityEngine_SpriteRenderer_set_spriteSortPoint();
		Register_UnityEngine_SpriteRenderer_set_spriteSortPoint();

		//System.Void UnityEngine.SpriteRenderer::set_tileMode(UnityEngine.SpriteTileMode)
		void Register_UnityEngine_SpriteRenderer_set_tileMode();
		Register_UnityEngine_SpriteRenderer_set_tileMode();

		//UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
		void Register_UnityEngine_SpriteRenderer_get_sprite();
		Register_UnityEngine_SpriteRenderer_get_sprite();

		//UnityEngine.SpriteDrawMode UnityEngine.SpriteRenderer::get_drawMode()
		void Register_UnityEngine_SpriteRenderer_get_drawMode();
		Register_UnityEngine_SpriteRenderer_get_drawMode();

		//UnityEngine.SpriteMaskInteraction UnityEngine.SpriteRenderer::get_maskInteraction()
		void Register_UnityEngine_SpriteRenderer_get_maskInteraction();
		Register_UnityEngine_SpriteRenderer_get_maskInteraction();

		//UnityEngine.SpriteSortPoint UnityEngine.SpriteRenderer::get_spriteSortPoint()
		void Register_UnityEngine_SpriteRenderer_get_spriteSortPoint();
		Register_UnityEngine_SpriteRenderer_get_spriteSortPoint();

		//UnityEngine.SpriteTileMode UnityEngine.SpriteRenderer::get_tileMode()
		void Register_UnityEngine_SpriteRenderer_get_tileMode();
		Register_UnityEngine_SpriteRenderer_get_tileMode();

	//End Registrations for type : UnityEngine.SpriteRenderer

	//Start Registrations for type : UnityEngine.SubsystemBindings

		//System.Void UnityEngine.SubsystemBindings::DestroySubsystem(System.IntPtr)
		void Register_UnityEngine_SubsystemBindings_DestroySubsystem();
		Register_UnityEngine_SubsystemBindings_DestroySubsystem();

	//End Registrations for type : UnityEngine.SubsystemBindings

	//Start Registrations for type : UnityEngine.SubsystemDescriptorBindings

		//System.IntPtr UnityEngine.SubsystemDescriptorBindings::Create(System.IntPtr)
		void Register_UnityEngine_SubsystemDescriptorBindings_Create();
		Register_UnityEngine_SubsystemDescriptorBindings_Create();

		//System.String UnityEngine.SubsystemDescriptorBindings::GetId(System.IntPtr)
		void Register_UnityEngine_SubsystemDescriptorBindings_GetId();
		Register_UnityEngine_SubsystemDescriptorBindings_GetId();

	//End Registrations for type : UnityEngine.SubsystemDescriptorBindings

	//Start Registrations for type : UnityEngine.SubsystemManager

		//System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
		void Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();
		Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();

	//End Registrations for type : UnityEngine.SubsystemManager

	//Start Registrations for type : UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

		//System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
		void Register_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_ReportSingleSubsystemAnalytics();
		Register_UnityEngine_SubsystemsImplementation_SubsystemDescriptorStore_ReportSingleSubsystemAnalytics();

	//End Registrations for type : UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::GetGraphicsUVStartsAtTop()
		void Register_UnityEngine_SystemInfo_GetGraphicsUVStartsAtTop();
		Register_UnityEngine_SystemInfo_GetGraphicsUVStartsAtTop();

		//System.Boolean UnityEngine.SystemInfo::HasHiddenSurfaceRemovalOnGPU()
		void Register_UnityEngine_SystemInfo_HasHiddenSurfaceRemovalOnGPU();
		Register_UnityEngine_SystemInfo_HasHiddenSurfaceRemovalOnGPU();

		//System.Boolean UnityEngine.SystemInfo::HasRenderTextureNative(UnityEngine.RenderTextureFormat)
		void Register_UnityEngine_SystemInfo_HasRenderTextureNative();
		Register_UnityEngine_SystemInfo_HasRenderTextureNative();

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::IsGyroAvailable()
		void Register_UnityEngine_SystemInfo_IsGyroAvailable();
		Register_UnityEngine_SystemInfo_IsGyroAvailable();

		//System.Boolean UnityEngine.SystemInfo::Supports3DRenderTextures()
		void Register_UnityEngine_SystemInfo_Supports3DRenderTextures();
		Register_UnityEngine_SystemInfo_Supports3DRenderTextures();

		//System.Boolean UnityEngine.SystemInfo::Supports3DTextures()
		void Register_UnityEngine_SystemInfo_Supports3DTextures();
		Register_UnityEngine_SystemInfo_Supports3DTextures();

		//System.Boolean UnityEngine.SystemInfo::SupportsComputeShaders()
		void Register_UnityEngine_SystemInfo_SupportsComputeShaders();
		Register_UnityEngine_SystemInfo_SupportsComputeShaders();

		//System.Boolean UnityEngine.SystemInfo::SupportsGPUFence()
		void Register_UnityEngine_SystemInfo_SupportsGPUFence();
		Register_UnityEngine_SystemInfo_SupportsGPUFence();

		//System.Boolean UnityEngine.SystemInfo::SupportsMotionVectors()
		void Register_UnityEngine_SystemInfo_SupportsMotionVectors();
		Register_UnityEngine_SystemInfo_SupportsMotionVectors();

		//System.Boolean UnityEngine.SystemInfo::SupportsMultisampleAutoResolve()
		void Register_UnityEngine_SystemInfo_SupportsMultisampleAutoResolve();
		Register_UnityEngine_SystemInfo_SupportsMultisampleAutoResolve();

		//System.Boolean UnityEngine.SystemInfo::SupportsMultiview()
		void Register_UnityEngine_SystemInfo_SupportsMultiview();
		Register_UnityEngine_SystemInfo_SupportsMultiview();

		//System.Boolean UnityEngine.SystemInfo::SupportsShadows()
		void Register_UnityEngine_SystemInfo_SupportsShadows();
		Register_UnityEngine_SystemInfo_SupportsShadows();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//System.Boolean UnityEngine.SystemInfo::UsesLoadStoreActions()
		void Register_UnityEngine_SystemInfo_UsesLoadStoreActions();
		Register_UnityEngine_SystemInfo_UsesLoadStoreActions();

		//System.Boolean UnityEngine.SystemInfo::UsesReversedZBuffer()
		void Register_UnityEngine_SystemInfo_UsesReversedZBuffer();
		Register_UnityEngine_SystemInfo_UsesReversedZBuffer();

		//System.Int32 UnityEngine.SystemInfo::GetGraphicsShaderLevel()
		void Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();
		Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();

		//System.Int32 UnityEngine.SystemInfo::GetRenderTextureSupportedMSAASampleCount_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_SystemInfo_GetRenderTextureSupportedMSAASampleCount_Injected();
		Register_UnityEngine_SystemInfo_GetRenderTextureSupportedMSAASampleCount_Injected();

		//System.Int32 UnityEngine.SystemInfo::SupportedRenderTargetCount()
		void Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();
		Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();

		//System.Int32 UnityEngine.SystemInfo::SupportsMultisampledTextures()
		void Register_UnityEngine_SystemInfo_SupportsMultisampledTextures();
		Register_UnityEngine_SystemInfo_SupportsMultisampledTextures();

		//System.String UnityEngine.SystemInfo::GetDeviceUniqueIdentifier()
		void Register_UnityEngine_SystemInfo_GetDeviceUniqueIdentifier();
		Register_UnityEngine_SystemInfo_GetDeviceUniqueIdentifier();

		//System.String UnityEngine.SystemInfo::GetGraphicsDeviceVendor()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceVendor();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceVendor();

		//System.String UnityEngine.SystemInfo::GetProcessorType()
		void Register_UnityEngine_SystemInfo_GetProcessorType();
		Register_UnityEngine_SystemInfo_GetProcessorType();

		//UnityEngine.DeviceType UnityEngine.SystemInfo::GetDeviceType()
		void Register_UnityEngine_SystemInfo_GetDeviceType();
		Register_UnityEngine_SystemInfo_GetDeviceType();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_GetCompatibleFormat();
		Register_UnityEngine_SystemInfo_GetCompatibleFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
		void Register_UnityEngine_SystemInfo_GetGraphicsFormat();
		Register_UnityEngine_SystemInfo_GetGraphicsFormat();

		//UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
		void Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();
		Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();

		//UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::GetCopyTextureSupport()
		void Register_UnityEngine_SystemInfo_GetCopyTextureSupport();
		Register_UnityEngine_SystemInfo_GetCopyTextureSupport();

		//UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::GetGraphicsDeviceType()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TextAsset

		//System.Byte[] UnityEngine.TextAsset::get_bytes()
		void Register_UnityEngine_TextAsset_get_bytes();
		Register_UnityEngine_TextAsset_get_bytes();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.TextCore.LowLevel.FontEngine

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphToTexture_Internal(System.UInt32,System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphToTexture_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphToTexture_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryAddGlyphsToTexture_Internal(System.UInt32[],System.Int32,UnityEngine.TextCore.LowLevel.GlyphPackingMode,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.GlyphRect[],System.Int32&,UnityEngine.TextCore.LowLevel.GlyphRenderMode,UnityEngine.Texture2D,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct[],System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphsToTexture_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryAddGlyphsToTexture_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithIndexValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithIndexValue_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithIndexValue_Internal();

		//System.Boolean UnityEngine.TextCore.LowLevel.FontEngine::TryGetGlyphWithUnicodeValue_Internal(System.UInt32,UnityEngine.TextCore.LowLevel.GlyphLoadFlags,UnityEngine.TextCore.LowLevel.GlyphMarshallingStruct&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithUnicodeValue_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_TryGetGlyphWithUnicodeValue_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetFaceInfo_Internal(UnityEngine.TextCore.FaceInfo&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetFaceInfo_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetFaceInfo_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphPairAdjustmentRecordsFromMarshallingArray(UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord[])
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphPairAdjustmentRecordsFromMarshallingArray();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphPairAdjustmentRecordsFromMarshallingArray();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::InitializeFontEngine_Internal()
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_InitializeFontEngine_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_InitializeFontEngine_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::LoadFontFace_With_Size_FromFont_Internal(UnityEngine.Font,System.Int32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_FromFont_Internal();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_LoadFontFace_With_Size_FromFont_Internal();

		//System.Int32 UnityEngine.TextCore.LowLevel.FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(System.UInt32[],System.Int32&)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes();

		//System.UInt32 UnityEngine.TextCore.LowLevel.FontEngine::GetGlyphIndex(System.UInt32)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphIndex();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_GetGlyphIndex();

		//System.Void UnityEngine.TextCore.LowLevel.FontEngine::ResetAtlasTexture(UnityEngine.Texture2D)
		void Register_UnityEngine_TextCore_LowLevel_FontEngine_ResetAtlasTexture();
		Register_UnityEngine_TextCore_LowLevel_FontEngine_ResetAtlasTexture();

	//End Registrations for type : UnityEngine.TextCore.LowLevel.FontEngine

	//Start Registrations for type : UnityEngine.TextGenerator

		//System.Boolean UnityEngine.TextGenerator::Populate_Internal_Injected(System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
		void Register_UnityEngine_TextGenerator_Populate_Internal_Injected();
		Register_UnityEngine_TextGenerator_Populate_Internal_Injected();

		//System.Int32 UnityEngine.TextGenerator::get_characterCount()
		void Register_UnityEngine_TextGenerator_get_characterCount();
		Register_UnityEngine_TextGenerator_get_characterCount();

		//System.Int32 UnityEngine.TextGenerator::get_lineCount()
		void Register_UnityEngine_TextGenerator_get_lineCount();
		Register_UnityEngine_TextGenerator_get_lineCount();

		//System.IntPtr UnityEngine.TextGenerator::Internal_Create()
		void Register_UnityEngine_TextGenerator_Internal_Create();
		Register_UnityEngine_TextGenerator_Internal_Create();

		//System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetCharactersInternal();
		Register_UnityEngine_TextGenerator_GetCharactersInternal();

		//System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetLinesInternal();
		Register_UnityEngine_TextGenerator_GetLinesInternal();

		//System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetVerticesInternal();
		Register_UnityEngine_TextGenerator_GetVerticesInternal();

		//System.Void UnityEngine.TextGenerator::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TextGenerator_Internal_Destroy();
		Register_UnityEngine_TextGenerator_Internal_Destroy();

		//System.Void UnityEngine.TextGenerator::get_rectExtents_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_TextGenerator_get_rectExtents_Injected();
		Register_UnityEngine_TextGenerator_get_rectExtents_Injected();

	//End Registrations for type : UnityEngine.TextGenerator

	//Start Registrations for type : UnityEngine.Texture

		//System.Boolean UnityEngine.Texture::get_isReadable()
		void Register_UnityEngine_Texture_get_isReadable();
		Register_UnityEngine_Texture_get_isReadable();

		//System.Int32 UnityEngine.Texture::GetDataHeight()
		void Register_UnityEngine_Texture_GetDataHeight();
		Register_UnityEngine_Texture_GetDataHeight();

		//System.Int32 UnityEngine.Texture::GetDataWidth()
		void Register_UnityEngine_Texture_GetDataWidth();
		Register_UnityEngine_Texture_GetDataWidth();

		//System.Int32 UnityEngine.Texture::GetPixelDataOffset(System.Int32,System.Int32)
		void Register_UnityEngine_Texture_GetPixelDataOffset();
		Register_UnityEngine_Texture_GetPixelDataOffset();

		//System.Int32 UnityEngine.Texture::GetPixelDataSize(System.Int32,System.Int32)
		void Register_UnityEngine_Texture_GetPixelDataSize();
		Register_UnityEngine_Texture_GetPixelDataSize();

		//System.Int32 UnityEngine.Texture::Internal_GetActiveTextureColorSpace()
		void Register_UnityEngine_Texture_Internal_GetActiveTextureColorSpace();
		Register_UnityEngine_Texture_Internal_GetActiveTextureColorSpace();

		//System.Int32 UnityEngine.Texture::get_mipmapCount()
		void Register_UnityEngine_Texture_get_mipmapCount();
		Register_UnityEngine_Texture_get_mipmapCount();

		//System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Texture_get_texelSize_Injected();
		Register_UnityEngine_Texture_get_texelSize_Injected();

		//System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
		void Register_UnityEngine_Texture_set_anisoLevel();
		Register_UnityEngine_Texture_set_anisoLevel();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_mipMapBias(System.Single)
		void Register_UnityEngine_Texture_set_mipMapBias();
		Register_UnityEngine_Texture_set_mipMapBias();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

		//UnityEngine.Rendering.TextureDimension UnityEngine.Texture::GetDimension()
		void Register_UnityEngine_Texture_GetDimension();
		Register_UnityEngine_Texture_GetDimension();

		//UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
		void Register_UnityEngine_Texture_get_wrapMode();
		Register_UnityEngine_Texture_get_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2D::IsRequestedMipmapLevelLoaded()
		void Register_UnityEngine_Texture2D_IsRequestedMipmapLevelLoaded();
		Register_UnityEngine_Texture2D_IsRequestedMipmapLevelLoaded();

		//System.Boolean UnityEngine.Texture2D::LoadRawTextureDataImpl(System.IntPtr,System.Int32)
		void Register_UnityEngine_Texture2D_LoadRawTextureDataImpl();
		Register_UnityEngine_Texture2D_LoadRawTextureDataImpl();

		//System.Boolean UnityEngine.Texture2D::LoadRawTextureDataImplArray(System.Byte[])
		void Register_UnityEngine_Texture2D_LoadRawTextureDataImplArray();
		Register_UnityEngine_Texture2D_LoadRawTextureDataImplArray();

		//System.Boolean UnityEngine.Texture2D::ResizeImpl(System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_ResizeImpl();
		Register_UnityEngine_Texture2D_ResizeImpl();

		//System.Boolean UnityEngine.Texture2D::ResizeWithFormatImpl(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
		void Register_UnityEngine_Texture2D_ResizeWithFormatImpl();
		Register_UnityEngine_Texture2D_ResizeWithFormatImpl();

		//System.Boolean UnityEngine.Texture2D::SetPixelDataImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelDataImpl();
		Register_UnityEngine_Texture2D_SetPixelDataImpl();

		//System.Boolean UnityEngine.Texture2D::SetPixelDataImplArray(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelDataImplArray();
		Register_UnityEngine_Texture2D_SetPixelDataImplArray();

		//System.Boolean UnityEngine.Texture2D::get_isPreProcessed()
		void Register_UnityEngine_Texture2D_get_isPreProcessed();
		Register_UnityEngine_Texture2D_get_isPreProcessed();

		//System.Boolean UnityEngine.Texture2D::get_isReadable()
		void Register_UnityEngine_Texture2D_get_isReadable();
		Register_UnityEngine_Texture2D_get_isReadable();

		//System.Boolean UnityEngine.Texture2D::get_loadAllMips()
		void Register_UnityEngine_Texture2D_get_loadAllMips();
		Register_UnityEngine_Texture2D_get_loadAllMips();

		//System.Boolean UnityEngine.Texture2D::get_streamingMipmaps()
		void Register_UnityEngine_Texture2D_get_streamingMipmaps();
		Register_UnityEngine_Texture2D_get_streamingMipmaps();

		//System.Boolean UnityEngine.Texture2D::get_vtOnly()
		void Register_UnityEngine_Texture2D_get_vtOnly();
		Register_UnityEngine_Texture2D_get_vtOnly();

		//System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
		void Register_UnityEngine_Texture2D_GetRawTextureData();
		Register_UnityEngine_Texture2D_GetRawTextureData();

		//System.Int32 UnityEngine.Texture2D::get_calculatedMipmapLevel()
		void Register_UnityEngine_Texture2D_get_calculatedMipmapLevel();
		Register_UnityEngine_Texture2D_get_calculatedMipmapLevel();

		//System.Int32 UnityEngine.Texture2D::get_desiredMipmapLevel()
		void Register_UnityEngine_Texture2D_get_desiredMipmapLevel();
		Register_UnityEngine_Texture2D_get_desiredMipmapLevel();

		//System.Int32 UnityEngine.Texture2D::get_loadedMipmapLevel()
		void Register_UnityEngine_Texture2D_get_loadedMipmapLevel();
		Register_UnityEngine_Texture2D_get_loadedMipmapLevel();

		//System.Int32 UnityEngine.Texture2D::get_loadingMipmapLevel()
		void Register_UnityEngine_Texture2D_get_loadingMipmapLevel();
		Register_UnityEngine_Texture2D_get_loadingMipmapLevel();

		//System.Int32 UnityEngine.Texture2D::get_minimumMipmapLevel()
		void Register_UnityEngine_Texture2D_get_minimumMipmapLevel();
		Register_UnityEngine_Texture2D_get_minimumMipmapLevel();

		//System.Int32 UnityEngine.Texture2D::get_requestedMipmapLevel()
		void Register_UnityEngine_Texture2D_get_requestedMipmapLevel();
		Register_UnityEngine_Texture2D_get_requestedMipmapLevel();

		//System.Int32 UnityEngine.Texture2D::get_streamingMipmapsPriority()
		void Register_UnityEngine_Texture2D_get_streamingMipmapsPriority();
		Register_UnityEngine_Texture2D_get_streamingMipmapsPriority();

		//System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
		void Register_UnityEngine_Texture2D_GetRawImageDataSize();
		Register_UnityEngine_Texture2D_GetRawImageDataSize();

		//System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
		void Register_UnityEngine_Texture2D_GetWritableImageData();
		Register_UnityEngine_Texture2D_GetWritableImageData();

		//System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture2D_ApplyImpl();
		Register_UnityEngine_Texture2D_ApplyImpl();

		//System.Void UnityEngine.Texture2D::ClearMinimumMipmapLevel()
		void Register_UnityEngine_Texture2D_ClearMinimumMipmapLevel();
		Register_UnityEngine_Texture2D_ClearMinimumMipmapLevel();

		//System.Void UnityEngine.Texture2D::ClearRequestedMipmapLevel()
		void Register_UnityEngine_Texture2D_ClearRequestedMipmapLevel();
		Register_UnityEngine_Texture2D_ClearRequestedMipmapLevel();

		//System.Void UnityEngine.Texture2D::Compress(System.Boolean)
		void Register_UnityEngine_Texture2D_Compress();
		Register_UnityEngine_Texture2D_Compress();

		//System.Void UnityEngine.Texture2D::GenerateAtlasImpl(UnityEngine.Vector2[],System.Int32,System.Int32,UnityEngine.Rect[])
		void Register_UnityEngine_Texture2D_GenerateAtlasImpl();
		Register_UnityEngine_Texture2D_GenerateAtlasImpl();

		//System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();
		Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();

		//System.Void UnityEngine.Texture2D::GetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_GetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_GetPixelImpl_Injected();

		//System.Void UnityEngine.Texture2D::ReadPixelsImpl_Injected(UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
		void Register_UnityEngine_Texture2D_ReadPixelsImpl_Injected();
		Register_UnityEngine_Texture2D_ReadPixelsImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
		void Register_UnityEngine_Texture2D_SetAllPixels32();
		Register_UnityEngine_Texture2D_SetAllPixels32();

		//System.Void UnityEngine.Texture2D::SetBlockOfPixels32(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32[],System.Int32)
		void Register_UnityEngine_Texture2D_SetBlockOfPixels32();
		Register_UnityEngine_Texture2D_SetBlockOfPixels32();

		//System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelsImpl();
		Register_UnityEngine_Texture2D_SetPixelsImpl();

		//System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture2D_UpdateExternalTexture();
		Register_UnityEngine_Texture2D_UpdateExternalTexture();

		//System.Void UnityEngine.Texture2D::set_loadAllMips(System.Boolean)
		void Register_UnityEngine_Texture2D_set_loadAllMips();
		Register_UnityEngine_Texture2D_set_loadAllMips();

		//System.Void UnityEngine.Texture2D::set_minimumMipmapLevel(System.Int32)
		void Register_UnityEngine_Texture2D_set_minimumMipmapLevel();
		Register_UnityEngine_Texture2D_set_minimumMipmapLevel();

		//System.Void UnityEngine.Texture2D::set_requestedMipmapLevel(System.Int32)
		void Register_UnityEngine_Texture2D_set_requestedMipmapLevel();
		Register_UnityEngine_Texture2D_set_requestedMipmapLevel();

		//UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
		void Register_UnityEngine_Texture2D_GetPixels32();
		Register_UnityEngine_Texture2D_GetPixels32();

		//UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_GetPixels();
		Register_UnityEngine_Texture2D_GetPixels();

		//UnityEngine.Rect[] UnityEngine.Texture2D::PackTextures(UnityEngine.Texture2D[],System.Int32,System.Int32,System.Boolean)
		void Register_UnityEngine_Texture2D_PackTextures();
		Register_UnityEngine_Texture2D_PackTextures();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
		void Register_UnityEngine_Texture2D_get_blackTexture();
		Register_UnityEngine_Texture2D_get_blackTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_grayTexture()
		void Register_UnityEngine_Texture2D_get_grayTexture();
		Register_UnityEngine_Texture2D_get_grayTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_linearGrayTexture()
		void Register_UnityEngine_Texture2D_get_linearGrayTexture();
		Register_UnityEngine_Texture2D_get_linearGrayTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_normalTexture()
		void Register_UnityEngine_Texture2D_get_normalTexture();
		Register_UnityEngine_Texture2D_get_normalTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_redTexture()
		void Register_UnityEngine_Texture2D_get_redTexture();
		Register_UnityEngine_Texture2D_get_redTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
		void Register_UnityEngine_Texture2D_get_whiteTexture();
		Register_UnityEngine_Texture2D_get_whiteTexture();

		//UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
		void Register_UnityEngine_Texture2D_get_format();
		Register_UnityEngine_Texture2D_get_format();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2DArray::get_isReadable()
		void Register_UnityEngine_Texture2DArray_get_isReadable();
		Register_UnityEngine_Texture2DArray_get_isReadable();

		//System.Int32 UnityEngine.Texture2DArray::get_allSlices()
		void Register_UnityEngine_Texture2DArray_get_allSlices();
		Register_UnityEngine_Texture2DArray_get_allSlices();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture3D::get_isReadable()
		void Register_UnityEngine_Texture3D_get_isReadable();
		Register_UnityEngine_Texture3D_get_isReadable();

		//System.Int32 UnityEngine.Texture3D::get_depth()
		void Register_UnityEngine_Texture3D_get_depth();
		Register_UnityEngine_Texture3D_get_depth();

		//System.Void UnityEngine.Texture3D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture3D_ApplyImpl();
		Register_UnityEngine_Texture3D_ApplyImpl();

		//System.Void UnityEngine.Texture3D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture3D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture3D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture3D::SetPixels(UnityEngine.Color[],System.Int32)
		void Register_UnityEngine_Texture3D_SetPixels();
		Register_UnityEngine_Texture3D_SetPixels();

		//System.Void UnityEngine.Texture3D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture3D_UpdateExternalTexture();
		Register_UnityEngine_Texture3D_UpdateExternalTexture();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Time

		//System.Int32 UnityEngine.Time::get_frameCount()
		void Register_UnityEngine_Time_get_frameCount();
		Register_UnityEngine_Time_get_frameCount();

		//System.Int32 UnityEngine.Time::get_renderedFrameCount()
		void Register_UnityEngine_Time_get_renderedFrameCount();
		Register_UnityEngine_Time_get_renderedFrameCount();

		//System.Single UnityEngine.Time::get_deltaTime()
		void Register_UnityEngine_Time_get_deltaTime();
		Register_UnityEngine_Time_get_deltaTime();

		//System.Single UnityEngine.Time::get_fixedDeltaTime()
		void Register_UnityEngine_Time_get_fixedDeltaTime();
		Register_UnityEngine_Time_get_fixedDeltaTime();

		//System.Single UnityEngine.Time::get_realtimeSinceStartup()
		void Register_UnityEngine_Time_get_realtimeSinceStartup();
		Register_UnityEngine_Time_get_realtimeSinceStartup();

		//System.Single UnityEngine.Time::get_smoothDeltaTime()
		void Register_UnityEngine_Time_get_smoothDeltaTime();
		Register_UnityEngine_Time_get_smoothDeltaTime();

		//System.Single UnityEngine.Time::get_time()
		void Register_UnityEngine_Time_get_time();
		Register_UnityEngine_Time_get_time();

		//System.Single UnityEngine.Time::get_timeScale()
		void Register_UnityEngine_Time_get_timeScale();
		Register_UnityEngine_Time_get_timeScale();

		//System.Single UnityEngine.Time::get_unscaledDeltaTime()
		void Register_UnityEngine_Time_get_unscaledDeltaTime();
		Register_UnityEngine_Time_get_unscaledDeltaTime();

		//System.Single UnityEngine.Time::get_unscaledTime()
		void Register_UnityEngine_Time_get_unscaledTime();
		Register_UnityEngine_Time_get_unscaledTime();

		//System.Void UnityEngine.Time::set_timeScale(System.Single)
		void Register_UnityEngine_Time_set_timeScale();
		Register_UnityEngine_Time_set_timeScale();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.TouchScreenKeyboard

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
		void Register_UnityEngine_TouchScreenKeyboard_get_active();
		Register_UnityEngine_TouchScreenKeyboard_get_active();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canGetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canSetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();

		//System.IntPtr UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
		void Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();
		Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();

		//System.String UnityEngine.TouchScreenKeyboard::get_text()
		void Register_UnityEngine_TouchScreenKeyboard_get_text();
		Register_UnityEngine_TouchScreenKeyboard_get_text();

		//System.Void UnityEngine.TouchScreenKeyboard::GetSelection(System.Int32&,System.Int32&)
		void Register_UnityEngine_TouchScreenKeyboard_GetSelection();
		Register_UnityEngine_TouchScreenKeyboard_GetSelection();

		//System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_TouchScreenKeyboard_Internal_Destroy();
		Register_UnityEngine_TouchScreenKeyboard_Internal_Destroy();

		//System.Void UnityEngine.TouchScreenKeyboard::SetSelection(System.Int32,System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_SetSelection();
		Register_UnityEngine_TouchScreenKeyboard_SetSelection();

		//System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_active();
		Register_UnityEngine_TouchScreenKeyboard_set_active();

		//System.Void UnityEngine.TouchScreenKeyboard::set_characterLimit(System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();
		Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();

		//System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_hideInput();
		Register_UnityEngine_TouchScreenKeyboard_set_hideInput();

		//System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
		void Register_UnityEngine_TouchScreenKeyboard_set_text();
		Register_UnityEngine_TouchScreenKeyboard_set_text();

		//UnityEngine.TouchScreenKeyboard/Status UnityEngine.TouchScreenKeyboard::get_status()
		void Register_UnityEngine_TouchScreenKeyboard_get_status();
		Register_UnityEngine_TouchScreenKeyboard_get_status();

	//End Registrations for type : UnityEngine.TouchScreenKeyboard

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
		void Register_UnityEngine_Transform_IsChildOf();
		Register_UnityEngine_Transform_IsChildOf();

		//System.Boolean UnityEngine.Transform::IsNonUniformScaleTransform()
		void Register_UnityEngine_Transform_IsNonUniformScaleTransform();
		Register_UnityEngine_Transform_IsNonUniformScaleTransform();

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::GetChildCount()
		void Register_UnityEngine_Transform_GetChildCount();
		Register_UnityEngine_Transform_GetChildCount();

		//System.Int32 UnityEngine.Transform::GetRotationOrderInternal()
		void Register_UnityEngine_Transform_GetRotationOrderInternal();
		Register_UnityEngine_Transform_GetRotationOrderInternal();

		//System.Int32 UnityEngine.Transform::GetSiblingIndex()
		void Register_UnityEngine_Transform_GetSiblingIndex();
		Register_UnityEngine_Transform_GetSiblingIndex();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Int32 UnityEngine.Transform::internal_getHierarchyCapacity()
		void Register_UnityEngine_Transform_internal_getHierarchyCapacity();
		Register_UnityEngine_Transform_internal_getHierarchyCapacity();

		//System.Int32 UnityEngine.Transform::internal_getHierarchyCount()
		void Register_UnityEngine_Transform_internal_getHierarchyCount();
		Register_UnityEngine_Transform_internal_getHierarchyCount();

		//System.Void UnityEngine.Transform::DetachChildren()
		void Register_UnityEngine_Transform_DetachChildren();
		Register_UnityEngine_Transform_DetachChildren();

		//System.Void UnityEngine.Transform::GetLocalEulerAngles_Injected(UnityEngine.RotationOrder,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_GetLocalEulerAngles_Injected();
		Register_UnityEngine_Transform_GetLocalEulerAngles_Injected();

		//System.Void UnityEngine.Transform::Internal_LookAt_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_Internal_LookAt_Injected();
		Register_UnityEngine_Transform_Internal_LookAt_Injected();

		//System.Void UnityEngine.Transform::InverseTransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformDirection_Injected();
		Register_UnityEngine_Transform_InverseTransformDirection_Injected();

		//System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformPoint_Injected();
		Register_UnityEngine_Transform_InverseTransformPoint_Injected();

		//System.Void UnityEngine.Transform::InverseTransformVector_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformVector_Injected();
		Register_UnityEngine_Transform_InverseTransformVector_Injected();

		//System.Void UnityEngine.Transform::MoveAfterSibling(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_MoveAfterSibling();
		Register_UnityEngine_Transform_MoveAfterSibling();

		//System.Void UnityEngine.Transform::RotateAroundInternal_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Transform_RotateAroundInternal_Injected();
		Register_UnityEngine_Transform_RotateAroundInternal_Injected();

		//System.Void UnityEngine.Transform::RotateAroundLocal_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Transform_RotateAroundLocal_Injected();
		Register_UnityEngine_Transform_RotateAroundLocal_Injected();

		//System.Void UnityEngine.Transform::RotateAround_Injected(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Transform_RotateAround_Injected();
		Register_UnityEngine_Transform_RotateAround_Injected();

		//System.Void UnityEngine.Transform::SendTransformChangedScale()
		void Register_UnityEngine_Transform_SendTransformChangedScale();
		Register_UnityEngine_Transform_SendTransformChangedScale();

		//System.Void UnityEngine.Transform::SetAsFirstSibling()
		void Register_UnityEngine_Transform_SetAsFirstSibling();
		Register_UnityEngine_Transform_SetAsFirstSibling();

		//System.Void UnityEngine.Transform::SetAsLastSibling()
		void Register_UnityEngine_Transform_SetAsLastSibling();
		Register_UnityEngine_Transform_SetAsLastSibling();

		//System.Void UnityEngine.Transform::SetLocalEulerAngles_Injected(UnityEngine.Vector3&,UnityEngine.RotationOrder)
		void Register_UnityEngine_Transform_SetLocalEulerAngles_Injected();
		Register_UnityEngine_Transform_SetLocalEulerAngles_Injected();

		//System.Void UnityEngine.Transform::SetLocalEulerHint_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_SetLocalEulerHint_Injected();
		Register_UnityEngine_Transform_SetLocalEulerHint_Injected();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::SetPositionAndRotation_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_SetPositionAndRotation_Injected();
		Register_UnityEngine_Transform_SetPositionAndRotation_Injected();

		//System.Void UnityEngine.Transform::SetRotationOrderInternal(UnityEngine.RotationOrder)
		void Register_UnityEngine_Transform_SetRotationOrderInternal();
		Register_UnityEngine_Transform_SetRotationOrderInternal();

		//System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
		void Register_UnityEngine_Transform_SetSiblingIndex();
		Register_UnityEngine_Transform_SetSiblingIndex();

		//System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformDirection_Injected();
		Register_UnityEngine_Transform_TransformDirection_Injected();

		//System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformPoint_Injected();
		Register_UnityEngine_Transform_TransformPoint_Injected();

		//System.Void UnityEngine.Transform::TransformVector_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformVector_Injected();
		Register_UnityEngine_Transform_TransformVector_Injected();

		//System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localPosition_Injected();
		Register_UnityEngine_Transform_get_localPosition_Injected();

		//System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_localRotation_Injected();
		Register_UnityEngine_Transform_get_localRotation_Injected();

		//System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localScale_Injected();
		Register_UnityEngine_Transform_get_localScale_Injected();

		//System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();
		Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();

		//System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_lossyScale_Injected();
		Register_UnityEngine_Transform_get_lossyScale_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

		//System.Void UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();
		Register_UnityEngine_Transform_get_worldToLocalMatrix_Injected();

		//System.Void UnityEngine.Transform::internal_setHierarchyCapacity(System.Int32)
		void Register_UnityEngine_Transform_internal_setHierarchyCapacity();
		Register_UnityEngine_Transform_internal_setHierarchyCapacity();

		//System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
		void Register_UnityEngine_Transform_set_hasChanged();
		Register_UnityEngine_Transform_set_hasChanged();

		//System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localPosition_Injected();
		Register_UnityEngine_Transform_set_localPosition_Injected();

		//System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_localRotation_Injected();
		Register_UnityEngine_Transform_set_localRotation_Injected();

		//System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localScale_Injected();
		Register_UnityEngine_Transform_set_localScale_Injected();

		//System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_position_Injected();
		Register_UnityEngine_Transform_set_position_Injected();

		//System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_rotation_Injected();
		Register_UnityEngine_Transform_set_rotation_Injected();

		//UnityEngine.Transform UnityEngine.Transform::FindRelativeTransformWithPath(UnityEngine.Transform,System.String,System.Boolean)
		void Register_UnityEngine_Transform_FindRelativeTransformWithPath();
		Register_UnityEngine_Transform_FindRelativeTransformWithPath();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::GetParent()
		void Register_UnityEngine_Transform_GetParent();
		Register_UnityEngine_Transform_GetParent();

		//UnityEngine.Transform UnityEngine.Transform::GetRoot()
		void Register_UnityEngine_Transform_GetRoot();
		Register_UnityEngine_Transform_GetRoot();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.PixelPerfectRendering

		//System.Void UnityEngine.U2D.PixelPerfectRendering::set_pixelSnapSpacing(System.Single)
		void Register_UnityEngine_U2D_PixelPerfectRendering_set_pixelSnapSpacing();
		Register_UnityEngine_U2D_PixelPerfectRendering_set_pixelSnapSpacing();

	//End Registrations for type : UnityEngine.U2D.PixelPerfectRendering

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlas

		//System.Boolean UnityEngine.U2D.SpriteAtlas::CanBindTo(UnityEngine.Sprite)
		void Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();
		Register_UnityEngine_U2D_SpriteAtlas_CanBindTo();

		//UnityEngine.Sprite UnityEngine.U2D.SpriteAtlas::GetSprite(System.String)
		void Register_UnityEngine_U2D_SpriteAtlas_GetSprite();
		Register_UnityEngine_U2D_SpriteAtlas_GetSprite();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlas

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.U2D.SpriteDataAccessExtensions

		//System.Void UnityEngine.U2D.SpriteDataAccessExtensions::GetChannelInfo_Injected(UnityEngine.Sprite,UnityEngine.Rendering.VertexAttribute,UnityEngine.U2D.SpriteChannelInfo&)
		void Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetChannelInfo_Injected();
		Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetChannelInfo_Injected();

		//System.Void UnityEngine.U2D.SpriteDataAccessExtensions::GetIndicesInfo_Injected(UnityEngine.Sprite,UnityEngine.U2D.SpriteChannelInfo&)
		void Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetIndicesInfo_Injected();
		Register_UnityEngine_U2D_SpriteDataAccessExtensions_GetIndicesInfo_Injected();

	//End Registrations for type : UnityEngine.U2D.SpriteDataAccessExtensions

	//Start Registrations for type : UnityEngine.UISystemProfilerApi

		//System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
		void Register_UnityEngine_UISystemProfilerApi_AddMarker();
		Register_UnityEngine_UISystemProfilerApi_AddMarker();

		//System.Void UnityEngine.UISystemProfilerApi::BeginSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_BeginSample();
		Register_UnityEngine_UISystemProfilerApi_BeginSample();

		//System.Void UnityEngine.UISystemProfilerApi::EndSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_EndSample();
		Register_UnityEngine_UISystemProfilerApi_EndSample();

	//End Registrations for type : UnityEngine.UISystemProfilerApi

	//Start Registrations for type : UnityEngine.UnhandledExceptionHandler

		//System.Void UnityEngine.UnhandledExceptionHandler::iOSNativeUnhandledExceptionHandler(System.String,System.String,System.String)
		void Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();
		Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();

	//End Registrations for type : UnityEngine.UnhandledExceptionHandler

	//Start Registrations for type : UnityEngine.UnityLogWriter

		//System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
		void Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();
		Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();

	//End Registrations for type : UnityEngine.UnityLogWriter

	//Start Registrations for type : UnityEngine.Video.VideoClip

		//System.Boolean UnityEngine.Video.VideoClip::get_sRGB()
		void Register_UnityEngine_Video_VideoClip_get_sRGB();
		Register_UnityEngine_Video_VideoClip_get_sRGB();

		//System.Double UnityEngine.Video.VideoClip::get_frameRate()
		void Register_UnityEngine_Video_VideoClip_get_frameRate();
		Register_UnityEngine_Video_VideoClip_get_frameRate();

		//System.Double UnityEngine.Video.VideoClip::get_length()
		void Register_UnityEngine_Video_VideoClip_get_length();
		Register_UnityEngine_Video_VideoClip_get_length();

		//System.String UnityEngine.Video.VideoClip::GetAudioLanguage(System.UInt16)
		void Register_UnityEngine_Video_VideoClip_GetAudioLanguage();
		Register_UnityEngine_Video_VideoClip_GetAudioLanguage();

		//System.String UnityEngine.Video.VideoClip::get_originalPath()
		void Register_UnityEngine_Video_VideoClip_get_originalPath();
		Register_UnityEngine_Video_VideoClip_get_originalPath();

		//System.UInt16 UnityEngine.Video.VideoClip::GetAudioChannelCount(System.UInt16)
		void Register_UnityEngine_Video_VideoClip_GetAudioChannelCount();
		Register_UnityEngine_Video_VideoClip_GetAudioChannelCount();

		//System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
		void Register_UnityEngine_Video_VideoClip_get_audioTrackCount();
		Register_UnityEngine_Video_VideoClip_get_audioTrackCount();

		//System.UInt32 UnityEngine.Video.VideoClip::GetAudioSampleRate(System.UInt16)
		void Register_UnityEngine_Video_VideoClip_GetAudioSampleRate();
		Register_UnityEngine_Video_VideoClip_GetAudioSampleRate();

		//System.UInt32 UnityEngine.Video.VideoClip::get_height()
		void Register_UnityEngine_Video_VideoClip_get_height();
		Register_UnityEngine_Video_VideoClip_get_height();

		//System.UInt32 UnityEngine.Video.VideoClip::get_pixelAspectRatioDenominator()
		void Register_UnityEngine_Video_VideoClip_get_pixelAspectRatioDenominator();
		Register_UnityEngine_Video_VideoClip_get_pixelAspectRatioDenominator();

		//System.UInt32 UnityEngine.Video.VideoClip::get_pixelAspectRatioNumerator()
		void Register_UnityEngine_Video_VideoClip_get_pixelAspectRatioNumerator();
		Register_UnityEngine_Video_VideoClip_get_pixelAspectRatioNumerator();

		//System.UInt32 UnityEngine.Video.VideoClip::get_width()
		void Register_UnityEngine_Video_VideoClip_get_width();
		Register_UnityEngine_Video_VideoClip_get_width();

		//System.UInt64 UnityEngine.Video.VideoClip::get_frameCount()
		void Register_UnityEngine_Video_VideoClip_get_frameCount();
		Register_UnityEngine_Video_VideoClip_get_frameCount();

	//End Registrations for type : UnityEngine.Video.VideoClip

	//Start Registrations for type : UnityEngine.Video.VideoPlayer

		//System.Boolean UnityEngine.Video.VideoPlayer::GetDirectAudioMute(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_GetDirectAudioMute();
		Register_UnityEngine_Video_VideoPlayer_GetDirectAudioMute();

		//System.Boolean UnityEngine.Video.VideoPlayer::IsAudioTrackEnabled(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_IsAudioTrackEnabled();
		Register_UnityEngine_Video_VideoPlayer_IsAudioTrackEnabled();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()
		void Register_UnityEngine_Video_VideoPlayer_get_canSetDirectAudioVolume();
		Register_UnityEngine_Video_VideoPlayer_get_canSetDirectAudioVolume();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()
		void Register_UnityEngine_Video_VideoPlayer_get_canSetPlaybackSpeed();
		Register_UnityEngine_Video_VideoPlayer_get_canSetPlaybackSpeed();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()
		void Register_UnityEngine_Video_VideoPlayer_get_canSetSkipOnDrop();
		Register_UnityEngine_Video_VideoPlayer_get_canSetSkipOnDrop();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTime()
		void Register_UnityEngine_Video_VideoPlayer_get_canSetTime();
		Register_UnityEngine_Video_VideoPlayer_get_canSetTime();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTimeSource()
		void Register_UnityEngine_Video_VideoPlayer_get_canSetTimeSource();
		Register_UnityEngine_Video_VideoPlayer_get_canSetTimeSource();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_canStep()
		void Register_UnityEngine_Video_VideoPlayer_get_canStep();
		Register_UnityEngine_Video_VideoPlayer_get_canStep();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_isLooping()
		void Register_UnityEngine_Video_VideoPlayer_get_isLooping();
		Register_UnityEngine_Video_VideoPlayer_get_isLooping();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
		void Register_UnityEngine_Video_VideoPlayer_get_isPaused();
		Register_UnityEngine_Video_VideoPlayer_get_isPaused();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
		void Register_UnityEngine_Video_VideoPlayer_get_isPlaying();
		Register_UnityEngine_Video_VideoPlayer_get_isPlaying();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
		void Register_UnityEngine_Video_VideoPlayer_get_isPrepared();
		Register_UnityEngine_Video_VideoPlayer_get_isPrepared();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_playOnAwake()
		void Register_UnityEngine_Video_VideoPlayer_get_playOnAwake();
		Register_UnityEngine_Video_VideoPlayer_get_playOnAwake();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()
		void Register_UnityEngine_Video_VideoPlayer_get_sendFrameReadyEvents();
		Register_UnityEngine_Video_VideoPlayer_get_sendFrameReadyEvents();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_skipOnDrop()
		void Register_UnityEngine_Video_VideoPlayer_get_skipOnDrop();
		Register_UnityEngine_Video_VideoPlayer_get_skipOnDrop();

		//System.Boolean UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()
		void Register_UnityEngine_Video_VideoPlayer_get_waitForFirstFrame();
		Register_UnityEngine_Video_VideoPlayer_get_waitForFirstFrame();

		//System.Double UnityEngine.Video.VideoPlayer::get_clockTime()
		void Register_UnityEngine_Video_VideoPlayer_get_clockTime();
		Register_UnityEngine_Video_VideoPlayer_get_clockTime();

		//System.Double UnityEngine.Video.VideoPlayer::get_externalReferenceTime()
		void Register_UnityEngine_Video_VideoPlayer_get_externalReferenceTime();
		Register_UnityEngine_Video_VideoPlayer_get_externalReferenceTime();

		//System.Double UnityEngine.Video.VideoPlayer::get_length()
		void Register_UnityEngine_Video_VideoPlayer_get_length();
		Register_UnityEngine_Video_VideoPlayer_get_length();

		//System.Double UnityEngine.Video.VideoPlayer::get_time()
		void Register_UnityEngine_Video_VideoPlayer_get_time();
		Register_UnityEngine_Video_VideoPlayer_get_time();

		//System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
		void Register_UnityEngine_Video_VideoPlayer_get_frame();
		Register_UnityEngine_Video_VideoPlayer_get_frame();

		//System.Single UnityEngine.Video.VideoPlayer::GetDirectAudioVolume(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_GetDirectAudioVolume();
		Register_UnityEngine_Video_VideoPlayer_GetDirectAudioVolume();

		//System.Single UnityEngine.Video.VideoPlayer::get_frameRate()
		void Register_UnityEngine_Video_VideoPlayer_get_frameRate();
		Register_UnityEngine_Video_VideoPlayer_get_frameRate();

		//System.Single UnityEngine.Video.VideoPlayer::get_playbackSpeed()
		void Register_UnityEngine_Video_VideoPlayer_get_playbackSpeed();
		Register_UnityEngine_Video_VideoPlayer_get_playbackSpeed();

		//System.Single UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()
		void Register_UnityEngine_Video_VideoPlayer_get_targetCameraAlpha();
		Register_UnityEngine_Video_VideoPlayer_get_targetCameraAlpha();

		//System.String UnityEngine.Video.VideoPlayer::GetAudioLanguageCode(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_GetAudioLanguageCode();
		Register_UnityEngine_Video_VideoPlayer_GetAudioLanguageCode();

		//System.String UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()
		void Register_UnityEngine_Video_VideoPlayer_get_targetMaterialProperty();
		Register_UnityEngine_Video_VideoPlayer_get_targetMaterialProperty();

		//System.String UnityEngine.Video.VideoPlayer::get_url()
		void Register_UnityEngine_Video_VideoPlayer_get_url();
		Register_UnityEngine_Video_VideoPlayer_get_url();

		//System.UInt16 UnityEngine.Video.VideoPlayer::GetAudioChannelCount(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_GetAudioChannelCount();
		Register_UnityEngine_Video_VideoPlayer_GetAudioChannelCount();

		//System.UInt16 UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()
		void Register_UnityEngine_Video_VideoPlayer_GetControlledAudioTrackCount();
		Register_UnityEngine_Video_VideoPlayer_GetControlledAudioTrackCount();

		//System.UInt16 UnityEngine.Video.VideoPlayer::get_audioTrackCount()
		void Register_UnityEngine_Video_VideoPlayer_get_audioTrackCount();
		Register_UnityEngine_Video_VideoPlayer_get_audioTrackCount();

		//System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()
		void Register_UnityEngine_Video_VideoPlayer_get_controlledAudioTrackMaxCount();
		Register_UnityEngine_Video_VideoPlayer_get_controlledAudioTrackMaxCount();

		//System.UInt32 UnityEngine.Video.VideoPlayer::GetAudioSampleRate(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_GetAudioSampleRate();
		Register_UnityEngine_Video_VideoPlayer_GetAudioSampleRate();

		//System.UInt32 UnityEngine.Video.VideoPlayer::get_height()
		void Register_UnityEngine_Video_VideoPlayer_get_height();
		Register_UnityEngine_Video_VideoPlayer_get_height();

		//System.UInt32 UnityEngine.Video.VideoPlayer::get_pixelAspectRatioDenominator()
		void Register_UnityEngine_Video_VideoPlayer_get_pixelAspectRatioDenominator();
		Register_UnityEngine_Video_VideoPlayer_get_pixelAspectRatioDenominator();

		//System.UInt32 UnityEngine.Video.VideoPlayer::get_pixelAspectRatioNumerator()
		void Register_UnityEngine_Video_VideoPlayer_get_pixelAspectRatioNumerator();
		Register_UnityEngine_Video_VideoPlayer_get_pixelAspectRatioNumerator();

		//System.UInt32 UnityEngine.Video.VideoPlayer::get_width()
		void Register_UnityEngine_Video_VideoPlayer_get_width();
		Register_UnityEngine_Video_VideoPlayer_get_width();

		//System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
		void Register_UnityEngine_Video_VideoPlayer_get_frameCount();
		Register_UnityEngine_Video_VideoPlayer_get_frameCount();

		//System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_EnableAudioTrack();
		Register_UnityEngine_Video_VideoPlayer_EnableAudioTrack();

		//System.Void UnityEngine.Video.VideoPlayer::Pause()
		void Register_UnityEngine_Video_VideoPlayer_Pause();
		Register_UnityEngine_Video_VideoPlayer_Pause();

		//System.Void UnityEngine.Video.VideoPlayer::Play()
		void Register_UnityEngine_Video_VideoPlayer_Play();
		Register_UnityEngine_Video_VideoPlayer_Play();

		//System.Void UnityEngine.Video.VideoPlayer::Prepare()
		void Register_UnityEngine_Video_VideoPlayer_Prepare();
		Register_UnityEngine_Video_VideoPlayer_Prepare();

		//System.Void UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_SetControlledAudioTrackCount();
		Register_UnityEngine_Video_VideoPlayer_SetControlledAudioTrackCount();

		//System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioMute(System.UInt16,System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_SetDirectAudioMute();
		Register_UnityEngine_Video_VideoPlayer_SetDirectAudioMute();

		//System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)
		void Register_UnityEngine_Video_VideoPlayer_SetDirectAudioVolume();
		Register_UnityEngine_Video_VideoPlayer_SetDirectAudioVolume();

		//System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
		void Register_UnityEngine_Video_VideoPlayer_SetTargetAudioSource();
		Register_UnityEngine_Video_VideoPlayer_SetTargetAudioSource();

		//System.Void UnityEngine.Video.VideoPlayer::StepForward()
		void Register_UnityEngine_Video_VideoPlayer_StepForward();
		Register_UnityEngine_Video_VideoPlayer_StepForward();

		//System.Void UnityEngine.Video.VideoPlayer::Stop()
		void Register_UnityEngine_Video_VideoPlayer_Stop();
		Register_UnityEngine_Video_VideoPlayer_Stop();

		//System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
		void Register_UnityEngine_Video_VideoPlayer_set_aspectRatio();
		Register_UnityEngine_Video_VideoPlayer_set_aspectRatio();

		//System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
		void Register_UnityEngine_Video_VideoPlayer_set_audioOutputMode();
		Register_UnityEngine_Video_VideoPlayer_set_audioOutputMode();

		//System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
		void Register_UnityEngine_Video_VideoPlayer_set_clip();
		Register_UnityEngine_Video_VideoPlayer_set_clip();

		//System.Void UnityEngine.Video.VideoPlayer::set_externalReferenceTime(System.Double)
		void Register_UnityEngine_Video_VideoPlayer_set_externalReferenceTime();
		Register_UnityEngine_Video_VideoPlayer_set_externalReferenceTime();

		//System.Void UnityEngine.Video.VideoPlayer::set_frame(System.Int64)
		void Register_UnityEngine_Video_VideoPlayer_set_frame();
		Register_UnityEngine_Video_VideoPlayer_set_frame();

		//System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_set_isLooping();
		Register_UnityEngine_Video_VideoPlayer_set_isLooping();

		//System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_set_playOnAwake();
		Register_UnityEngine_Video_VideoPlayer_set_playOnAwake();

		//System.Void UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)
		void Register_UnityEngine_Video_VideoPlayer_set_playbackSpeed();
		Register_UnityEngine_Video_VideoPlayer_set_playbackSpeed();

		//System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
		void Register_UnityEngine_Video_VideoPlayer_set_renderMode();
		Register_UnityEngine_Video_VideoPlayer_set_renderMode();

		//System.Void UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_set_sendFrameReadyEvents();
		Register_UnityEngine_Video_VideoPlayer_set_sendFrameReadyEvents();

		//System.Void UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_set_skipOnDrop();
		Register_UnityEngine_Video_VideoPlayer_set_skipOnDrop();

		//System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
		void Register_UnityEngine_Video_VideoPlayer_set_source();
		Register_UnityEngine_Video_VideoPlayer_set_source();

		//System.Void UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)
		void Register_UnityEngine_Video_VideoPlayer_set_targetCamera();
		Register_UnityEngine_Video_VideoPlayer_set_targetCamera();

		//System.Void UnityEngine.Video.VideoPlayer::set_targetCamera3DLayout(UnityEngine.Video.Video3DLayout)
		void Register_UnityEngine_Video_VideoPlayer_set_targetCamera3DLayout();
		Register_UnityEngine_Video_VideoPlayer_set_targetCamera3DLayout();

		//System.Void UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)
		void Register_UnityEngine_Video_VideoPlayer_set_targetCameraAlpha();
		Register_UnityEngine_Video_VideoPlayer_set_targetCameraAlpha();

		//System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)
		void Register_UnityEngine_Video_VideoPlayer_set_targetMaterialProperty();
		Register_UnityEngine_Video_VideoPlayer_set_targetMaterialProperty();

		//System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialRenderer(UnityEngine.Renderer)
		void Register_UnityEngine_Video_VideoPlayer_set_targetMaterialRenderer();
		Register_UnityEngine_Video_VideoPlayer_set_targetMaterialRenderer();

		//System.Void UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)
		void Register_UnityEngine_Video_VideoPlayer_set_targetTexture();
		Register_UnityEngine_Video_VideoPlayer_set_targetTexture();

		//System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
		void Register_UnityEngine_Video_VideoPlayer_set_time();
		Register_UnityEngine_Video_VideoPlayer_set_time();

		//System.Void UnityEngine.Video.VideoPlayer::set_timeReference(UnityEngine.Video.VideoTimeReference)
		void Register_UnityEngine_Video_VideoPlayer_set_timeReference();
		Register_UnityEngine_Video_VideoPlayer_set_timeReference();

		//System.Void UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)
		void Register_UnityEngine_Video_VideoPlayer_set_timeSource();
		Register_UnityEngine_Video_VideoPlayer_set_timeSource();

		//System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
		void Register_UnityEngine_Video_VideoPlayer_set_url();
		Register_UnityEngine_Video_VideoPlayer_set_url();

		//System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
		void Register_UnityEngine_Video_VideoPlayer_set_waitForFirstFrame();
		Register_UnityEngine_Video_VideoPlayer_set_waitForFirstFrame();

		//UnityEngine.AudioSource UnityEngine.Video.VideoPlayer::GetTargetAudioSource(System.UInt16)
		void Register_UnityEngine_Video_VideoPlayer_GetTargetAudioSource();
		Register_UnityEngine_Video_VideoPlayer_GetTargetAudioSource();

		//UnityEngine.Camera UnityEngine.Video.VideoPlayer::get_targetCamera()
		void Register_UnityEngine_Video_VideoPlayer_get_targetCamera();
		Register_UnityEngine_Video_VideoPlayer_get_targetCamera();

		//UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
		void Register_UnityEngine_Video_VideoPlayer_get_targetTexture();
		Register_UnityEngine_Video_VideoPlayer_get_targetTexture();

		//UnityEngine.Renderer UnityEngine.Video.VideoPlayer::get_targetMaterialRenderer()
		void Register_UnityEngine_Video_VideoPlayer_get_targetMaterialRenderer();
		Register_UnityEngine_Video_VideoPlayer_get_targetMaterialRenderer();

		//UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
		void Register_UnityEngine_Video_VideoPlayer_get_texture();
		Register_UnityEngine_Video_VideoPlayer_get_texture();

		//UnityEngine.Video.Video3DLayout UnityEngine.Video.VideoPlayer::get_targetCamera3DLayout()
		void Register_UnityEngine_Video_VideoPlayer_get_targetCamera3DLayout();
		Register_UnityEngine_Video_VideoPlayer_get_targetCamera3DLayout();

		//UnityEngine.Video.VideoAspectRatio UnityEngine.Video.VideoPlayer::get_aspectRatio()
		void Register_UnityEngine_Video_VideoPlayer_get_aspectRatio();
		Register_UnityEngine_Video_VideoPlayer_get_aspectRatio();

		//UnityEngine.Video.VideoAudioOutputMode UnityEngine.Video.VideoPlayer::get_audioOutputMode()
		void Register_UnityEngine_Video_VideoPlayer_get_audioOutputMode();
		Register_UnityEngine_Video_VideoPlayer_get_audioOutputMode();

		//UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
		void Register_UnityEngine_Video_VideoPlayer_get_clip();
		Register_UnityEngine_Video_VideoPlayer_get_clip();

		//UnityEngine.Video.VideoRenderMode UnityEngine.Video.VideoPlayer::get_renderMode()
		void Register_UnityEngine_Video_VideoPlayer_get_renderMode();
		Register_UnityEngine_Video_VideoPlayer_get_renderMode();

		//UnityEngine.Video.VideoSource UnityEngine.Video.VideoPlayer::get_source()
		void Register_UnityEngine_Video_VideoPlayer_get_source();
		Register_UnityEngine_Video_VideoPlayer_get_source();

		//UnityEngine.Video.VideoTimeReference UnityEngine.Video.VideoPlayer::get_timeReference()
		void Register_UnityEngine_Video_VideoPlayer_get_timeReference();
		Register_UnityEngine_Video_VideoPlayer_get_timeReference();

		//UnityEngine.Video.VideoTimeSource UnityEngine.Video.VideoPlayer::get_timeSource()
		void Register_UnityEngine_Video_VideoPlayer_get_timeSource();
		Register_UnityEngine_Video_VideoPlayer_get_timeSource();

	//End Registrations for type : UnityEngine.Video.VideoPlayer

	//Start Registrations for type : UnityEngine.WebCamTexture

		//System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
		void Register_UnityEngine_WebCamTexture_get_videoRotationAngle();
		Register_UnityEngine_WebCamTexture_get_videoRotationAngle();

		//System.String UnityEngine.WebCamTexture::get_deviceName()
		void Register_UnityEngine_WebCamTexture_get_deviceName();
		Register_UnityEngine_WebCamTexture_get_deviceName();

		//System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_WebCamTexture_Internal_CreateWebCamTexture();
		Register_UnityEngine_WebCamTexture_Internal_CreateWebCamTexture();

		//System.Void UnityEngine.WebCamTexture::Play()
		void Register_UnityEngine_WebCamTexture_Play();
		Register_UnityEngine_WebCamTexture_Play();

		//System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
		void Register_UnityEngine_WebCamTexture_set_deviceName();
		Register_UnityEngine_WebCamTexture_set_deviceName();

		//UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
		void Register_UnityEngine_WebCamTexture_get_devices();
		Register_UnityEngine_WebCamTexture_get_devices();

	//End Registrations for type : UnityEngine.WebCamTexture

	//Start Registrations for type : UnityEngine.XR.InputDevices

		//System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)
		void Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Quaternionf();
		Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Quaternionf();

		//System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Vector3f(System.UInt64,System.String,UnityEngine.Vector3&)
		void Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Vector3f();
		Register_UnityEngine_XR_InputDevices_TryGetFeatureValue_Vector3f();

		//System.String UnityEngine.XR.InputDevices::GetDeviceName(System.UInt64)
		void Register_UnityEngine_XR_InputDevices_GetDeviceName();
		Register_UnityEngine_XR_InputDevices_GetDeviceName();

		//System.Void UnityEngine.XR.InputDevices::GetDevices_Internal(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
		void Register_UnityEngine_XR_InputDevices_GetDevices_Internal();
		Register_UnityEngine_XR_InputDevices_GetDevices_Internal();

		//UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevices::GetDeviceCharacteristics(System.UInt64)
		void Register_UnityEngine_XR_InputDevices_GetDeviceCharacteristics();
		Register_UnityEngine_XR_InputDevices_GetDeviceCharacteristics();

	//End Registrations for type : UnityEngine.XR.InputDevices

	//Start Registrations for type : UnityEngine.XR.InputTracking

		//System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
		void Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();
		Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();

	//End Registrations for type : UnityEngine.XR.InputTracking

	//Start Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

		//System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
		void Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();
		Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();

	//End Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

	//Start Registrations for type : UnityEngine.XR.XRDisplaySubsystem

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::AddGraphicsThreadMirrorViewBlit(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Int32)
		void Register_UnityEngine_XR_XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit();
		Register_UnityEngine_XR_XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::GetMirrorViewBlitDesc(UnityEngine.RenderTexture,UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32)
		void Register_UnityEngine_XR_XRDisplaySubsystem_GetMirrorViewBlitDesc();
		Register_UnityEngine_XR_XRDisplaySubsystem_GetMirrorViewBlitDesc();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetCullingParams(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetCullingParams();
		Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetCullingParams();

		//System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetRenderPass();
		Register_UnityEngine_XR_XRDisplaySubsystem_Internal_TryGetRenderPass();

		//System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetPreferredMirrorBlitMode()
		void Register_UnityEngine_XR_XRDisplaySubsystem_GetPreferredMirrorBlitMode();
		Register_UnityEngine_XR_XRDisplaySubsystem_GetPreferredMirrorBlitMode();

		//System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetRenderPassCount()
		void Register_UnityEngine_XR_XRDisplaySubsystem_GetRenderPassCount();
		Register_UnityEngine_XR_XRDisplaySubsystem_GetRenderPassCount();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::SetMSAALevel(System.Int32)
		void Register_UnityEngine_XR_XRDisplaySubsystem_SetMSAALevel();
		Register_UnityEngine_XR_XRDisplaySubsystem_SetMSAALevel();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_disableLegacyRenderer(System.Boolean)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_disableLegacyRenderer();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_disableLegacyRenderer();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_sRGB(System.Boolean)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_sRGB();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_sRGB();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_scaleOfAllRenderTargets(System.Single)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_scaleOfAllRenderTargets();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_scaleOfAllRenderTargets();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_textureLayout(UnityEngine.XR.XRDisplaySubsystem/TextureLayout)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_textureLayout();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_textureLayout();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_zFar(System.Single)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_zFar();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_zFar();

		//System.Void UnityEngine.XR.XRDisplaySubsystem::set_zNear(System.Single)
		void Register_UnityEngine_XR_XRDisplaySubsystem_set_zNear();
		Register_UnityEngine_XR_XRDisplaySubsystem_set_zNear();

	//End Registrations for type : UnityEngine.XR.XRDisplaySubsystem

	//Start Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc

		//System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDesc_GetBlitParameter_Injected();
		Register_UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDesc_GetBlitParameter_Injected();

	//End Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc

	//Start Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRRenderPass

		//System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameterCount_Injected();
		Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameterCount_Injected();

		//System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&,UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
		void Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameter_Injected();
		Register_UnityEngine_XR_XRDisplaySubsystem_XRRenderPass_GetRenderParameter_Injected();

	//End Registrations for type : UnityEngine.XR.XRDisplaySubsystem/XRRenderPass

	//Start Registrations for type : UnityEngine.XR.XRSettings

		//System.Boolean UnityEngine.XR.XRSettings::get_enabled()
		void Register_UnityEngine_XR_XRSettings_get_enabled();
		Register_UnityEngine_XR_XRSettings_get_enabled();

		//System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
		void Register_UnityEngine_XR_XRSettings_get_isDeviceActive();
		Register_UnityEngine_XR_XRSettings_get_isDeviceActive();

		//System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureHeight();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureHeight();

		//System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureWidth();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureWidth();

		//System.Single UnityEngine.XR.XRSettings::get_eyeTextureResolutionScale()
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureResolutionScale();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureResolutionScale();

		//System.Single UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()
		void Register_UnityEngine_XR_XRSettings_get_renderViewportScaleInternal();
		Register_UnityEngine_XR_XRSettings_get_renderViewportScaleInternal();

		//System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
		void Register_UnityEngine_XR_XRSettings_get_loadedDeviceName();
		Register_UnityEngine_XR_XRSettings_get_loadedDeviceName();

		//System.String[] UnityEngine.XR.XRSettings::get_supportedDevices()
		void Register_UnityEngine_XR_XRSettings_get_supportedDevices();
		Register_UnityEngine_XR_XRSettings_get_supportedDevices();

		//System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_XR_XRSettings_get_eyeTextureDesc_Injected();
		Register_UnityEngine_XR_XRSettings_get_eyeTextureDesc_Injected();

		//System.Void UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)
		void Register_UnityEngine_XR_XRSettings_set_eyeTextureResolutionScale();
		Register_UnityEngine_XR_XRSettings_set_eyeTextureResolutionScale();

		//UnityEngine.XR.XRSettings/StereoRenderingMode UnityEngine.XR.XRSettings::get_stereoRenderingMode()
		void Register_UnityEngine_XR_XRSettings_get_stereoRenderingMode();
		Register_UnityEngine_XR_XRSettings_get_stereoRenderingMode();

	//End Registrations for type : UnityEngine.XR.XRSettings

	//Start Registrations for type : UnityEngineInternal.Input.NativeInputSystem

		//System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
		void Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();
		Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();

	//End Registrations for type : UnityEngineInternal.Input.NativeInputSystem

}
