signed int __cdecl sub_6F8B54C0(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // eax@1
  signed int v5; // edi@2
  int v6; // ebx@4
  HANDLE v7; // eax@5
  int v8; // ecx@10
  int v9; // esi@11
  int v10; // eax@12
  void *v11; // esi@14
  signed int v12; // ecx@15
  int v13; // eax@15

  v4 = sub_6F8B3B40();
  if ( !v4 )
    return 11;
  v5 = v4;
  if ( a1 )
    *a1 = *(_DWORD *)(v4 + 180);
  *(_DWORD *)(v4 + 104) = 0;
  v6 = 0;
  *(_DWORD *)(v4 + 36) = 1;
  *(_DWORD *)(v4 + 4) = a4;
  *(_DWORD *)(v4 + 20) = -1;
  *(_DWORD *)(v4 + 8) = a3;
  while ( 1 )
  {
    v7 = CreateEventA(0, 1, 0, 0);
    *(_DWORD *)(v5 + 24) = v7;
    if ( v7 )
      break;
    if ( v6 )
    {
      Sleep(0x14u);
      if ( v6 == 4 )
        break;
    }
    else
    {
      Sleep(0);
    }
    ++v6;
  }
  *(_DWORD *)(v5 + 28) = -1;
  sub_6F8B3BF0(v5 + 56);
  v8 = *(_DWORD *)(v5 + 24);
  *(_DWORD *)v5 = -1162743795;
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 100) = 0;
  if ( v8 )
  {
    v9 = 0;
    if ( a2 )
    {
      v10 = *(_DWORD *)a2;
      v9 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(v5 + 36) = *(_DWORD *)a2;
      if ( v10 & 8 )
        *(_DWORD *)(v5 + 108) = *((_DWORD *)sub_6F8B3D30() + 27);
      else
        *(_DWORD *)(v5 + 108) = *(_DWORD *)(a2 + 12);
    }
    v11 = (void *)beginthreadex(0, v9, sub_6F8B41B0, v5, 4, 0);
    if ( (char *)v11 - 1 <= (char *)0xFFFFFFFD )
    {
      v12 = *(_DWORD *)(v5 + 108);
      v13 = -15;
      if ( v12 >= -14 )
      {
        v13 = -2;
        if ( v12 >= -1 )
        {
          v13 = 15;
          if ( v12 <= 14 )
          {
            v13 = 2;
            if ( v12 <= 2 )
              v13 = *(_DWORD *)(v5 + 108);
          }
        }
      }
      SetThreadPriority(v11, v13);
      ResetEvent(*(HANDLE *)(v5 + 24));
      if ( *(_BYTE *)(v5 + 36) & 4 )
      {
        *(_DWORD *)(v5 + 20) = 0;
        ResumeThread(v11);
        CloseHandle(v11);
      }
      else
      {
        *(_DWORD *)(v5 + 20) = v11;
        ResumeThread(v11);
      }
      Sleep(0);
      return 0;
    }
    if ( *(_DWORD *)(v5 + 24) )
      CloseHandle(*(HANDLE *)(v5 + 24));
    sub_6F8B33F0((int *)(v5 + 28));
    sub_6F8B3BF0(v5 + 56);
    *(_DWORD *)(v5 + 24) = 0;
    *(_DWORD *)(v5 + 20) = 0;
  }
  if ( a1 )
    *a1 = 0;
  sub_6F8B38D0(v5);
  return 11;
}
