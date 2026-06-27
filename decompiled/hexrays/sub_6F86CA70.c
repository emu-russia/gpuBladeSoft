int __usercall sub_6F86CA70@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // eax@1
  int v3; // esi@1
  int *v4; // edx@2
  int v5; // eax@2
  int result; // eax@3

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 120);
  v3 = *(_DWORD *)(v2 + 24);
  if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v3 + 12))(v2) )
  {
    v4 = *(int **)(v1 + 120);
    v5 = *v4;
    *(_DWORD *)(v5 + 20) = 25;
    (*(void (__cdecl **)(int *))v5)(v4);
  }
  *(_DWORD *)(v1 + 112) = *(_DWORD *)v3;
  result = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v1 + 116) = result;
  return result;
}
