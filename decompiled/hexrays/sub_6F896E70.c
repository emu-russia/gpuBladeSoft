int __usercall sub_6F896E70@<eax>(int a1@<eax>)
{
  _BYTE *v1; // edx@1
  int v2; // ebx@2
  int v3; // esi@2
  int v4; // ecx@3
  int result; // eax@4

  v1 = *(_BYTE **)(a1 + 12);
  if ( *v1 == 84 )
  {
    v2 = a1;
    *(_DWORD *)(a1 + 12) = v1 + 1;
    v3 = sub_6F896E30(a1);
    if ( v3 < 0 || (v4 = *(_DWORD *)(v2 + 20), v4 >= *(_DWORD *)(v2 + 24)) )
    {
      result = 0;
    }
    else
    {
      result = 16 * *(_DWORD *)(v2 + 20) + *(_DWORD *)(v2 + 16);
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(v2 + 20) = v4 + 1;
      *(_DWORD *)result = 5;
      *(_DWORD *)(result + 8) = v3;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
