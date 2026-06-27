int __usercall sub_6F85D350@<eax>(int a1@<eax>, char a2@<dl>)
{
  int *v2; // ebx@1
  int result; // eax@1
  char *v4; // ecx@1
  int v5; // edx@1
  int v6; // eax@4

  v2 = (int *)a1;
  result = *(_DWORD *)(a1 + 24);
  v4 = *(char **)result;
  *v4 = a2;
  *(_DWORD *)result = v4 + 1;
  v5 = *(_DWORD *)(result + 4) - 1;
  *(_DWORD *)(result + 4) = v5;
  if ( !v5 )
  {
    result = (*(int (__cdecl **)(int *))(result + 12))(v2);
    if ( !(_BYTE)result )
    {
      v6 = *v2;
      *(_DWORD *)(v6 + 20) = 25;
      result = (*(int (__cdecl **)(int *))v6)(v2);
    }
  }
  return result;
}
