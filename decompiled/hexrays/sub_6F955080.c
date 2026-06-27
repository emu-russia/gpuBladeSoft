int __thiscall sub_6F955080(int this)
{
  int v1; // esi@1
  int result; // eax@1
  int v3; // ebx@3

  v1 = this;
  result = *(_DWORD *)(this + 24);
  if ( result )
  {
    do
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 12), 0xFFFFFFFF) )
        break;
      v3 = *(_DWORD *)result;
      j_free_1((void *)result);
      result = v3;
    }
    while ( v3 );
  }
  *(_DWORD *)(v1 + 24) = 0;
  return result;
}
