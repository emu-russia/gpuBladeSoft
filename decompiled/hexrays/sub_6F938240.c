volatile signed __int32 *__thiscall sub_6F938240(void *this, volatile signed __int32 **a2)
{
  volatile signed __int32 *result; // eax@1

  result = *a2;
  *(_DWORD *)this = *a2;
  _InterlockedAdd(result, 1u);
  return result;
}
