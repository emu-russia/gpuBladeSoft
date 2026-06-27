signed __int32 __usercall sub_6F8B2EE0@<eax>(volatile signed __int32 *a1@<eax>, signed __int32 a2@<edx>)
{
  volatile signed __int32 *v2; // esi@1
  signed __int32 v3; // ebx@1
  _DWORD *v4; // eax@1
  signed __int32 v5; // ecx@1
  signed int v6; // eax@2

  v2 = a1;
  v3 = a2;
  v4 = malloc(0x14u);
  v5 = (signed __int32)v4;
  if ( v4 )
  {
    *v4 = 0;
    v6 = 2;
    if ( v3 != -3 )
      v6 = v3 == -2;
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = -1;
    if ( _InterlockedCompareExchange(v2, v5, v3) != v5 )
    {
      free((void *)v5);
      v5 = *v2;
    }
  }
  return v5;
}
