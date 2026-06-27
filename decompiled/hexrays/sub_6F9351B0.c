int __thiscall sub_6F9351B0(_BYTE *this)
{
  _BYTE *v1; // esi@1
  int v2; // ebx@1
  signed int v3; // eax@3
  int v4; // ebx@5
  int v5; // ebx@7
  int result; // eax@8

  v1 = this;
  v2 = 0;
  do
  {
    v3 = sub_6F8A37C0(v2);
    if ( v3 == -1 )
    {
      v1[12] = 0;
      goto LABEL_5;
    }
    v1[v2++ + 13] = v3;
  }
  while ( v2 != 128 );
  v1[12] = 1;
LABEL_5:
  v4 = 0;
  do
  {
    *(_WORD *)&v1[2 * v4 + 142] = sub_6F8A2170(v4);
    ++v4;
  }
  while ( v4 != 256 );
  v5 = 0;
  do
  {
    *(_WORD *)&v1[2 * v5 + 654] = 1 << v5;
    result = sub_6F8C3830(1 << v5);
    *(_WORD *)&v1[2 * v5++ + 686] = result;
  }
  while ( v5 != 16 );
  return result;
}
