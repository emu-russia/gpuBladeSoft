void __usercall sub_6F8B05F0(int a1@<eax>)
{
  int v1; // esi@1
  int v2; // eax@4
  signed __int32 v3; // eax@7

  v1 = a1;
  if ( dword_703734E8 == 2 )
    goto LABEL_9;
  if ( dword_703734E8 )
  {
    if ( dword_703734E8 != 1 )
      return;
    do
    {
LABEL_4:
      Sleep(1u);
      v2 = dword_703734E8;
    }
    while ( dword_703734E8 == 1 );
    goto LABEL_5;
  }
  v3 = _InterlockedExchange((volatile signed __int32 *)&dword_703734E8, 1);
  if ( !v3 )
  {
    InitializeCriticalSection(&CriticalSection);
    InitializeCriticalSection(&stru_70373518);
    sub_6F6813F0((int)sub_6F8B06C0);
    dword_703734E8 = 2;
    goto LABEL_9;
  }
  if ( v3 == 2 )
  {
    dword_703734E8 = 2;
    goto LABEL_9;
  }
  v2 = dword_703734E8;
  if ( dword_703734E8 == 1 )
    goto LABEL_4;
LABEL_5:
  if ( v2 == 2 )
LABEL_9:
    EnterCriticalSection(&CriticalSection + v1);
}
