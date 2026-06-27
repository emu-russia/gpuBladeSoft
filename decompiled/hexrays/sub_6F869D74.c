int __usercall sub_6F869D74@<eax>(char a1@<al>, int a2@<edx>)
{
  int v2; // ecx@1
  char *v3; // ebx@1
  int result; // eax@1
  int v5; // eax@4
  int *v6; // [sp+1Ch] [bp-Ch]@3

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(char **)v2;
  *v3 = a1;
  *(_DWORD *)v2 = v3 + 1;
  result = *(_DWORD *)(v2 + 4) - 1;
  *(_DWORD *)(v2 + 4) = result;
  if ( !result )
  {
    v6 = (int *)a2;
    result = (*(int (__cdecl **)(int))(v2 + 12))(a2);
    if ( !(_BYTE)result )
    {
      v5 = *v6;
      *(_DWORD *)(v5 + 20) = 25;
      result = (*(int (__cdecl **)(int *))v5)(v6);
    }
  }
  return result;
}
