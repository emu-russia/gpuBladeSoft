volatile signed __int32 **__thiscall sub_6F9383B0(volatile signed __int32 **this, volatile signed __int32 **a2)
{
  volatile signed __int32 **result; // eax@1

  result = this;
  _InterlockedAdd(*a2, 1u);
  _InterlockedSub(*this, 1u);
  *this = *a2;
  return result;
}
