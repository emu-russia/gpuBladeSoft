signed int __cdecl sub_6F8B59E0(unsigned int a1)
{
  int v1; // ebx@1
  int v2; // eax@4
  void *v3; // edx@5
  signed int result; // eax@10
  char v5; // [sp+1Ch] [bp-10h]@3

  v1 = sub_6F8B3E80(a1);
  sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
  if ( v1 && *(_DWORD *)(v1 + 20) && GetHandleInformation(*(HANDLE *)(v1 + 20), (LPDWORD)&v5) )
  {
    v2 = *(_DWORD *)(v1 + 36);
    if ( v2 & 4 )
    {
      sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
      result = 22;
    }
    else
    {
      v3 = *(void **)(v1 + 20);
      *(_DWORD *)(v1 + 20) = 0;
      *(_DWORD *)(v1 + 36) = v2 | 4;
      if ( v3 )
      {
        CloseHandle(v3);
        if ( *(_DWORD *)(v1 + 104) )
        {
          if ( *(_DWORD *)(v1 + 24) )
            CloseHandle(*(HANDLE *)(v1 + 24));
          *(_DWORD *)(v1 + 24) = 0;
          sub_6F8B33F0((int *)(v1 + 28));
          sub_6F8B3BF0(v1 + 56);
          sub_6F8B38D0(v1);
        }
      }
      sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
      result = 0;
    }
  }
  else
  {
    sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
    result = 3;
  }
  return result;
}
