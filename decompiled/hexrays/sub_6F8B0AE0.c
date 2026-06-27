int __cdecl sub_6F8B0AE0(int a1, signed int a2)
{
  _DWORD *v2; // esi@1
  signed int v3; // ebx@2
  int v4; // ebp@2
  int **v5; // edi@3
  int *v6; // esi@6
  int *v7; // eax@9
  void *v8; // ST00_4@10
  int *v10; // eax@15
  int *v11; // eax@22

  v2 = (_DWORD *)a1;
  if ( !(a2 & 3) || (v2 = sub_6F8B0850(a1, dword_6FBA6CFC[a2 & 3], 0)) != 0 )
  {
    v3 = a2 >> 2;
    v4 = (int)v2;
    if ( a2 >> 2 )
    {
      v5 = (int **)dword_70372BA0;
      if ( !dword_70372BA0 )
      {
        sub_6F8B05F0(1);
        v5 = (int **)dword_70372BA0;
        if ( !dword_70372BA0 )
        {
          v11 = sub_6F8B0700(1);
          v5 = (int **)v11;
          if ( !v11 )
          {
            dword_70372BA0 = 0;
            return 0;
          }
          v11[5] = 625;
          v11[4] = 1;
          dword_70372BA0 = (int)v11;
          *v11 = 0;
        }
        if ( dword_703734E8 == 2 )
          LeaveCriticalSection(&stru_70373518);
      }
      v4 = (int)v2;
      if ( v3 & 1 )
        goto LABEL_9;
LABEL_5:
      v3 >>= 1;
      if ( v3 )
      {
        while ( 1 )
        {
          v6 = *v5;
          if ( *v5 )
            goto LABEL_27;
          sub_6F8B05F0(1);
          v6 = *v5;
          if ( !*v5 )
          {
            v10 = sub_6F8B0960((int)v5, (int)v5);
            v6 = v10;
            *v5 = v10;
            if ( !v10 )
              return 0;
            *v10 = 0;
          }
          if ( dword_703734E8 != 2 )
          {
LABEL_27:
            v5 = (int **)v6;
          }
          else
          {
            v5 = (int **)v6;
            LeaveCriticalSection(&stru_70373518);
          }
          if ( !(v3 & 1) )
            goto LABEL_5;
LABEL_9:
          v7 = sub_6F8B0960(v4, (int)v5);
          if ( !v7 )
            return 0;
          v8 = (void *)v4;
          v4 = (int)v7;
          sub_6F8B07F0(v8);
          v3 >>= 1;
          if ( !v3 )
            return v4;
        }
      }
    }
    return v4;
  }
  return 0;
}
