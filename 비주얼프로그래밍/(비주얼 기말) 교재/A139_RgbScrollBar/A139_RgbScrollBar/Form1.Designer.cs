
namespace A139_RgbScrollBar
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtR = new System.Windows.Forms.TextBox();
            this.txtG = new System.Windows.Forms.TextBox();
            this.txtB = new System.Windows.Forms.TextBox();
            this.scrR = new System.Windows.Forms.HScrollBar();
            this.scrG = new System.Windows.Forms.HScrollBar();
            this.scrB = new System.Windows.Forms.HScrollBar();
            this.panel1 = new System.Windows.Forms.Panel();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(66, 240);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(33, 15);
            this.label1.TabIndex = 0;
            this.label1.Text = "Red";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(66, 290);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(46, 15);
            this.label2.TabIndex = 1;
            this.label2.Text = "Green";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(66, 340);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(36, 15);
            this.label3.TabIndex = 2;
            this.label3.Text = "Blue";
            // 
            // txtR
            // 
            this.txtR.Location = new System.Drawing.Point(502, 235);
            this.txtR.Name = "txtR";
            this.txtR.Size = new System.Drawing.Size(133, 25);
            this.txtR.TabIndex = 3;
            this.txtR.TextChanged += new System.EventHandler(this.txt_TextChanged);
            // 
            // txtG
            // 
            this.txtG.Location = new System.Drawing.Point(502, 287);
            this.txtG.Name = "txtG";
            this.txtG.Size = new System.Drawing.Size(133, 25);
            this.txtG.TabIndex = 4;
            this.txtG.TextChanged += new System.EventHandler(this.txt_TextChanged);
            // 
            // txtB
            // 
            this.txtB.Location = new System.Drawing.Point(502, 338);
            this.txtB.Name = "txtB";
            this.txtB.Size = new System.Drawing.Size(133, 25);
            this.txtB.TabIndex = 5;
            this.txtB.TextChanged += new System.EventHandler(this.txt_TextChanged);
            // 
            // scrR
            // 
            this.scrR.Location = new System.Drawing.Point(132, 237);
            this.scrR.Name = "scrR";
            this.scrR.Size = new System.Drawing.Size(347, 24);
            this.scrR.TabIndex = 6;
            this.scrR.Scroll += new System.Windows.Forms.ScrollEventHandler(this.scrR_Scroll);
            // 
            // scrG
            // 
            this.scrG.Location = new System.Drawing.Point(132, 288);
            this.scrG.Name = "scrG";
            this.scrG.Size = new System.Drawing.Size(347, 24);
            this.scrG.TabIndex = 7;
            // 
            // scrB
            // 
            this.scrB.Location = new System.Drawing.Point(132, 339);
            this.scrB.Name = "scrB";
            this.scrB.Size = new System.Drawing.Size(347, 24);
            this.scrB.TabIndex = 8;
            // 
            // panel1
            // 
            this.panel1.Location = new System.Drawing.Point(57, 25);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(577, 194);
            this.panel1.TabIndex = 9;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(674, 417);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.scrB);
            this.Controls.Add(this.scrG);
            this.Controls.Add(this.scrR);
            this.Controls.Add(this.txtB);
            this.Controls.Add(this.txtG);
            this.Controls.Add(this.txtR);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "RGB Scroll";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtR;
        private System.Windows.Forms.TextBox txtG;
        private System.Windows.Forms.TextBox txtB;
        private System.Windows.Forms.HScrollBar scrR;
        private System.Windows.Forms.HScrollBar scrG;
        private System.Windows.Forms.HScrollBar scrB;
        private System.Windows.Forms.Panel panel1;
    }
}

