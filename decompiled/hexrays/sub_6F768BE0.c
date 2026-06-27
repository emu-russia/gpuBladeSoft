int __usercall sub_6F768BE0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // esi@1
  int v3; // edi@1
  void (__cdecl *v4)(int); // eax@1
  int result; // eax@3
  int v6; // edx@6

  v1 = a1;
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 96);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = *(void (__cdecl **)(int))(*(_DWORD *)(v2 + 12) + 68);
  if ( v4 )
    v4(v1);
  result = *(_DWORD *)(v1 + 156);
  if ( result && *(_BYTE *)(result + 4) & 1 )
  {
    sub_6F773D90(*(_DWORD *)(*(_DWORD *)(v1 + 4) + 100), *(_DWORD *)(v1 + 88));
    result = *(_DWORD *)(v1 + 156);
    *(_DWORD *)(v1 + 88) = 0;
    *(_DWORD *)(result + 4) &= 0xFFFFFFFE;
  }
  else
  {
    *(_DWORD *)(v1 + 88) = 0;
    if ( !result )
      return result;
  }
  v6 = **(_DWORD **)v2;
  if ( !(BYTE1(v6) & 2) )
  {
    sub_6F7CA360(*(_DWORD *)result);
    result = *(_DWORD *)(v1 + 156);
    *(_DWORD *)result = 0;
  }
  result = sub_6F773D90(v3, result);
  *(_DWORD *)(v1 + 156) = 0;
  return result;
}
