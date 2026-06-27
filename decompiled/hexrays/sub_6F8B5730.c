signed int __cdecl sub_6F8B5730(unsigned int a1, _DWORD *a2)
{
  int v2; // eax@1
  signed int v3; // ebx@2
  void *v4; // eax@2
  signed int result; // eax@4
  _DWORD *v6; // eax@5
  int v7; // eax@6
  void *v8; // eax@8
  char v9; // [sp+1Ch] [bp-10h]@3

  v2 = sub_6F8B3E80(a1);
  if ( v2 && (v3 = v2, (v4 = *(void **)(v2 + 20)) != 0) && GetHandleInformation(v4, (LPDWORD)&v9) )
  {
    result = 22;
    if ( !(*(_BYTE *)(v3 + 36) & 4) )
    {
      v6 = sub_6F8B3D30();
      if ( v6 )
        v7 = v6[45];
      else
        v7 = 0;
      if ( a1 == v7 )
      {
        result = 36;
      }
      else
      {
        v8 = *(void **)(v3 + 20);
        if ( !*(_DWORD *)(v3 + 104) || (char *)v8 - 1 <= (char *)0xFFFFFFFD )
        {
          WaitForSingleObject(v8, 0xFFFFFFFF);
          v8 = *(void **)(v3 + 20);
        }
        CloseHandle(v8);
        if ( *(_DWORD *)(v3 + 24) )
          CloseHandle(*(HANDLE *)(v3 + 24));
        *(_DWORD *)(v3 + 24) = 0;
        if ( a2 )
          *a2 = *(_DWORD *)(v3 + 4);
        sub_6F8B33F0((int *)(v3 + 28));
        sub_6F8B3BF0(v3 + 56);
        sub_6F8B38D0(v3);
        result = 0;
      }
    }
  }
  else
  {
    result = 3;
  }
  return result;
}
