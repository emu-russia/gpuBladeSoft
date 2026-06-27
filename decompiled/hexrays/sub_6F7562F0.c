void __usercall sub_6F7562F0(_DWORD *a1@<eax>)
{
  int *v1; // esi@1
  int v2; // eax@1
  int v3; // ebx@2
  size_t v4; // ebp@5
  void *v5; // eax@5
  void *v6; // edx@5
  void *v7; // eax@15
  int v8; // ST08_4@18
  int v9; // [sp+1Ch] [bp-30h]@5
  int v10; // [sp+24h] [bp-28h]@3
  int v11; // [sp+28h] [bp-24h]@2
  size_t v12; // [sp+2Ch] [bp-20h]@5

  v1 = a1;
  v2 = sub_6F88C880((const wchar_t *)*a1, "rb");
  if ( v2 )
  {
    v3 = v2;
    sub_6F69CB30(&v11);
LABEL_3:
    while ( sub_6F88D190(v3, (char *)&v10, 4) )
    {
      switch ( v3 )
      {
        case 7:
          goto LABEL_3;
        case 6:
          sub_6F88D190(v3, (char *)&v12, 4);
          v4 = v12;
          v5 = malloc(v12);
          *(_DWORD *)v5 = v4;
          v9 = (int)v5;
          sub_6F88D190(v3, (char *)v5 + 4, v4 - 4);
          v6 = (void *)v9;
          if ( *(_DWORD *)(v9 + 4) == 1 )
          {
            sub_6F69C440(v9);
            v6 = (void *)v9;
          }
          free(v6);
          break;
        case 5:
          sub_6F88D190(v3, (char *)&v12, 4);
          sub_6F71F240(v12);
          break;
        case 4:
          sub_6F88D190(v3, (char *)&v12, 4);
          sub_6F728FF0();
          break;
        case 3:
          sub_6F88D190(v3, (char *)&word_6FBB979C, 4);
          break;
        case 2:
          sub_6F88D190(v3, (char *)&v12, 4);
          sub_6F724020(v12);
          break;
        case 1:
          sub_6F88D190(v3, (char *)&v12, 4);
          sub_6F71EB20();
          break;
        case 0:
          sub_6F88D190(v3, (char *)&dword_6FBB97A0, 4);
          break;
        default:
          nullsub_10();
          break;
      }
    }
    sub_6F6A5EA0();
    v7 = (void *)v11;
    if ( *(_DWORD *)(v11 + 4) == 1 )
    {
      sub_6F69C440(v11);
      v7 = (void *)v11;
    }
    free(v7);
    sub_6F88C240(v3);
  }
  else
  {
    v8 = *v1;
    nullsub_10();
  }
}
