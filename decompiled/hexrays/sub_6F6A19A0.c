void __cdecl sub_6F6A19A0(char *a1)
{
  size_t v1; // eax@2
  size_t v2; // ebx@2
  int *v3; // eax@4
  void *Memory; // [sp+18h] [bp-24h]@1
  size_t v5; // [sp+1Ch] [bp-20h]@5
  size_t Dst; // [sp+20h] [bp-1Ch]@1

  Memory = &Dst;
  if ( !a1 )
    sub_6F95AFD0("basic_string::_M_construct null not valid");
  v1 = strlen(a1);
  v2 = v1;
  if ( v1 > 0xF )
  {
    v3 = (int *)sub_6F961B60(v1 + 1);
    Dst = v2;
    Memory = v3;
LABEL_12:
    memcpy(v3, a1, v2);
    v3 = (int *)Memory;
    goto LABEL_5;
  }
  if ( v1 == 1 )
  {
    LOBYTE(Dst) = *a1;
    v3 = (int *)&Dst;
    goto LABEL_5;
  }
  v3 = (int *)&Dst;
  if ( v2 )
    goto LABEL_12;
LABEL_5:
  v5 = v2;
  *((_BYTE *)v3 + v2) = 0;
  sub_6F7562F0(&Memory);
  if ( Memory != &Dst )
    j_free_1(Memory);
}
