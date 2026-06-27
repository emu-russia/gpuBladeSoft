signed int __stdcall sub_6F681020(int a1, signed int a2, int a3)
{
  signed int result; // eax@1
  signed __int32 v4; // ebx@10
  signed __int32 v5; // eax@13
  signed int v6; // ebx@14

  result = a2;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = *(_DWORD *)(__readfsdword(24) + 4);
      while ( 1 )
      {
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)&dword_70373594, v4, 0);
        if ( !v5 )
        {
          v6 = 0;
          goto LABEL_15;
        }
        if ( v4 == v5 )
          break;
        Sleep(0x3E8u);
      }
      v6 = 1;
LABEL_15:
      if ( dword_70373598 == 1 )
      {
        amsg_exit(31);
      }
      else if ( !dword_70373598 )
      {
        dword_70373598 = 1;
        initterm((int)&unk_70377008, (int)&unk_70377010);
      }
      if ( dword_70373598 == 1 )
      {
        initterm((int)&unk_70377000, (int)&unk_70377004);
        dword_70373598 = 2;
      }
      if ( !v6 )
        _InterlockedExchange((volatile signed __int32 *)&dword_70373594, 0);
      if ( TlsCallback_0 )
        TlsCallback_0(a1, 2, a3);
      ++dword_6FBB500C;
      result = 1;
    }
    else
    {
      result = 1;
    }
  }
  else if ( dword_6FBB500C > 0 )
  {
    --dword_6FBB500C;
    while ( _InterlockedCompareExchange((volatile signed __int32 *)&dword_70373594, 1, 0) )
      Sleep(0x3E8u);
    if ( dword_70373598 == 2 )
    {
      sub_6F8B1950((int)&unk_6FBB5000);
      dword_70373598 = 0;
      _InterlockedExchange((volatile signed __int32 *)&dword_70373594, 0);
      result = 1;
    }
    else
    {
      amsg_exit(31);
      result = 1;
    }
  }
  return result;
}
