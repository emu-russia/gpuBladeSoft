int __usercall sub_6F86F624@<eax>(int a1@<eax>)
{
  int *v1; // esi@1
  int v2; // ebx@1
  int v3; // eax@1
  int v5; // eax@4

  v1 = (int *)a1;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(v2 + 4);
  if ( !v3 )
  {
    if ( !(unsigned __int8)(*(int (__cdecl **)(int *))(v2 + 12))(v1) )
    {
      v5 = *v1;
      *(_DWORD *)(v5 + 20) = 25;
      (*(void (__cdecl **)(int *))v5)(v1);
    }
    v3 = *(_DWORD *)(v2 + 4);
  }
  *(_DWORD *)(v2 + 4) = v3 - 1;
  return *(_BYTE *)(*(_DWORD *)v2)++;
}
