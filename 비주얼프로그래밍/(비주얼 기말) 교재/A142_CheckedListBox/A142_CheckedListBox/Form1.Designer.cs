
namespace A142_CheckedListBox
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.cLstBox = new System.Windows.Forms.CheckedListBox();
            this.btnTo = new System.Windows.Forms.Button();
            this.btnAll = new System.Windows.Forms.Button();
            this.btnBack = new System.Windows.Forms.Button();
            this.btnDelAll = new System.Windows.Forms.Button();
            this.lstBox = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // cLstBox
            // 
            this.cLstBox.FormattingEnabled = true;
            this.cLstBox.Items.AddRange(new object[] {
            "오스트리아, 빈",
            "호주, 멜버른",
            "일본, 오사카",
            "캐나다, 캘거리",
            "호주, 시드니",
            "캐나다, 밴쿠버",
            "일본, 도쿄",
            "캐나다, 토론토",
            "덴마크, 코펜하겐",
            "호주, 애들레이드"});
            this.cLstBox.Location = new System.Drawing.Point(19, 25);
            this.cLstBox.Name = "cLstBox";
            this.cLstBox.Size = new System.Drawing.Size(206, 244);
            this.cLstBox.TabIndex = 0;
            // 
            // btnTo
            // 
            this.btnTo.Location = new System.Drawing.Point(253, 69);
            this.btnTo.Name = "btnTo";
            this.btnTo.Size = new System.Drawing.Size(109, 28);
            this.btnTo.TabIndex = 2;
            this.btnTo.Text = ">";
            this.btnTo.UseVisualStyleBackColor = true;
            this.btnTo.Click += new System.EventHandler(this.button1_Click);
            // 
            // btnAll
            // 
            this.btnAll.Location = new System.Drawing.Point(253, 117);
            this.btnAll.Name = "btnAll";
            this.btnAll.Size = new System.Drawing.Size(109, 28);
            this.btnAll.TabIndex = 3;
            this.btnAll.Text = ">>";
            this.btnAll.UseVisualStyleBackColor = true;
            this.btnAll.Click += new System.EventHandler(this.button2_Click);
            // 
            // btnBack
            // 
            this.btnBack.Location = new System.Drawing.Point(253, 165);
            this.btnBack.Name = "btnBack";
            this.btnBack.Size = new System.Drawing.Size(109, 28);
            this.btnBack.TabIndex = 4;
            this.btnBack.Text = "<";
            this.btnBack.UseVisualStyleBackColor = true;
            this.btnBack.Click += new System.EventHandler(this.button3_Click);
            // 
            // btnDelAll
            // 
            this.btnDelAll.Location = new System.Drawing.Point(488, 241);
            this.btnDelAll.Name = "btnDelAll";
            this.btnDelAll.Size = new System.Drawing.Size(109, 28);
            this.btnDelAll.TabIndex = 5;
            this.btnDelAll.Text = "모두 삭제";
            this.btnDelAll.UseVisualStyleBackColor = true;
            this.btnDelAll.Click += new System.EventHandler(this.button4_Click);
            // 
            // lstBox
            // 
            this.lstBox.FormattingEnabled = true;
            this.lstBox.ItemHeight = 15;
            this.lstBox.Location = new System.Drawing.Point(393, 30);
            this.lstBox.Name = "lstBox";
            this.lstBox.Size = new System.Drawing.Size(203, 184);
            this.lstBox.TabIndex = 6;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(617, 298);
            this.Controls.Add(this.lstBox);
            this.Controls.Add(this.btnDelAll);
            this.Controls.Add(this.btnBack);
            this.Controls.Add(this.btnAll);
            this.Controls.Add(this.btnTo);
            this.Controls.Add(this.cLstBox);
            this.Name = "Form1";
            this.Text = "Travel Wish List";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.CheckedListBox cLstBox;
        private System.Windows.Forms.Button btnTo;
        private System.Windows.Forms.Button btnAll;
        private System.Windows.Forms.Button btnBack;
        private System.Windows.Forms.Button btnDelAll;
        private System.Windows.Forms.ListBox lstBox;
    }
}

