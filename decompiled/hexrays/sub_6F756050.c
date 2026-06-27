void __usercall sub_6F756050(_DWORD *a1@<eax>)
{
  int *v1; // esi@1
  int v2; // eax@1
  int v3; // ebx@2
  size_t v4; // ebp@5
  void *v5; // eax@5
  void *v6; // eax@14
  int v7; // ST08_4@19
  int v8; // [sp+1Ch] [bp-30h]@5
  int v9; // [sp+24h] [bp-28h]@3
  int v10; // [sp+28h] [bp-24h]@2
  size_t v11; // [sp+2Ch] [bp-20h]@5

  v1 = a1;
  v2 = sub_6F88C880((const wchar_t *)*a1, "rb");
  if ( v2 )
  {
    v3 = v2;
    sub_6F69CB30(&v10);
    while ( sub_6F88D190(v3, (char *)&v9, 4) )
    {
      switch ( v3 )
      {
        case 6:
          sub_6F88D190(v3, (char *)&v11, 4);
          v4 = v11;
          v5 = malloc(v11);
          *(_DWORD *)v5 = v4;
          v8 = (int)v5;
          sub_6F88D190(v3, (char *)v5 + 4, v4 - 4);
          if ( *(_DWORD *)(v8 + 4) == 1 )
          {
            sub_6F69C440(v8);
            free((void *)v8);
          }
          else
          {
            free((void *)v8);
          }
          break;
        case 5:
          sub_6F88D190(v3, (char *)&v11, 4);
          sub_6F71F240(v11);
          break;
        case 4:
          sub_6F88D190(v3, (char *)&v11, 4);
          sub_6F728FF0();
          break;
        case 3:
          sub_6F88D190(v3, (char *)&word_6FBB979C, 4);
          break;
        case 2:
          sub_6F88D190(v3, (char *)&v11, 4);
          sub_6F724020(v11);
          break;
        case 1:
          sub_6F88D190(v3, (char *)&v11, 4);
          sub_6F71EB20();
          break;
        case 0:
          sub_6F88D190(v3, (char *)&dword_6FBB97A0, 4);
          break;
        case 7:
          sub_6F6A5EA0();
          sub_6F734150();
          sub_6F734070();
          break;
        default:
          nullsub_10();
          break;
      }
    }
    v6 = (void *)v10;
    if ( *(_DWORD *)(v10 + 4) == 1 )
    {
      sub_6F69C440(v10);
      v6 = (void *)v10;
    }
    free(v6);
    sub_6F88C240(v3);
  }
  else
  {
    v7 = *v1;
    nullsub_10();
  }
}
